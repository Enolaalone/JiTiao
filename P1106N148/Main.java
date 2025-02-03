package P1106N148;

import java.util.*;
import java.io.*;

public class Main {
    static ArrayList<Integer> ls = new ArrayList<>();
    static int n;
    public static void main(String[] args)throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        String s = st.nextToken();
        st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());

        for(int i = 0; i<s.length(); i++){
            ls.add(s.charAt(i)-'0');
        }

        int k = 0;
        for(int j = 0; j<n;j++){
            for(int i = 1; i<ls.size(); i++){
                if(ls.get(i)<ls.get(i-1)){
                    ls.remove(i-1);
                    k++;
                    break;
                }
            }
        }

        if(ls.size() == 1&& ls.get(0) == 0) {
            System.out.println(0);
            return ;
        }
        while (ls.get(0) ==0) {
            ls.remove(0);
            k++;
        }

        while (k<n) {
            ls.remove(ls.size()-1);
            k++;
        }

        for(int c:ls){
            bw.write(c+"");
            bw.flush(); 
        }
    } 
}
