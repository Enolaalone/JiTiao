package P1021N156;

import java.util.*;
public class Main {
    static double a,b,c,d;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();
        d = sc.nextDouble();

        sc.close();
        double l,r,m,x1,x2;
        int s = 0;

        for(int i = -100; i<100; i++){
            l = i;
            r = i+1;
            x1 = fc(l);
            x2 = fc(r);

            if(x1 == 0.0){ // 左端点满足方程
                System.out.printf("%.2f ",l);
                s++;
            }

            if(x1*x2 < 0){ // 二分查找最小值
                while (r - l>0.001) { // 最小分度值
                    m = l + (r - l)/2;
                    if(fc(m)*fc(r)<=0){// 结果在 m 和 r之间 
                        l = m; // 更新左端点
                    } else r = m; // 更新右端点
                    
                }
                System.out.printf("%.2f ",r);
                s++; // 答案计数
            }

            if (s == 3) { // 找到全部解
               break; 
            }
        }
        
    }

    public static double fc(double x){
        return a*Math.pow(x, 3) + b*Math.pow(x,2) + c*x + d;
    }
    
}
