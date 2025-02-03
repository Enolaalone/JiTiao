package P1803N145;

import java.io.*;
import java.util.*;

class Time implements Comparable<Time>{
    int begin;
    int end;
    
    Time(int begin,int end){
        this.begin = begin;
        this.end = end;
    }

    public int compareTo(Time t){
        return this.end -  t.end;
    }
}

public class Main {
    static int n,ans = 1;
    static Time[] times;

    public static void main(String[] args)throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());

        times = new Time[n];
        for(int i = 0; i<n; i++){
            st = new StringTokenizer(br.readLine());
            times[i] = new Time(Integer.parseInt(st.nextToken()),Integer.parseInt(st.nextToken()));

        }
        
        // 按照 终点排序
        Arrays.sort(times);
        int i = 0,j = 0;
        while (i<n) {
            // 比较前的end 和当前的起始位置
            // 如end小于下一个的begin ans++;
            //  大于则遍历下一个
            if(times[j].end<=times[i].begin){
                ans++;
                j = i;
            }
            i++;
        }
        System.out.println(ans);
        
    }
    
}
