#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string s;
    cin>>s;
    // cout<<s;
    for(char c:s){
        cout<<char('a'+(c+n+26-'a')%26);
    }
    return 0;
}