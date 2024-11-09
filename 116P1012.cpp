#include<bits/stdc++.h>
using namespace std;
bool cmp(string &s1,string &s2){
    return s1>s2;
}
int main(){
    int c;
    cin>>c;
    vector<string>nums(c);
    for(int i=0;i<c;i++) {
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end(),cmp);
    for(int i=0;i<c;i++){
        cout<<nums[i];
    }

    return 0;
}
   
