#include <bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    // int ans_a=0,ans_b=0;
    long long k1=1,k2=1;
    for(char c:a){
        k1*=c-'A'+1;
    }
    k1 = k1%47;

    for(char c:b){
        k2*=c-'A'+1;
    }
    k2 = k2%47;

    if(k1 == k2){
        cout<<"GO";
    }else{
        cout<<"STAY";
    }
    return 0;
}