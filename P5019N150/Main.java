package P5019N150;

import java.util.*;
import java.io.*;

public class Main {
    static int n,ans;
    static int[] num;
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine())        ;

        n = Integer.parseInt(st.nextToken());
        num = new int[n];

        st =new StringTokenizer(br.readLine());
        for(int i = 0; i<n; i++){
            num[i] = Integer.parseInt(st.nextToken());
        }

        for(int i = 1; i<n; i++){
            // 记录高低差
            if(num[i]>num[i-1])ans+=num[i] - num[i-1]; // 差值是需要额外填充的部分 
        }
        System.out.println(num[0]+ans);
    
    }
} 
