#include<bits/stdc++.h>
using namespace std;

int main(){
    double k = 0.98;
    double n;
    cin>>n;

    double b =2.0;
    double ans=0.0;

    int i;
    for ( i= 0; ans<n; i++)
    {
        ans=ans+b;
        b*=k;
    }
    cout<<i<<endl;
    
    return 0;
}