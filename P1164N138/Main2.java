package P1164N138;

import java.util.*;
import java.io.*;
public class Main2 {
    static int n,m,ans = 0;
    static Integer[] price;
    public static void main(String[] args)throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        m = Integer.parseInt(st.nextToken());

        st = new StringTokenizer(br.readLine());
        price = new Integer[n+1];
        for(int i = 1; i <= n; i++){
            price[i] = Integer.parseInt(st.nextToken());
        }

        DFS(m, 1);
        System.out.println(ans);
    }

    public static int DFS(int last,int start){
        if(last == 0)return -1;
        for(int i = start; i <= n; i++){
            // DFS(last,i+1); // 多余 如果不选择菜品接直接跳过
            if(last - price[i] == 0){
                ans++;
                continue;
            }
            else DFS(last -  price[i], i + 1);
        }

        return 0;
    }

}
