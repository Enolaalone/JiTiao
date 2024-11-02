#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    char x;
    cin>>n>>x;;
    int ans=0;//ans需要初始化
    for (int i = 1; i <= n; i++)
    {
        string s = to_string(i);
        for (char ch:s)
        {
            if(ch==x)
                ans++;
        }
        
    }
    cout<<ans;
    return 0;
}