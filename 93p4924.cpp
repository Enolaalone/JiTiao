#include<bits/stdc++.h>
using namespace std;

void f(vector<vector<int>>&nums,vector<int>&num){
    vector<vector<int>>nums_ = nums;
    int r = 2*num[2]+1;
    int n = num[0]-num[2]-1;
    int m = num[1]-num[2]-1;

    //相对的转置
    if(num[3]==0){//顺时针
        for(int i=0;i<r;i++){
            for(int j=0;j<r;j++){
                nums[n+i][m+j] = nums_[n+r-1-j][m+i];
            }
        }
    }else{//逆时针
        for(int i=0;i<r;i++){
            for(int j=0;j<r;j++){
                nums[n+i][m+j] = nums_[n+j][m+r-1-i];

            }
        }
    }
}

void output(vector<vector<int>>&nums){
    int n = nums.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<nums[i][j]<<" ";

        }
        cout<<endl;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>nums(n,vector<int>(n));
    int u = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            nums[i][j] = u++;
        }
    }

    vector<int>num(4);
    for(int i=0;i<m;i++){
        for(int j = 0;j<4;j++){
            cin>>num[j];
        }
        f(nums,num);
    }
    
    output(nums);
    return 0;
}