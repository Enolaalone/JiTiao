package P1208N150;
import java.io.*;
import java.util.*;

class Milk implements Comparable<Milk>{
    int price;
    int cap;

    Milk(int price,int cap){
        this.price = price;
        this.cap = cap;
    }

    @Override
    public int compareTo(Milk m){
        if (this.price < m.price) {
           return -1; 
        } else if(this.price == m.price) {
            return this.cap - m.cap;
        } else return 1;
    }
}

public class Main {
    static int n,m;
    static Milk[] milks;
    public static void main(String[] args)throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in)) ;
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        m = Integer.parseInt(st.nextToken()); // 需要牛奶的总量
        n = Integer.parseInt(st.nextToken()); // 奶农个数

        milks = new Milk[n];
        for(int i = 0; i<n; i++){
            st = new StringTokenizer(br.readLine());
            milks[i] = new Milk(Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken()));
        }

        Arrays.sort(milks);

        int price = 0;
        int remainCap = m;

        int i = 0;
        while (i<n) {
           if(remainCap >= milks[i].cap ) { // 所需容量 > 奶农可以供给的
                price += milks[i].price*milks[i].cap;
                remainCap -= milks[i].cap;
           } else if(remainCap < milks[i].cap){ // 所需容量 < 奶农可以供给的
                price += milks[i].price*remainCap;
                remainCap = 0;
                break; // 完成所需
           } 
           i++; // 遍历所有奶农
        }

        System.out.println(price);
    }
}
