#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=n;
    for (int i = 0; i < n; i++)
    {
        for (int j = k-n+1; j <=k; j++)
        {
            if(j<=9){
                cout<<"0"<<j;
            }else cout<<j;
        }
        cout<<endl;
        k+=n;
        
    }
    cout<<endl;

    k=1;
    for (int i = 1; i <=n; i++)
    {
        for (int l = 0; l < n-i; l++)
        {
            cout<<"  ";
        }

        for (int j = 0; j <i; j++)
        { 
            if(k<=9){
                cout<<"0"<<k++;
            }else cout<<k++;
        }
        cout<<endl;
    }
    return 0;
}