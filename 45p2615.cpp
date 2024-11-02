#include<bits/stdc++.h>

using namespace std;

bool has_num(vector<vector<int>>&nums,int i,int j){
    return nums[i][j]==0;
}

int main(){
    int n;
    cin>>n;

    vector<vector<int>> nums(n,vector<int>(n,0));
    //填在中间
    nums[0][(n-1)/2] = 1;
   

    int k = 2;
    int i = 0,j=(n-1)/2;
    for(int l=0;l<n*n-1;l++){
        if(i==0&&j!=n-1){
            i = n-1;
            j++;
            nums[i][j] = k++;
        }else if(i!=0&&j==n-1){
            j = 0;
            i--;
            nums[i][j] = k++;
        }else if(i==0&&j==n-1){
            i=1;
            nums[i][j] = k++;
        }else if(i!=0&&j!=n-1){
            if(nums[i-1][j+1]==0&&i-1>=0&&j+1<=n-1){
                i--;j++;
                nums[i][j] = k++;
            }else{
                i++;
                nums[i][j] = k++;
            }
           
        }
    }

    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}