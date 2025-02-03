package P1928N136;

import java.util.*;
public class Main {
    static ArrayDeque<Integer> st_num = new ArrayDeque<>();
    static ArrayDeque<String> st_str = new ArrayDeque<>();
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        int i  = 0;
        while (i < s.length()) {
            char c = s.charAt(i);

            if(c >= 'A' && c <= 'Z'){
                String num = "";
                while (i<s.length() && s.charAt(i)>='A'&&s.charAt(i)<='Z') {
                    num += s.charAt(i++);
                }
                st_str.push(num);
            } else if(c == '['){
                String num = "";
                i++ ;
                // 处理数字
                while (s.charAt(i)>='0' && s.charAt(i) <= '9') {
                    num+=s.charAt(i++);
                }
                st_num.push(Integer.parseInt(num));// 数字栈中添加数字；

                // 处理字母
                num = "";
                while(s.charAt(i)>='A' && s.charAt(i) <= 'Z'){
                    num+=s.charAt(i++);
                }
                st_str.push(num);
            } else if(c == ']') {
                String str = st_str.poll();
                
                String str_back = st_str.isEmpty()?"":st_str.poll(); // 判断栈顶元素
                int k = st_num.poll();
                while (k-- > 0) {
                   str_back += str; 
                }

                st_str.push(str_back); // 返回栈中
                i++; //更新
            }
        }
        String ans = "";
        while (!st_str.isEmpty()) {
           ans = st_str.poll() + ans; 
        }
        System.out.println(ans);

        sc.close();
    } 
    
}
