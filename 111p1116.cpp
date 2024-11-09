#include<bits/stdc++.h>
using namespace std;
//冒泡排序
int cmp(vector<int> &a){

    int ans = 0;
    for(int i=0;i<a.size()-1;i++){
        for(int j = 0;j<a.size()-i-1;j++){
            if(a[j]>a[j+1]){
                int b = a[j];
                a[j] = a[j+1];
                a[j+1] = b;
                ans++;
            }
        }
    }
    return ans;
}
int main(){
    int n;cin>>n;
    vector<int>nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int a = cmp(nums);
    cout<<a<<endl;
    return 0;
}