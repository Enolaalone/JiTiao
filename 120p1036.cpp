#include<bits/stdc++.h>
using namespace std;
bool judge(int a){
    if(a<=1)return false;
    if(a==2)return true;

    for(int i=2;i<a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

void add(vector<int> &nums,int &ans,int k1,int &k,int sum,int start){
    if(k1==k){
        if(judge(sum)){ans++;}
        return;
    }

    for(int i=start;i<nums.size();i++){
        sum+=nums[i];
        add(nums,ans,k1+1,k,sum,i+1);
        sum-=nums[i];
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int ans = 0;
    add(nums,ans,0,k,0,0);
    cout<<ans;
    return 0;
}