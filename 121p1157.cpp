#include<bits/stdc++.h>
using namespace std;
void output(string s){
    int n=0; 
    while(true){
        int pos = s.find(' ',n);
        if(pos==-1)break;
        string num = s.substr(n,pos-n);
        cout << setw(3) << num;
        n=pos+1;
    }
    cout<<endl;
}
void assembly(vector<string>&nums,int start,int &k,int k1,string sum){
    if(k1==k){
        output(sum);

        return;
    }
    for(int i=start;i<nums.size();i++){
        string s = sum;
        sum+=nums[i];
        assembly(nums,i+1,k,k1+1,sum);
        sum=s;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<string>nums=[](int n)->vector<string> {
        vector<string> a;
        for(int i=1;i<=n;i++)a.push_back(to_string(i)+" ");
        return a;
    }(n);

    // for(int i=0;i<n;i++){
    //     cout<<nums[i]<<endl;
    // }

    assembly(nums,0,m,0,"");
    return 0;
}