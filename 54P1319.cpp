#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>nums;
    int n;cin>>n;
    int k;

    while(cin>>k){
        nums.push_back(k);
    }
    int a = 1;
    int num=0;
    for(k=0;k<nums.size();k++){
        if(a==1){
            for(int i=0;i<nums[k];i++){
                cout<<0;
                if(++num==n){
                    cout<<endl;
                    num = 0;
                }
            }
        }else{
            for(int i=0;i<nums[k];i++){
                cout<<1;
                if(++num==n){
                    cout<<endl;
                    num = 0;
                }
            }
        }
        a = -a;
    }

    return 0;
}