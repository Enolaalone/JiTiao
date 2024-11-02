#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    vector<int>nums(n);
    int ans = INT_MAX,mn=0;
    for(int i=0;i<n;i++){
        cin>>nums[i];
        mn+=nums[i];
        if(i>m-1)
            mn-=nums[i-m];
        if(i>=m-1)
            ans = min(ans,mn);

    }
    //防止0次
    ans = min(ans,mn);
    cout<<ans;

    return 0;
}