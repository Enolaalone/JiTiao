#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums;
    string s,ans ="";

    while(cin>>s){
        ans+=s;
    }
    cout<<s.length()<<" ";

    int a = ans[0]=='0';
    if(a==0){cout<<a<<" ";a=1;}
    
    for(int i=1;i<=ans.length()-1;i++){
        if(ans[i]!=ans[i-1]){
            cout<<a<<" ";
            a = 1;
        }else a++;
    }
    cout<<a;
    return 0;
}