#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    unordered_map<char,int>map={
        {'0',0},{'1',0},{'2',0},{'3',0},
        {'4',0},{'5',0},{'6',0},{'7',0},
        {'8',0},{'9',0}
    };
    for(int i=m;i<=n;i++){
        string s = to_string(i);
        // cout<<s<<endl;
        for(char c:s){
            // cout<<c<<endl;
            map[c]++;
        }
    }
    //map是无序表
    for(int i=0;i<=9;i++){
        cout<< map[char(i+'0')]<<" ";
    }
    return 0;
}