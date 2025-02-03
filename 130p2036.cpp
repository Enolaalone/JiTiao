#include<bits/stdc++.h>
using namespace std;
void dfs(vector<pair<int,int>>&nums,int &n,int i,int x,int y,int &ans){
    if(i==n){
        if(x==1&&y==0)return;
        ans = min(abs(x-y),ans) ;
        return;
    }
    dfs(nums,n,i+1,x*nums[i].first,y+nums[i].second,ans);
    dfs(nums,n,i+1,x,y,ans);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;cin>>n;
    vector<pair<int,int>>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i].first>>nums[i].second;
    }
    int ans=INT_MAX;
    dfs(nums,n,0,1,0,ans);
    cout<<ans;

    return 0;
}