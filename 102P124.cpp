#include<bits/stdc++.h>
using namespace std;


void input2(int a,vector<int>&n){
    n = vector<int>(to_string(a).length());
    for(int i=0;i<n.size();i++){
        n[i] = a%10;
        a/=10;
    }
}

vector<int> mul(vector<int>&n_a,vector<int>&n_b){
    vector<int>n_ans(n_a.size()+n_b.size()+1);
    int carry=0;
    for(int i=0;i<n_b.size();i++){
        carry = 0;
        int b = n_b[i];
        for(int j=0;j<n_a.size();j++){
            int a = n_a[j];
            int ans = a*b+n_ans[i+j]+carry;
            n_ans[i+j] = ans%10;
            carry = ans/10;
        }
        if(carry!=0)n_ans[i+n_a.size()]+=carry;
    }
    while(!n_ans.back())n_ans.pop_back();
    return n_ans;
    
}

void output(vector<int>&a){
    for(int i=a.size()-1;i>=0;i--){
        cout<<a[i];
    }
    cout<<endl;
}

int main(){
    int n;cin>>n;
    vector<int>nums(1);
    vector<int>ans = {1};
    //小于4直接输出
    if(n<=4){
        cout<<n;
        return 0;
    }
    // 2 3 4 5 6 7 8 9 
    for(int i=2;i<=n;i++){
        if(n>=i){
            n-=i;
            nums.push_back(i);
        }else break;
    }

    for(int i=nums.size()-1;i>=1;i--)
        if(n>0)nums[i]++,n--;
    if(n>0)nums[nums.size()-1]++;

    //做乘法
    vector<int>b;
    for(int i=1;i<nums.size();i++){
        cout<<nums[i]<<" ";
        input2(nums[i],b);
        ans= mul(b,ans);
    }
    cout<<endl;
    output(ans);
    return 0;
}