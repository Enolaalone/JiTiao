#include<bits/stdc++.h>
using namespace std;
int main(){
    int p;cin>>p;
    //2^p-1的位数
    cout<<ceil(p*log10(2))<<endl;
    //预先算好2^32
    long long tmp = (long long)pow(2,32);

    vector<long long>a(510);
    a[500] = 1;
    //2^32的个数
    int t32 = p/32;
    //剩余的个数
    int t1 = p-t32*32;

    //满足2^32的次数
    for(int T=1;T<=t32;T++){
        //假设 `a` 的内容最初表示的整数是 1，那么乘以 \(2^{32}\) 相当于把整个大数都放大 \(2^{32}\) 倍。为了完成这个放大操作，需要对 `a` 数组的每一位都乘以 \(2^{32}\)，才能正确表示大数的乘积结果。

        for(int i=500;i>=1;i--){
            a[i]*=tmp;
        }
        for(int i=500;i>=1;i--){
            a[i-1]+=a[i]/10;
            a[i]%=10;
        }
    }

    //不满足2^32的次数
    for(int T=1;T<=t1;T++){
        for(int i=500;i>=1;i--){
            a[i]*=2;
        }
        for(int i=500;i>=1;i--){
            a[i-1]+=a[i]/10;
            a[i]%=10;
        }
    }
    
    a[500]--;
    for(int i=1;i<=500;i++){
        cout<<a[i];
        if(i%50==0)cout<<endl;
    }
    return 0;
}



// int  compare(string &a,string &b){
//     if(a>b&&a.length()>b.length())return 1;
//     else if(a==b)return 0;
//     else return -1;
// }
// vector<int> decease(vector<int>&n_a,vector<int>&n_b){
//     vector<int>n_ans(n_a.size());
//     int temp = 0;
//     for(int i=0;i<n_a.size();i++) {
//         int a = n_a[i];
//         int b = i>=n_b.size()?0:n_b[i];
//         int ans = a-b+temp;
//         if(ans<0){
//             ans+=10;
//             temp=-1;
//         }else temp=0;
//         n_ans[i] = ans;
//     }

//     while(!n_ans.back())n_ans.pop_back();
//     return n_ans;
// }
// vector<int> mul(vector<int>&n_a,vector<int>&n_b){
//     vector<int>n_ans(n_a.size()+n_b.size()+1);
//     int carry;

//     for(int i=0;i<n_b.size();i++){
//         carry = 0;
//         int b = n_b[i];
//         for(int j = 0;j<n_a.size();j++){
//             int a = n_a[j];
//             int ans = a*b+carry+n_ans[i+j];
//             n_ans[i+j] = ans%10;
//             carry = ans/10;
//         }
//         if(carry!=0){
//             n_ans[i+n_a.size()]+=carry;
//         }
//     }
//     while(!n_ans.back())n_ans.pop_back();
//     return n_ans;

// }
// void output(vector<int> &a){
//     cout<<a.size()<<endl;
//     int c = 500-a.size();
//     if(c>0){
//         for(int i=0;i<c;i++)
//             cout<<0;

//     }
//     for(int i = 0;i<a.size();i++){
//         cout<<a[a.size()-1-i];
//     }
//     cout<<endl;
// }
// int main(){
//     int n;cin>>n;
//     vector<int>ans = {1};
//     vector<int>b = {2};
//     for(int i=0;i<n;i++){
//         ans = mul(ans,b);
//     }
//     vector<int>one ={1};
//     ans=decease(ans,one);
//     output(ans);

//     return 0;
// }