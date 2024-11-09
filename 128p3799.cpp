#include <bits/stdc++.h>
using namespace std;
const int mmax = 5*1e3+500,mod = 1e9+7;
vector<int> nums(mmax,0);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;cin>>n;
    int mx = INT_MIN,mn = INT_MAX;
    for (int i=0; i<n;i++) {
        int a;cin>>a;
        nums[a]++;
        mx = max(mx,a);
        mn = min(mn,a);
    }
    int ans = 0;
    for(int i=mn+1;i<=mx;i++){
        if(nums[i]>=2) {
            //找寻到i/2,
            for(int j=mn;j<=i/2;j++){
                if(j!=i-j){
                    ans+=nums[i]*(nums[i]-1)*nums[j]*nums[i-j]/2%mod;
                }else if(j==i/2&&nums[j]>=2){
                    ans+=nums[i]*(nums[i]-1)*nums[j]*(nums[j]-1)/4%mod;
                }
            }
            ans%=mod;
        }
    }
    cout<<ans; 

    return 0;
}
