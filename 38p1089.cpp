#include<bits/stdc++.h>
using namespace std;
int main(){
    int money =0;
    int ano =0;
    for (int i = 1; i <=12; i++)
    {
        money+=300;
        int k;cin>>k;
        money-=k;
        // cout<<money<<endl;
        if(money<0){
            cout<<"-"<<i;
            return 0;
        }
        //求出存钱的整百数目
        ano+=(money/100);
        //手里剩下的钱
        money%=100;
    }

    //还要加上手里的钱
    cout<<int(ano*120+money);
    return 0;
}