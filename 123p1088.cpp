#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    int *nums = [](int n)->int* {
        int *ans = new int[n];
        for(int i=0;i<n;i++){
            cin>>ans[i];
        }
        return ans;
    }(n);
    for(int i=0;i<m;i++) {
        //仅支持数组   进行组合
        next_permutation(nums,nums+n);
    }
    for(int *p = nums;p<nums+n;p++)cout<<*p<<" ";
    delete []nums;
    return 0;
}