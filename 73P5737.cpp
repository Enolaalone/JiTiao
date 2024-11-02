#include<bits/stdc++.h>
using namespace std;

bool is_R(int a){
    if(a%100==0){
        if(a%400==0)return true;
        else return false;
    }else{
        if(a%4==0)return true;
        else return false;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    // cout<<a<<b;
    vector<int>nums;
    for(int i = a;i<=b;i++){
        if(is_R(i))nums.push_back(i);
    }

    cout<<nums.size()<<endl;
    for(int c:nums){
        cout<<c<<" ";
    }
    return 0;
}