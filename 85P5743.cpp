#include <bits/stdc++.h>
using namespace std;


int f(int i){
    if(i==1){
        return 1;
    }else{
        return (f(i-1)+1)*2;
    }
}


int main() {
    int n;
    cin>>n;
    int num  = f(n);
    cout<<num<<endl;
    return 0;
}