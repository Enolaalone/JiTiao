#include <bits/stdc++.h>
using namespace std;
int main(){
    map<char,int> mp;
    string s;
    string ans;
    while(cin>>s){
        ans+=s;
    }
    int mx = INT_MIN;
    for(char c:ans){
        if(c>='A'&&c<='Z'){
            mp[c]=mp.find(c)==mp.end()?1:mp[c]+1;
            mx = max(mx,mp[c]);
        }
    }
    if(mx==INT_MIN)mx=0;

    vector<string> strs;
    for(auto c:mp){
        // cout<<c.first<<" "<<c.second<<endl;
        string str;
        for(int i=0;i<mx-c.second;i++){
            str+=' ';
        }
        for(int i=0;i<c.second;i++){
            str+='*';
        }
        str+=c.first;
        strs.push_back(str);
    }

    for(int j=0;j<=mx;j++){
        for(int i=0;i<26;i++){
            cout<<strs[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}