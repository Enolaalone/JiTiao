package P1044N133;

import java.util.Scanner;

public class Main {
    static int n;
    static int[][] f;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        f = new int[n+1][n+1];
        f[0][1] = 1; // 队列中没有元素 栈中有一个元素；
        DFS(n,0); // 求取 n 个数的情况；

        System.out.println(f[n][0]);
        sc.close();
    }

    public static int DFS(int i,int j){ // i 表示队列中的元素 j 表示栈中的元素
        if(f[i][j]!=0)return f[i][j];
        if(i==0)return 1; // 队列中没有元素了
        if(j > 0)f[i][j] += DFS(i, j - 1); // 栈中有元素;
        f[i][j] += DFS(i - 1, j + 1);
        return f[i][j];
    }
    
    
}
