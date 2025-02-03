package P1259N140;
import java.util.*;

public class Main {
    static String[] str = new String[]{
        "ooo--***o*",
        "ooo*o**--*",
        "o--*o**oo*",
        "o*o*o*--o*",
        "--o*o*o*o*",
    };
    static int n;
    static char[] chars;
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in) ;
        n = sc.nextInt();
        chars = new char[2*n+3];
        for(int i = 1;i <= n; i++){
            chars[i] = 'o';
            chars[n+i] = '*';
        }

        chars[2*n+1] = chars[2*n+2] = '-';
        DFS(n,2*n+1);
        sc.close();
    }

    public static void Print(){
        for(int i = 1; i <= 2*n+2; i++ ){
            System.out.print(chars[i]);
        }
        System.out.println();
    }

    public static void DFS(int x,int last){
        if(x == 4){
            Print();
           for(int i = 0; i < 5; i++) {
                System.out.print(str[i]);
                for(int j = 0; j < n-4; j++){
                    System.out.print("o*");
                }
                System.out.println();
           }
           return;
        }

        Print();
        for(int i = 0; i<2; i++){
            char a = chars[x+i];
            chars[x+i] = chars[last+i];
            chars[last+i] = a;
        }
        if(x < last)
            DFS(last-2,x);
        else DFS(last-1,x);
    }
}
