#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>nums(n,vector<int>(m,0));
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>nums[i][j];
        }
        sort(nums[i].begin(),nums[i].end());
        ans = max(ans,accumulate(nums[i].begin()+1,nums[i].end()-1,0));
    }
    double a = double(ans);
    cout<<fixed<<setprecision(2)<<a/(m-2);

    return 0;
}