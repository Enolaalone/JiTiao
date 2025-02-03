package P1464N135;

import java.util.Scanner;

public class Main {
    static int dp[][][] = new int[25][25][25]; // 

    static int w(int a, int b, int c)
        {   
        if(a <= 0 || b <= 0 || c <= 0) return 1;//两个特判，题意里都有的。
        if(a > 20 || b > 20 || c > 20) return w(20, 20, 20);
        
        if(a <b && b < c)//情况一，每一个没有储存过的“w”值全部储存，如果有就直接调用。
        {
            if(dp[a][b][c-1] == 0)
            {
                dp[a][b][c-1] = w(a, b, c-1);
            }
            if(dp[a][b-1][c-1] == 0)
            {
                dp[a][b-1][c-1] = w(a, b-1 ,c-1);
            }
            if(dp[a][b-1][c] == 0)
            {
                dp[a][b-1][c] = w(a, b-1, c);
            }
            dp[a][b][c] = dp[a][b][c-1] + dp[a][b-1][c-1] - dp[a][b-1][c];
        }
        
        else//同上
        {
            if(dp[a-1][b][c] == 0)
            {
                dp[a-1][b][c] = w(a-1, b, c);
            }
            if(dp[a-1][b-1][c] == 0)
            {
                dp[a-1][b-1][c] = w(a-1, b-1 ,c);
            }
            if(dp[a-1][b][c-1] == 0)
            {
                dp[a-1][b][c-1] = w(a-1, b, c-1);
            }
            if(dp[a-1][b-1][c-1] == 0)
            {
                dp[a-1][b-1][c-1] = w(a-1, b-1, c-1);
            }
            dp[a][b][c] = dp[a-1][b][c] + dp[a-1][b][c-1] + dp[a-1][b-1][c] - dp[a-1][b-1][c-1];
        }
        
        return dp[a][b][c];
    }    

    public static void  main(String[] args)
    {
        int a, b, c;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        while(a != -1 && b != -1 && c != -1)//无限输入，直到“-1 -1 -1”
        {
            System.out.printf("w(%d, %d, %d) = ", a, b, c);
            System.out.printf("%d\n", w(a, b, c));
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
        }

        sc.close();
    }
    
}
