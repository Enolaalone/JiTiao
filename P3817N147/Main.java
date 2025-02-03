package P3817N147;


import java.util.*;
import java.io.*;
public class Main {
    static Long x,ans = 0L;
    static Long[] num;
    static int n;

    public static void main(String[] args)throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        x = Long.parseLong(st.nextToken());

        num = new Long[n+1];
        st = new StringTokenizer(br.readLine());
        for(int i = 1; i<=n; i++){
            num[i] = Long.parseLong(st.nextToken());
        }
        
        num[0] = 0L;
        for(int i = 1; i<=n; i++){
            if(num[i]+num[i-1]>x){ // 如果数目大于x 就吃掉右边的糖果， 在减小数目的同时还减少了下一个的数目
                Long eat =num[i] + num[i-1] - x; 
                ans+= eat; // 吃掉糖果的数目
                num[i] -= eat;
            }
        }

        
        System.out.print(ans);

    }
    
}
