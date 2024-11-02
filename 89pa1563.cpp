#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    vector<pair<int,string>>g(n);
    for(int i=0;i<n;i++){
        cin>>g[i].first>>g[i].second;
    }

   int k=0,direct,order;
   for(int i=0;i<m;i++){
       cin>>direct>>order;
       if(direct){
           if(g[k].first){//-
               k = (k+n-order)%n;
           }else{//+
               k = (k+n+order)%n;
           }
       }else{
           if(g[k].first){//+
               k = (k+n+order)%n;
           }else{//-
               k = (k+n-order)%n;
           }
       }
   }

    cout<<g[k].second;
    return 0;
}