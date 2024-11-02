#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.find('.')!=-1){
        string b,a;
        b = s.substr(0,s.find('.'));
        a = s.substr(s.find('.')+1);
        reverse(b.begin(),b.end());
        reverse(a.begin(),a.end());

        int i = 0;
        while(b[i]=='0')i++;
        b = b.substr(i);

        i=0;
        while(a[i]=='0')i++;
        a = a.substr(i);
        i=a.length()-1;
        while(a[i]=='0')i--;
        a = a.substr(0,i+1);
        

        cout<<b<<"."<<a<<endl;

    }else if(s.find('/')!=-1){
        string b,a;
        b = s.substr(0,s.find('/'));
        a = s.substr(s.find('/')+1);
        reverse(b.begin(),b.end());
        reverse(a.begin(),a.end());

        int i = 0;
        while(b[i]=='0')i++;
        b = b.substr(i);

        i=0;
        while(a[i]=='0')i++;
        a = a.substr(i);

        cout<<b<<"/"<<a<<endl;

    }else if(s.find('%')!=-1){
        string b;
        b = s.substr(0,s.find('%'));
        reverse(b.begin(),b.end());

        int i = 0;
        while(b[i]=='0')i++;
        b = b.substr(i);

        cout<<b<<"%"<<endl;
       
    }else{
        reverse(s.begin(),s.end());
        int i = 0;
        while(s[i]=='0')i++;
        s = s.substr(i);
        cout<<s<<endl;
    }
    return 0;
}