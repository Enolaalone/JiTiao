package P1223N144;

import java.util.*;
import java.io.*;

class Peo implements Comparable<Peo>{
    int n;
    int time;

    Peo(int n,int time){
        this.n = n;
        this.time = time;
    }

    @Override
    public int compareTo(Peo b){
        return time - b.time;
    }


}

public class Main {
    static int n;
    static Peo[] num;
    public static void main(String[] args)throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        num = new Peo[n];
        st = new StringTokenizer(br.readLine());

        for(int i = 0; i<n; i++){
           num[i] = new Peo(i+1, Integer.parseInt(st.nextToken()));
        }

       Arrays.sort(num);

        double sum = 0;
        System.out.print(num[0].n+" ");
        for(int i = 1; i<n; i++){
            sum+=num[i-1].time;// 加上前一个人的等待时间；
            num[i].time +=num[i-1].time;
            System.out.print(num[i].n+" ");
        }

        System.out.println();
        System.out.printf("%.2f",sum/n);

    }
}
