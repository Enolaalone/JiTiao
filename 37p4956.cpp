#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    // 解方程
    //sum = 52 * (7*i+21*k)
    int k=1;
    while (true)
    {
        for (int i = 100; i >0 ;i--)
        {
            if(52 * (7*i+21*k)==n){
                cout<<i<<endl;
                cout<<k;
                return 0;
            }
        }
        k++;
    }
    

    
    return 0;
}