#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int k = 'A' - 'a';
    for(auto c:s){
        if(c>='a'&&c<='z'){
            cout<<char(c+k);
            continue;
        }
        cout<<c;
    }
    return 0;
}