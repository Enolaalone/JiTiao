package P4995N152;

import java.util.*;
import java.io.*;
public class Main {
    static int n;
    static int[][] num ;
    static PriorityQueue<int[]> pq = new PriorityQueue<>(Comparator.comparingInt(a ->a[1]));
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in)) ;
        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        for(int i = 0; i<n; i++){
            num[i] = new int[2];
            num[i][0] = i;
            num[i][1] = Integer.parseInt(st.nextToken());
        }
    }
    
}
