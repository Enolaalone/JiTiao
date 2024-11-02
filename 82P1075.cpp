#include<bits/stdc++.h>
using namespace std;
int main(){
    int c;cin>>c;
    for(int i=2;i<c;i++){
        if(c%i==0){
            int ans = c/i;
            cout<<ans<<endl;
            return 0;
        }
    }

    return 0;
}