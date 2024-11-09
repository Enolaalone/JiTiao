#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
    
//     priority_queue<int ,vector<int>,greater<int>>pq;

//     for(int i=0;i<n;i++){
//         int k;cin>>k;
//         pq.push(k);
//     }

//     int k;
//     for(int i=0;i<=m;i++){
//         k = pq.top();
//         pq.pop();
//     }
//     cout<<k;D

//     return 0;
// }


int main(){
    int n,m;
    cin>>n>>m;
    int* nums = new int[n];
    for(int i=0;i<n;i++){
        //读写速度更快
        scanf("%d",&nums[i]);
    }
    sort(nums,nums+n);
    cout<<nums[m];
    delete nums;
    return 0;
}