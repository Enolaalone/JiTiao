#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int> &s1,pair<string,int> &s2){
    if(s1.first.length()>s2.first.length())
        return true;
    else if(s1.first.length()==s2.first.length())
        return s1.first>s2.first;
    else return false;
}
int main(){
    int n;cin>>n;
    vector<pair<string,int>>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i].first;
        nums[i].second = i+1;
    }
    sort(nums.begin(),nums.end(),cmp);
    cout<<nums[0].second<<endl<<nums[0].first;
    return 0;
}