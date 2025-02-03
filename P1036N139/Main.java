package P1036N139;
import java.util.*;
import java.io.*;
public class Main {
    static int n,m,ans;
    static int[] num;
    public static void main(String[] args)throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());
        num = new int[n+1];
        st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= n; i++){
            num[i] = Integer.parseInt(st.nextToken());
        } 
        DFS(0,0,1);
        System.out.println(ans);

    }

    public static void DFS(int p,int sum,int start){
       if(p == m && Judge(sum)){
            ans++;
       }

       for(int i = start; i <= n; i++){
            DFS(p+1,sum+num[i],i+1);// 依次选中第i个数
       }
    }

    public static boolean Judge(int a){
        if(a <= 1)return false;
        if(a == 2)return true;
        if(a%2==0)return false; // 特判
        
        for(int i = 2; i < a; i++){
            if(a%i==0)return false;
        }

        return true;
    }
    
}
