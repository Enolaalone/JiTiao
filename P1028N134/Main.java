package P1028N134;
import java.util.*;
public class Main {
    static int n,ans;
    static int[] f;
    public static void main(String[] argsj){
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        f = new int[n + 1];

        f[1] = 1;
        for(int i = 1; i <= n; i++){
            f[i] = 1; // 每个数至少有它自己；
            for(int j = 1; j <= i/2; j++){
                f[i] += f[j]; // f[n] = f[n/2]+ ... +f[1] + 1;

            }
        }

        System.out.println(f[n]);
        sc.close();
        
    }
    
}

// public class Main {
//     static int n,ans;
//     public static void main(String[] argsj){
//         Scanner sc = new Scanner(System.in);
//         n = sc.nextInt();
//         DFS(n);
//         System.out.println(ans);
//         sc.close();
        
//     }

//     public static void DFS(int x){ // 传入最后一个数
//         if(x==0)return;
//         ans++; // 计数+1 大于等于1 的情况
//         int k = x/2;
//         for(int i = 1; i <= k; i++ ){
//             DFS(i);
//         }
    
//     }
    
// }