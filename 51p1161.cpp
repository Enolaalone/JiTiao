#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    unordered_map<int,int>map;
    for(int i = 0;i<n;i++){

        double s;
        double t;
        cin>>s>>t;
        
        for(int j=1;j<=t;j++){
            double now = j*s;
            string s = to_string(now);
            //substr
            s = s.substr(0,s.find('.'));
            int n = stoi(s);
            if(map.find(n)==map.end())map[n] = 1;
            else if(map[n]==0)map[n]=1;
            else if(map[n]==1)map[n]=0;
        }
    }

    for(auto i:map){
        if(i.second==1)
            cout<<i.first<<endl;;
    }
    return 0;
}