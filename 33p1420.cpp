#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int k;cin>>k;
    int ans=1;
    int mx=ans;
    for (int i = 0; i < n-1; i++)
    {
        int c;cin>>c;
        if(c-k==1){
            k=c;
            ans++;
        }else{
            k=c;
            mx = max(mx,ans);
            ans=1;
        }
    }
    //记得一定要有最后一次检查
    mx = max(mx,ans);
    cout<<mx;
    return 0;
}