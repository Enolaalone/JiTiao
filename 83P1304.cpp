#include<bits/stdc++.h>
using namespace std;

bool judge(int a){
    if (a<=1)return false;
    else if(a==2)return true;

    for(int i=2;i<a;i++){
        if(a%i==0)return false;
    }

    return true;
}
int main(){
    int ou;cin>>ou;

    for(int i = 4;i<=ou;i+=2){
        for(int j = 2;j<ou;j++){
            if(judge(j)){
                int k = i-j;
                if(judge(k)){
                    cout<<i<<"="<<j<<"+"<<k<<endl;
                    break;
                }
            }

        }

    }
    return 0;
}