#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,k,s = 0,i=0;
    long long tot = 0;
    while(cin>>n){
        i++;
        s+=n;
    }

    m = pow(2,i-1);
    tot = s*m;
    cout<<tot<<endl;

    return 0;
}