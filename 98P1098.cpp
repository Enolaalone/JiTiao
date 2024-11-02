#include<bits/stdc++.h>
using namespace std;
int main(){
    int p1,p2,p3;
    cin>>p1>>p2>>p3;
    string s;
    cin>>s;

    for(int i=0;i<s.length();i++){
        //第一个字符
        if(i==0){
            cout<<s[i];
            continue;
        }
        //处理a-b
        char be=s[i-1],af=s[i+1],f=s[i],j,p;
        if(f=='-'&&af>be&&(be>='0'&&af<='9'||be>='a'&&af<='z')){//检查是否符合条件
            for(p3==1?j=be+1:j=af-1;p3==1?j<af:j>be;p3==1?j++:j--){
                p=j;
                //处理是否大写
                if(p1==2)
                    p = (p>='a')?p-32:p;
                else if(p1==3)p='*';
                //处理重复次数
                for(int k=0;k<p2;k++){
                    cout<<p;
                }
            }
        }else{
            cout<<f;
        }
    }
    return 0;
}

