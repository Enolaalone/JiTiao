package P1102N154;

import java.util.*;
import java.io.*;
public class Main {
    static int N,C,ans;
    static int[] num;

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");

        N = Integer.parseInt(input[0]);
        C = Integer.parseInt(input[1]);

        input = br.readLine().split(" ");
        num = new int[N];
        for(int i = 0; i<N; i++){
            num[i] = Integer.parseInt(input[i]);
        }

        Arrays.sort(num);
        for(int i = 0; i<N; i++){
            int k = num[i] -C;
            ans += upperBound(num, 0, N-1, k) - lowerBound(num, 0, N-1, k);
            if(num[i] - C == num[i])ans--;
        }
        

        System.out.println(ans);
        br.close();
    }

    public static int lowerBound(int[] a,int b,int e,int x){
        int l = b;
        int h = e;
        while (l<h) {
            int mid = l + (h - l)/2;
            if(a[mid] < x){ // 
                l = mid + 1;
            } else {
                h = mid;
            }
        }
        return l;
    }

    public static int upperBound(int[] a,int b,int e,int x){
        int l = b;
        int h = e;
        while (l<h) {
           int mid = l + (h - l)/2;
           if(a[mid] <= x){ // 当有相等时候持续向右寻找第一个大于的数字
                l = mid+ 1;
           } else h = mid; 
        }

        return l;
    }
}
