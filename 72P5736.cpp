#include<bits/stdc++.h>

bool judge(int a){
    if(a<=1)return false;
    if(a==2)return true;
    for(int i=2;i<a;i++){
        if(a%i==0)return false;
    }
    return true;
}

using namespace std;
int main(){
    int k;
    cin>>k;

    vector<int>prime(k,0);

    for(int i=0;i<k;i++){
        cin>>prime[i];
    }

    for(int i=0;i<k;i++){
        if(judge(prime[i]))cout<<prime[i]<<" ";
    }
    return 0;
}