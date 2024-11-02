#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,a;
    cin>>n;
    for(int i=n;i>=0;i--){
        cin>>a;
        if(a){
            if(i!=n&&a>0)cout<<"+";//输出+的条件:不在开头 且a>0
            if(abs(a)>1||i==0)cout<<a;//输出数字发条件：a!=1 或者为最后一个
            if(a==-1&&i)cout<<"-";//特殊发-1：在中间或开头的-1

            //处理指数部分
            if(i>1)cout<<"x^"<<i;
            if(i==1)cout<<"x";

        }
    }
    return 0;
}


// void out_num(int a,bool s){
//     if(a>0){
//         if(s)
//             cout<<"+";
//         if(a!=1)
//             cout<<a;
//     }else{
//         if(a==-1)
//             cout<<"-";
//         else
//             cout<<a;
//     }
// }
// int main(){
//     int n;cin>>n;
//     vector<int>a(n+1);
//     for(int i=0;i<=n;i++){
//         cin>>a[i];
//     }

//     int high = n;
//     for(int i=0;i<=n;i++){
//         //管理指数
//         if(a[i]==0){
//             high--;
//             continue;
//         }

//         //参数部分
//         if(i!=0&&i!=n){//中间部分
//             out_num(a[i],1);
//         }else if(i==0){//开头
//             out_num(a[i],0); 
//         }else{//末尾
//             if(a[i]==1){
//                 cout<<"+1";
//             }
//             else{
//                 out_num(a[i],1);
//             }
//         }
//        //指数的显示 
//         if(high>1){
//             cout<<"x^"<<high;
//         }else if(high==1&&a[i]!=0){
//             cout<<"x";
//         }
//         high--;
//     }
//     return 0;
// }