#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> nums;
    nums.push_back({1});
    int n;cin>>n;
    for(int i=0;i<n;i++){
        vector<int>num = {1};
        vector<int>up = nums[i];
        for(int j=1;j<=up.size();j++){
            if(j==up.size()){
                num.push_back(1);
                nums.push_back(num);
                break;
            }
            else{
                num.push_back(up[j]+up[j-1]);
            }
        }
    }

    //打印
    for(int i=0;i<n;i++){
        for(auto k:nums[i]){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}