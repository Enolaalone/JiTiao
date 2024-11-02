#include<bits/stdc++.h>
using namespace std;
void input(string &s,vector<int> &n){
    for(int i=s.length()-1;i>=0;i--){
        int k = s[i]-'0';
        n.push_back(k);
    }    
}
int main(){
    string s;
    vector<int>num_a;
    vector<int>num_b;
    vector<int>num_ans;
    //设定 符号
    int sign = 1;
    cin>>s;
    if(s[0]=='-'){s = s.substr(1);sign = -sign;}
    input(s,num_a);
    cin>>s;
    if(s[0]=='-'){s = s.substr(1);sign = -sign;}
    input(s,num_b);
    int carry=0;

    // cout<<num_a.size()<<" "<<num_b.size()<<endl;
    // 储存答案 位数不会大于num_a.size()+num_b.size()
    num_ans = vector<int>(num_a.size()+num_b.size(),0);
    for(int i=0;i<num_b.size();i++){
         int b = num_b[i];
         //处理进位
         carry = 0;
         for(int j=0;j<num_a.size();j++){
             int a = num_a[j];
             //当前位数得到的总和
             int ans = (a*b+carry+num_ans[i+j]);
            //  cout<<ans<<endl;

            //保留个位
             num_ans[i+j] = ans%10;
             //进位
             carry =  ans/10;
         }
         //额外的进位
         if(carry!=0)num_ans[i+num_a.size()]+=carry;
 
    }

    int i = num_ans.size()-1;
    while(!num_ans[i]&&i>0){i--;}
    //处理0
    if(i==0){
        cout<<0;
        return 0;
    }

    //先输出符号
    if(sign==-1)
    {
        cout<<"-";
    }
    for(;i>=0;i--){
        cout<<num_ans[i];
    }
   return 0;
}