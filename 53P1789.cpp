#include<bits/stdc++.h>
using namespace std;

void change_fires(vector<vector<int>>& nums,pair<int,int>& p,int n){
    int dx1[13]={2,0,-2,0,1,1,1,0,0,0,-1,-1,-1},//横坐标
    dy1[13]={0,2,0,-2,0,1,-1,1,0,-1,0,1,-1};//纵坐标

    for(int i=0;i<13;i++){
        if(p.first+dx1[i]<n&&p.first+dx1[i]>=0&&p.second+dy1[i]<n&&p.second+dy1[i]>=0){

            nums[p.first+dx1[i]][p.second+dy1[i]]=1;
        }
    }
}

void change_stone(vector<vector<int>>& nums,pair<int,int>& p,int n){
    int dx2[25]={-2,-2,-2,-2,-2,-1,-1,-1,-1,-1,0,0,0,0,0,1,1,1,1,1,2,2,2,2,2},//横坐标
    dy2[25]={-2,-1,0,1,2,-2,-1,0,1,2,-2,-1,0,1,2,-2,-1,0,1,2,-2,-1,0,1,2};//纵坐标

    for(int i=0;i<25;i++){
        if(p.first+dx2[i]<n&&p.first+dx2[i]>=0&&p.second+dy2[i]<n&&p.second+dy2[i]>=0){

            nums[p.first+dx2[i]][p.second+dy2[i]]=1;
        }
    }

}
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>>nums(n,vector<int>(n));
    pair<int,int>p;
    for(int i=0;i<m;i++){
        cin>>p.first>>p.second;
        p.first--;p.second--;
        change_fires(nums,p,n);
    }
    for(int i=0;i<k;i++){
        cin>>p.first>>p.second;
        p.first--;p.second--;
        change_stone(nums,p,n);

    }
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(nums[i][j]==0)ans++;
        }
    }

    cout<<ans;



    return 0;
}