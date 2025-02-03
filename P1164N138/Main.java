package P1164N138;

import java.util.*;
import java.io.*;
public class Main {
    static int n,m;
    static Integer[] price;
    static int[][] f;
    public static void main(String[] args)throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());

        f = new int[n+1][m+1];
        st = new StringTokenizer(br.readLine());
        price = new Integer[n+1];
        for(int i = 1; i <= n; i++){
            price[i] = Integer.parseInt(st.nextToken());
        }

        // f[i][j] i道菜花光j元，的方法数目；
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                // 分类
                if(price[i] == j)f[i][j] = f[i-1][j] + 1; 
                if(price[i] < j)f[i][j] = f[i-1][j] + f[i-1][j-price[i]];
                if(price[i] > j)f[i][j] = f[i-1][j]; 
            }
        }
        System.out.println(f[n][m]);
    }
}

