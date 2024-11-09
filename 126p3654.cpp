#include<bits/stdc++.h>
using namespace std;
int check(vector<vector<char>> &nums,int r,int c,int k){
    int ans = 0;
    for(int i=0;i<r;i++){
        for(int j=0;j<=c-k;j++){
            bool OK=false;
            for(int l=j;l<j+k;l++){
                if(nums[i][l]=='#')break;
                if(l==k+j-1)OK=true;
            }
            ans+=int(OK);
        }
    }

    for(int i=0;i<c;i++){
        for(int j=0;j<=r-k;j++){
            bool OK=false;
            for(int l=j;l<j+k;l++){
                if(nums[l][i]=='#')break;
                if(l==k+j-1)OK=true;
            }
            ans+=int(OK);
        }
    }
    //k==1 横竖一样
    return k==1?ans/2:ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int R,C,K;
    cin>>R>>C>>K;
    vector<vector<char>>nums(R,vector<char>(C));
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            cin>>nums[i][j];
        }
    }
    int ans = check(nums,R,C,K);
    cout<<ans;

    return 0;
}