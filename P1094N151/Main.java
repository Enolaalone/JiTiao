package P1094N151;

import java.util.*;
import java.io.*;
public class Main {
    static int n,m;
    static int[] num;
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        m = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());

        num = new int[n];
        for(int i = 0; i<n; i++){
            st = new StringTokenizer(br.readLine());
            num[i] = Integer.parseInt(st.nextToken());
        }

        Arrays.sort(num);

        int i = 0,j = n-1;
        int ans = 0;
        while (i<=j) {
            int sum = num[i] + num[j];
            if(sum <= m) { // 小于分组的最低要求 两个一组
                ans++;
                i++;j--;
            } else { // 不满足就一个一组
                ans++; j--;
            } 
        }
        System.out.println(ans);
    }
    
}
