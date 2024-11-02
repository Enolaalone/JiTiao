#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mx=INT_MIN,mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int k;cin>>k;
        mx = max(mx,k);
        mn = min(mn,k);
    }
    cout<<mx-mn<<endl;
    
    return 0;
}