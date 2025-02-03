package P1990N139;
import java.util.Scanner;

public class Main {
    static int[] F,G;
    static int n,mod = 10000; // 取后四位
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        n = sc.nextInt();
        F = new int[n+1];
        G = new int[n+1];

        F[0] = 1;
        F[1] = G[1] = 1;
        for(int i = 2; i <= n; i++){
            F[i] = ((F[i-1] + F[i-2])%mod + 2 * G[i-2] %mod)%mod; // 一竖 两横 上凸一 下凸一
            G[i] = (F[i-1] + G[i-1])%mod; // 两凸 一横一凸
        }

        System.out.println(F[n]);
        sc.close();
    }
    
}
