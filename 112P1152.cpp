#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>nums(n);
    vector<int>ans(n);
    cin>>nums[0];
    for(int i=1;i<n;i++){
        scanf("%d",&nums[i]);
    }
    for(int i=1;i<n;i++){
        ans[i] = abs(nums[i]-nums[i-1]);
    }


    sort(ans.begin()+1,ans.end());
    for(int i=1;i<n;i++){
        if(ans[i]!=i){
            cout<<"Not jolly"<<endl;
            return 0;
        }
    }
    cout<<"Jolly"<<endl;

    return 0;
}