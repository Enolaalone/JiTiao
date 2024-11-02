#include<bits/stdc++.h>

using namespace std;

int main(){

    double n;
    cin>>n;
    double ans=0.0;
    int i=1;
    while(1){
        ans+=double(1.0/i);
        if(ans>n)break;
        else i++;
    }
    cout<<i;
    return 0;
}