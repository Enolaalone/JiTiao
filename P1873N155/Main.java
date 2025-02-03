package P1873N155;

import java.util.*;
import java.io.*;

public class Main {
    static int N;
    static long M;
    static Long[] num;
    public static void main(String[] args)throws Exception    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");
        N = Integer.parseInt(input[0]);
        M = Integer.parseInt(input[1]);

        input = br.readLine().split(" ");
        num = new Long[N];
        for(int i = 0; i<N; i++){
            num[i] = Long.parseLong(input[i]);
        }

        Arrays.sort(num); // Integer类型参数才可以使用Arrays.sort;


        int n = num.length - 1;
        int ans = 0;
        long sum = 0;


        while (sum < M) {
            sum += (num[n] - num[n-1])*(num.length - n); // 高度差*位置差值
            n--;
        }
        n++; // 返回sum > M的阶段 
        ans =(int)(num[n-1] + (sum - M)/(num.length - n));

        System.out.println(ans);
        br.close();

    }

    // public static boolean ifGetEnoughWood(Long h){
    //     long wood = 0;
    //     for(int i = 0; i<num.length; i++){
    //         if(num[i]>h) wood += num[i] - h; // 获取高于h的部分；
    //     }

    //     return wood>=M; // 是否获取足够的木材
    // }
}
