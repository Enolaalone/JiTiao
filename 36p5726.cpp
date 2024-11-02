#include<bits/stdc++.h>
using namespace std;
int main(){
    double n;
    cin>>n;
    double mx = INT_MIN,mn = INT_MAX,sum=0;
    for (int i = 0; i < n; i++)
    {
        double k;cin>>k;
        sum+=k;
        mx = max(mx,k);
        mn = min(mn,k);
    }
    sum=sum-mn-mx;
    double score = sum/(n-2);
    cout<<fixed<<setprecision(2)<<score;
    return 0;
}