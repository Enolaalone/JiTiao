#include<bits/stdc++.h>
using namespace std;
int main(){
    int s1,s2,s3;
    unordered_map<int,int>map;
    cin>>s1>>s2>>s3;
    for(int i=1;i<=s1;i++){
        for(int j=1;j<=s2;j++){
            for(int k=1;k<=s3;k++){
                int sum = i+j+k;
                // cout<<sum<<endl;
                map[sum]++;
            }
        }
    }
    pair<int,int>ans={INT_MAX,0};
    for(auto c:map){
        // cout<<c.first<<" "<<c.second<<endl;
       if(c.second>ans.second){
            ans.first = c.first;
            ans.second = c.second;
       }
       else if(ans.second==c.second){
            ans.first = min(ans.first,c.first);
       }
    }
    cout<<ans.first;
    return 0;
}