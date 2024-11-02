#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    unordered_map<int,int>map;
    vector<int>vc(n,0);
    for(int i=0;i<n;i++){
        cin>>vc[i];
        map[vc[i]]=0;
    }

    int ans=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int k = vc[i]+vc[j];
            if(map.find(k)!=map.end())map[k]=1;
        }
    }
    for(auto c:map)ans+=c.second;
    cout<<ans;

    return 0;
}