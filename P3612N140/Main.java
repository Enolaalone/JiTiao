package P3612N140;

import java.util.*;
public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in) ;

        String s = sc.next();
        long N = sc.nextLong();
        long len = s.length(); // 字符串长度

        while (len < N) { // 找到包含第N个字符的最小字符串长度；
            len *= 2;
        }

        while (len > s.length()) {
            len /= 2;
            if(N > len){
                N -= len + 1; // 忽略了最后一个字符的重复，
                if(N == 0)N = len;// 如果为0 刚好是最后一个字符
            }
        }

        System.out.println(s.charAt((int)(N-1)));
        sc.close();
    }
}