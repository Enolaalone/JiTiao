package P2437N137;

import java.util.Scanner;
public class Main {
    static int[][] f;
    static int n,m;
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        int end = m - n + 1;

        f = new int[end + 1][1005];

        // f[1] = 1;
        // f[2] = 1;
        // f[3] = f[2] + f[1];
        // f[4] = f[3] + f[2];

        f[2][0] = 1;
        f[1][0] = 1;
        for(int i = 3; i <= end; i++){
            for(int j = 0; j < 1004; j++){
                int k = f[i-1][j] + f[i-2][j];
                if(k==0)break; // 无进位
                f[i][j] += k%10; // 本位 
                f[i][j+1] = k/10; // 进位
            }
        }
        String ans = "";
        for(int i = 0; f[end][i]!=0&&i < 1005; i++){
            ans = Integer.toString(f[end][i]) + ans;
        } 
        System.out.println(ans);
        sc.close();

    }

    
}
