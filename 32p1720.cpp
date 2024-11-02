#include<bits/stdc++.h>
using namespace std;

double f(int n){
    double p1 = pow((1.0+sqrt(5))/2,n);
    double p2 = pow((1.0-sqrt(5))/2,n);

    return (p1-p2)/sqrt(5);
}
int main(){
    int n;
    cin>>n;
    cout<<fixed<<setprecision(2)<<f(n);
    return 0;
}