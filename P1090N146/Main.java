package P1090N146;

import java.util.*;
import java.io.*;

public class Main{
    static int n;
    // 最小堆 从小到大
    static PriorityQueue<Integer>  pq = new PriorityQueue<>((a,b)->{
        return a - b;
    }); // lambda 表达式；
    static int ans = 0;
    
    public static void main(String[] args)throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i<n; i++){
            pq.offer(Integer.parseInt(st.nextToken()));
        }

        while (pq.size()>1) { //  取出最小值合并
            Integer r = pq.poll();
            Integer l = pq.poll();

            int k = r+l;
            ans+=k;
            pq.offer(k);
        }

        System.out.println(ans);
    }

}