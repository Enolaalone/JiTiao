package P2240N143;

import java.util.*;

class Gold implements Comparable<Gold>{
    int value;
    int weight;
    double uniValue;

    Gold(int w,int v){
        this.value = v;
        this.weight = w;
        uniValue = value/(double)weight;
    }

    @Override
    public int compareTo(Gold b){
        // 浮点数包装类的比较
        return Double.compare(b.uniValue, uniValue);
    }
}

public class Main {
    static int N,T;
    static Gold[] num;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        N = sc.nextInt();
        T = sc.nextInt();

        num = new Gold[N];
        for(int i = 0; i<N; i++){
            num[i] = new Gold(sc.nextInt(),sc.nextInt());
        }

        Arrays.sort(num); // 排序

        int remainSpace = T;
        double value = 0;

        for(Gold g:num){
            if(remainSpace>=g.weight){//可以整个装入
                remainSpace-=g.weight;
                value+=g.value;
            }
            else{ // 部分装入
                value+=g.uniValue*remainSpace;
                remainSpace = 0;
                break;
            }
        }

        System.out.printf("%.2f",value);

        sc.close();
    }
}