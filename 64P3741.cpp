#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string s;
    cin>>s;
    
    int ans=0;
    
    for(int i=1;i<n;i++){
        string k = s.substr(i-1,2);
        // cout<<k<<endl;
        if(k=="VK")ans++;
    }

    for(int i=1;i<n;i++){
        string k = s.substr(i-1,2);
        if(k=="VV"||k=="KK"){
            ans++;
            break;
        }
    }
    cout<<ans;
    return 0;
}