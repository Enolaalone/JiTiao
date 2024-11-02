#include<bits/stdc++.h>
using namespace std;

void input(string s,vector<int>&a){
    a = vector<int>(s.length());
    for(int i=0;i<s.length();i++){
        a[i] = s[s.length()-i-1]-'0';
    }
}

vector<int> add(vector<int> &n_a, vector<int>&n_b){
    int k = n_a.size()>n_b.size()?n_a.size():n_b.size();
    vector<int>n_ans(k+1);
    int carry=0;

    for(int i=0;i<k;i++) {
        int a = i>=n_a.size()?0:n_a[i];
        int b = i>=n_b.size()?0:n_b[i];
        int ans = a+b+carry;
        n_ans[i] = ans%10;
        carry = ans/10;
    }
    if(carry>0)n_ans[k]=carry;
    if(n_ans[k]==0)n_ans = vector<int>(n_ans.begin(),n_ans.end()-1);
    return n_ans;
}

vector<int> mul(vector<int>&n_a,vector<int>&n_b){

    vector<int>n_ans(n_a.size()+n_b.size()+1);
    int carry;
    for(int i=0;i<n_b.size();i++){
        int b = n_b[i];
        carry  =0;
        for(int j=0;j<n_a.size();j++){
            int a = n_a[j];
            int ans = a*b+carry+n_ans[i+j];
            n_ans[i+j] = ans%10;
            carry = ans/10;
        }
        if(carry!=0){
            n_ans[i+n_a.size()]+=carry;
        }
    }
    // while (n_ans.size() > 1 && n_ans.back() == 0) n_ans.pop_back();
    return n_ans;
    
}

void output(vector<int>&n){
        // cout<<n_ans.size();
    int i = n.size()-1;
    while(n[i]==0&&i>0)i--;
    for(;i>=0;i--){
        cout<<n[i];
    }
    // cout<<endl;
}


int main(){
    int n;cin>>n;
    vector<int> n_ans(0),a(0),b(0),c(0);
    for(int i=1;i<=n;i++){
        // int k = 1;
        input("1",b);
        for(int j=i;j>=1;j--){
            string s = to_string(j);
            input(s,a);
            b = mul(b,a);
        }
        n_ans = add(b,n_ans);
    }
    output(n_ans);cout<<endl;
    
    return 0;
}