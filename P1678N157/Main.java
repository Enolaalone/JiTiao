package P1678N157;

import java.util.*;
import java.io.*;

public class Main {
    static int m,a,n;
    static int[] grade,lines;


    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] input = br.readLine().split(" ");

        m = Integer.parseInt(input[0]) ;// 学校数目
        n = Integer.parseInt(input[1]) ;// 学生数目

        lines = new int[m];
        grade = new int[n];

        input = br.readLine().split(" ");
        for(int i = 0; i<m; i++){
           lines[i] = Integer.parseInt(input[i]) ;
        }

        input = br.readLine().split(" ");
        for(int i = 0; i<n; i++){
            grade[i] = Integer.parseInt(input[i]);
        }



        
    }
    
}
