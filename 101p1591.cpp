#include<bits/stdc++.h>
using namespace std;

void input(string s,vector<int>&a){
    a = vector<int>(s.length());
    for(int i=0;i<s.length();i++){
        a[i] = s[s.length()-1-i]-'0';
    }
}
vector<int> mul(vector<int>&n_a,vector<int>&n_b){
    vector<int>n_ans(n_a.size()+n_b.size()+1);

    int carry;
    for(int i=0;i<n_b.size();i++){
        carry = 0;
        int b = n_b[i];
        for(int j=0;j<n_a.size();j++){
            int a = n_a[j];
            int ans = a*b+carry+n_ans[i+j];
            n_ans[i+j] = ans%10;
            carry = ans/10;
        }
        if(carry!=0){
            n_ans[i+n_a.size()] +=carry;
        }
    }
    while(!n_ans.back())n_ans.pop_back();
    return n_ans;
}

void output(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
    cout<<endl;
}
int cal(int a,int b){
    int ans=0; 
    vector<int>a1,a2;
    string s = to_string(a);

    input(to_string(1),a1);
    for(int i=1;i<=a;i++){
        input(to_string(i),a2);
        a1= mul(a1,a2);
        // output(a1);
    }

    for(int i=0;i<a1.size();i++){
        if(a1[i]==b)ans++;
    }
    return ans;
}
int main(){
    int t;cin>>t;
    vector<int>ans(t);
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        ans[i]=cal(a,b);

    }
    for(int i=0;i<t;i++){
        cout<<ans[i]<<endl;
    }

    return 0;
}