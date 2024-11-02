#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    a+=" ";
    getchar();
    //转换为小写
    transform(a.begin(),a.end(),a.begin(),::tolower);
    getline(cin,b);
    b.insert(0," ");
    transform(b.begin(),b.end(),b.begin(),::tolower);

    if(b.find(a)==-1){
        cout<<-1;
        return 0;
    }else{
        int sum = 0,n=0;
        while(b.find(a,n)!=-1){
            sum++;
            //从n处查找a
            n = b.find(a,n)+1;
        }
        cout<<sum<<" "<<b.find(a)-1;
    }

    
}