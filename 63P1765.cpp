#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int num[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    //读取一整行
    getline(cin,s);
    int ans=0;
    for(char c:s){
        if(c>='a'&&c<='z'){
            ans+=num[c-'a'];
        }
        else if(c==' '){
            ans++;
        }
    }
    cout<<ans;
    return 0;

}