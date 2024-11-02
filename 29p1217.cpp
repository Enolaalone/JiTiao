#include<bits/stdc++.h>
using namespace std;

bool check1(int x)//检查位数
{
	if((1000 <= x && x <= 9999) || (100000 <= x && x <= 999999)) return 0;//不知道&&和||优先级的可以打个括号 
	return 1;
} 

bool check2(int i){
    string s = to_string(i);
    int n = (s.length()/2);
    int l = s.length();
    for (int i = 0; i < n; i++)
    {
        if(s[i]!=s[l-1-i])return false;
    }
    return true;
}

bool check3(int n){
    if(n==1)return false;
    if(n==2)return true;

    for (int i = 2; i < n; i++)
    {
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    int a,b;
    cin>>a>>b;
    if(a%2==0)a++;
    b = min(9999999,b);
    for (int i = a; i <= b ; i+=2)
    {   
        if(!check1(i))continue;
        if(!check2(i))continue;
        if(!check3(i))continue;
        printf("%d\n",i);
    }
    
    return 0;
}