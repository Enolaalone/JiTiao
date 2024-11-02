#include<bits/stdc++.h>
using namespace std;
int main(){

    //翻转 数字

    int n;
    cin>>n;
    int s=0;
    while(n){s=10*s+n%10;n/=10;}
    cout<<s;
    return 0;
}