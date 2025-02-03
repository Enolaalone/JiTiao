#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    vector<int>s(4);
    for(int i=0;i<4;i++){
        cin>>s[i];
    }

    int sum,t=0,hw[21],dp[2501];
    for(int i=0;i<4;i++){
        sum = 0;
        for(int j=0;j<s[i];j++){
            cin>>hw[i];
            sum+=hw[i];
        }
        for(int j=0;j<s[i];j++){
            for(int k = sum/2;k>=hw[j];k--){
                dp[k] = max(dp[k],dp[k-hw[j]]+hw[j]);
            }
        }
               
        t+=sum-dp[sum/2];
        for(int j=1;j<=sum/2;j++)
            dp[j] = 0;
    }
    cout<<t;
    return 0;
}