#include<bits/stdc++.h>
using namespace std;

void fate(vector<vector<int>> &nums,int a,int b,int l){
    if(l==0)return;

    for(int i=a;i<a+l;i++){
        for(int j=b;j<b+l;j++){
            nums[i][j]=0;
        }
    }


    fate(nums,a+l,b,l/2);
    fate(nums,a+l,b+l,l/2);
    fate(nums,a,b+l,l/2);
}
int main(){
    int n;cin>>n;
    n = int(pow(2,n));
    vector<vector<int>>nums(n,vector<int>(n,1));

    fate(nums,0,0,n/2);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}