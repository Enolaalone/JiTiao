#include<bits/stdc++.h>
using namespace std;

bool is_prime(int a){
    if(a<=1)return false;
    if(a==2)return true;

    for(int i = 2;i<a;i++){
        if(a%i==0)return false;
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    unordered_map<char,int>map;
    if(s.length()==0){
        cout<<"No Answer"<<endl<<0;
        return 0;
    }

    for(char c:s){
        map[c]++;
    }
    int mx = INT_MIN,mn = INT_MAX;
    for(auto k:map){
        mx = max(mx,k.second);
        mn = min(mn,k.second);
    }
    if(is_prime(mx-mn)){
        cout<<"Lucky Word"<<endl<<mx-mn;
    }else{
        cout<<"No Answer"<<endl<<0;
    }

    return 0;
}