#include<bits/stdc++.h>
using namespace std;
void assembly(vector<string>&nums,vector<bool> &used,int k1,int &k,string sum){
    if(k1==k){
        cout<<sum<<endl;
        return;
    }
    for(int i=0;i<nums.size();i++){
        //记录是否使用数字
        if(!used[i]){
            used[i] = true;
            sum+=nums[i];
            assembly(nums,used,k1+1,k,sum);
            sum = sum.substr(0,sum.length()-5);
            used[i] = false;
        }
   }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;cin>>n;
    vector<string>nums;
    vector<bool>used(n);
    for(int i=1;i<=n;i++){
        nums.push_back("    "+to_string(i));
        used[i-1] = false;
    }

    assembly(nums,used,0,n,"");
    return 0;
}