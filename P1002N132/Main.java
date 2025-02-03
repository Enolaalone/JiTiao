package P1002N132;

import java.util.*;

public class Main {
    static int[] p1 = new int[]{-2,-1,1,2,-2,-1,1,2};
    static int[] p2 = new int[]{-1,-2,-2,-1,1,2,2,1};
    static long[][] map,dp;
    static int x_h,y_h,x,y;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        x = sc.nextInt();
        y = sc.nextInt();
        x_h = sc.nextInt();
        y_h = sc.nextInt();

        x++;y++;x_h++;y_h++;

        // 初始化 标记
        map = new long[x+1][y+1];
        map[x_h][y_h] = 1;
        for(int i = 0; i < 8; i++){
            int h_x = x_h+p1[i];
            int h_y = y_h+p2[i];
            if(h_x > x || h_y > y || h_x <0 || h_y <0)continue;
                map[h_x][h_y] = 1;
        }

        dp = new long[x+1][y+1];

        dp[1][1] = 1;
        for(int i = 1; i <= x; i++){
            for(int j = 1; j <= y; j++){
                if(map[i][j] == 1 || (i==1 && j==1)){continue;}
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }

        System.out.println(dp[x][y]);
        sc.close();
    }
}
