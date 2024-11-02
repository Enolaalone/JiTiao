#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;cin>>n;

    int x=0,y=1,m=1;
    vector<vector<int>>nums(n+1,vector<int>(n+1,0));
    while(m<=n*n){
        while(x<n&&!nums[y][x+1])nums[y][++x] = m++;
        while(y<n&&!nums[y+1][x])nums[++y][x] = m++;
        while(x>1&&!nums[y][x-1])nums[y][--x] = m++;
        while(y>1&&!nums[y-1][x])nums[--y][x] = m++;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           printf("%3d",nums[i][j]);
        }
        cout<<endl;
    }
    
    return 0;
}