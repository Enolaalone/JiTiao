#include<bits/stdc++.h>


bool judge(int a){
    if(a==2)return true;

    for (int i = 2; i <a; i++)
    {
        if(a%i==0)return false;
    }
    return true;
}

using namespace std;
int main(){
    int n;
    cin>>n;
    int ans=0;
    vector<int>nums;
    for (int i = 2; ; i++)
    {
        
        if(judge(i)){
            if(ans+i>n){
               break;
            }
            ans+=i;
            nums.push_back(i);
        }
    }
    

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<endl;
    }
    cout<<nums.size();
    return 0;
}