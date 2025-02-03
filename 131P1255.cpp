#include<bits/stdc++.h>
using namespace std;

void get_vector(vector<int> &a,vector<int>&b){
    a = vector<int>(b.begin(), b.end());

}

vector<int> add(vector<int>&n_a,vector<int>&n_b){
    int k = n_a.size() > n_b.size() ? n_a.size() : n_b.size();
    vector<int> n_ans(k + 1,0);
    int carry = 0;
    for (int i = 0; i < k;i++){
        int a = i < n_a.size() ? n_a[i] : 0;
        int b = i < n_b.size() ? n_b[i] : 0;
        int ans = a + b + carry+n_ans[i];
        n_ans[i] = ans % 10;
        carry = ans / 10;
    }
    if(carry!=0){
        n_ans[k] = carry;
    }

    while(n_ans.back()==0)
        n_ans.pop_back();

    return n_ans;
}

vector<int> f(int n)
{
    vector<int> f1(1, 2), f2(1, 1), ans;
    if(n==1){
        return f2;
    }else if(n==2){
        return f1;
    }else{
        for(int i=2;i<n;i++){
            ans = add(f1, f2);
            get_vector(f2,f1);
            get_vector(f1,ans);
        }
        return ans;
    }
}

int main(){
    int n;cin>>n;
    vector<int> ans = f(n);
    int k = ans.size();
    for (int i = 0; i < k;i++){
        cout << ans[k - i - 1];
    }
    return 0;
}