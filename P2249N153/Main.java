package P2249N153;

import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws Exception{ // 抛出异常
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in)) ;
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String[] Input = br.readLine().split(" "); // 分割输入
        int n = Integer.parseInt(Input[0]);
        int m = Integer.parseInt(Input[1]);

        // 录入数组
        int[] num = new int[n];
        Input = br.readLine().split(" ");
        for(int i = 0; i<n; i++){
            num[i] = Integer.parseInt(Input[i]);
        }

        // 二分查找
        Input = br.readLine().split(" ");
        for(int i = 0; i<m; i++){
            int k = Integer.parseInt(Input[i]);
            bw.write(binarySearch(num, k)+" ");
            bw.flush(); // bw类型的输出一定要flush 才可以输出
        }

        br.close();
        bw.close();
    }

    public static int binarySearch(int[] num,int target){
        int l = 0,r = num.length-1;
        int ans = -1;
        while (l<=r) {
            int mid = l + (r - l)/2;
            // target 的数位于左边 
            if(target<=num[mid]){
                r = mid -1; // 向左移动继续查找
                if(target == num[mid])
                    ans = mid+1; // 按编号从1开始；
            } else if(target > num[mid]){
                l = mid + 1;
            } 
        }
        return ans;
    }
}