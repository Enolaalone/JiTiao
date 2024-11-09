#include<bits/stdc++.h>
using namespace std;
bool cmp(string &s1,string &s2){
    if(s1.length()>s2.length())
        return true;
    else if(s1.length()==s2.length())
        return s1>s2;
    else return false;
}

string add(string&s_a,string &s_b){
    string s_ans = "";
    int carry=0;
    int k = s_a.length()>s_b.length()?s_a.length():s_b.length();

    int i=s_a.length()-1,j=s_b.length()-1;
    for(;j>=0||i>=0;i--,j--){
        int a = i>=0 ? s_a[i] - '0':0;
        int b = j>=0 ? s_b[j] - '0':0;
        int ans = a+b+carry;
        s_ans = to_string(ans%10)+s_ans;
        carry = ans/10; 
        // cout<<a<<" "<<b<<" "<<ans<<" "<<carry<<endl;
    }
    if(carry!=0){
        s_ans = to_string(carry) + s_ans;
    }
    return s_ans ;

}
int main(){
    int n;cin>>n;
    string b;cin>>b;

    vector<string>nums(n) ;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end(),cmp);

    string s = "0";
    int i;
    for(i=0;i<n;i++){
       s = add(s,nums[i]);
       if(cmp(s,b)){
            i++;
            break;
       }
    }
    cout<<i;

    return 0;
}