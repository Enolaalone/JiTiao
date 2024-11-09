#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    set<int> s;//set 去除重复
    vector<int>nums;
    for(int i=0;i<n;i++){
        int c;
        scanf("%d",&c);
        s.insert(c);
    }
    nums = vector<int>(s.begin(),s.end());
    sort(nums.begin(),nums.end());
    printf("%d\n",nums.size());
    for(int i=0;i<nums.size();i++){
        printf("%d ",nums[i]);
    }
    return 0;
}