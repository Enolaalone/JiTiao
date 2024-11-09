#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    //cout<<n<<m;
    vector<int>ans(m);
    for(int i=0;i<m;i++){
            cin>>ans[i];
        
    }
    sort(ans.begin(),ans.end());
    for(int c:ans){
            cout<<c<<" ";

    }
     

    return 0;
}
