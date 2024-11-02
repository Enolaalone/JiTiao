#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a=1,ans=0;
    while (true)
    {
        for (int i = 0; i < a; i++)
        {
            ans+=a;
            n--;
            if(n==0){
                cout<<ans;
                return 0;
            }
        }
        a++;
    }
    
    return 0;
}