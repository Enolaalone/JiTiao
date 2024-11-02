#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    unordered_map<char,int>map;
    int n=0;
    while(n<s.length()){
        int pos = s.find(';',n);
        if(pos==-1)break;

        string l = s.substr(n,pos-n);

        char var = l[0];
        char val = l[l.find('=')+1];

        if(isdigit(val)){//检测是否为数字
            map[var]  = val-'0';
        }else{
            map[var] = map[val];
        }

        n=pos+1;
    }

    cout<<map['a']<<" "<<map['b']<<" "<<map['c'];
    return  0;
}