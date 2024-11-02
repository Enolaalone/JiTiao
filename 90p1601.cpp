#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>num_a;
    vector<int>num_b;
    vector<int>num_ans;
    string s;
    cin>>s;

    for (int i=s.length()-1;i>=0;i--) {
       num_a.push_back(s[i]-'0'); 
    }
    cin>>s;
    for(int i=s.length()-1;i>=0;i--){
        num_b.push_back(s[i]-'0');
    }

    int carry =0;
    int length = num_a.size()>num_b.size()?num_a.size():num_b.size();
    for(int i=0;i<length;i++){
        int a = i<num_a.size()?num_a[i]:0;
        int b = i<num_b.size()?num_b[i]:0;
        carry = a+b+carry;
        int k = carry%10;
        num_ans.push_back(k);
        carry/=10;
    }
    if(carry>0)num_ans.push_back(carry);
    for(int i=num_ans.size()-1;i>=0;i--){
        cout<<num_ans[i];
    }

    return 0;

}