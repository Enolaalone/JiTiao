package P1478N149;

import java.util.*;
import java.io.*;

class Apple implements Comparable<Apple>{
    int high;
    int force;

    Apple(int high,int force){
        this.force = force;
        this.high = high;
    }

    @Override // 比较器
    public int compareTo(Apple a){
        if(this.force < a.force)return -1;
        else if(this.force == a.force){
            return this.high - a.high;
        }
        else  return 1;
    }
}

public class Main {
    static int n,s,a,b;
    static int ans = 0;
    static Apple[] apples;
    public static void main(String[] args)throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken()); // 苹果数
        s = Integer.parseInt(st.nextToken()); // 力气

        apples = new Apple[n];

        st = new StringTokenizer(br.readLine());
        a = Integer.parseInt(st.nextToken()); // 椅子
        b = Integer.parseInt(st.nextToken()); // 伸手

        for(int i = 0; i<n; i++){
            st = new StringTokenizer(br.readLine());
            apples[i] = new Apple(Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken()));
        }

        Arrays.sort(apples);

        int i = 0;
        while (i < n) {
            if(apples[i].high<=a+b && apples[i].force<=s) {
                s-=apples[i].force;
                ans++;
            }

            if(s<=0)break;
            i++;
        }
        System.out.println(ans);
    }
}
