#include <bits/stdc++.h>
using namespace std;

//二维数组旋转90
vector<vector<char>> turn_90(vector<vector<char>> &graph,int n){
    vector<vector<char>> ans(n,vector<char>(n,' '));
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j] = graph[n-1-j][i];
        }
    }
    return ans;
}

vector<vector<char>> turn_180(vector<vector<char>> &graph,int n){
    vector<vector<char>> ans(n,vector<char>(n,' '));
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j] = graph[n-1-i][n-1-j];
        }
    }
    return ans;
}

vector<vector<char>> turn_270(vector<vector<char>> &graph,int n){
    vector<vector<char>> ans(n,vector<char>(n,' '));
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j] = graph[j][n-1-i];
        }
    }
    return ans;
}

vector<vector<char>> turn_horizon(vector<vector<char>> &graph,int n){
     vector<vector<char>> ans(n,vector<char>(n,' '));
    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j] = graph[i][n-1-j];
        }
    }
    return ans;
}
bool if_same(vector<vector<char>> &graph,vector<vector<char>> &ans,int n){
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(graph[i][j]!=ans[i][j])return false;
        }
    }
    return true;
}

bool zip(vector<vector<char>> &nums,vector<vector<char>> &ans,int n){
    vector<vector<char>> k = turn_horizon(nums, n);

    vector<vector<char>>k1 = turn_90(k,n);
    vector<vector<char>>k2 = turn_180(k,n);
    vector<vector<char>>k3 = turn_270(k,n);

    return if_same(ans,k1,n)||if_same(ans,k2,n)||if_same(ans,k3,n);
}


int main(){
    int n;cin>>n;
    vector<vector<char>>nums(n,vector<char>(n,' '));
    vector<vector<char>>ans(n,vector<char>(n,' '));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>nums[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ans[i][j];
        }
    }



    if(if_same(nums,ans,n)){
        cout<<6;
        return 0;
    }

    vector<vector<char>>k = turn_90(nums,n);

    if(if_same(k,ans,n)){
        cout<<1;
        return 0;
    }

    k = turn_180(nums,n);
    if(if_same(k,ans,n)){
        cout<<2;
        return 0;
    }

    k = turn_270(nums,n);
    if(if_same(k,ans,n)){
        cout<<3;
        return 0;
    }

    k = turn_horizon(nums,n);
    if(if_same(k,ans,n)){
        cout<<4;
        return 0;
    }

    k = nums;
    if(zip(nums,ans,n)){
        cout<<5;
        return 0;
    }

    cout<<7;
    return 0;

}