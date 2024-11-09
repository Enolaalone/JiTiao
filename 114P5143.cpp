#include<bits/stdc++.h> 
using namespace std;

double direct(int  &x1,int  &x2,int  &y1,int  &y2,int  &z1,int  &z2){
    double ans = (double)sqrt((double)pow(x1-x2,2)+(double)pow(y1-y2,2)+(double)pow(z1-z2,2));
    return ans;
}
typedef struct pos{
    int x;
    int y;
    int z;
}pos;
bool cmp(pos &p1,pos &p2){
    return p1.z<p2.z;
}
int main(){
    int n;cin>>n;
    vector<pos>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i].x>>nums[i].y>>nums[i].z;
    }
    sort(nums.begin(),nums.end(),cmp);
    // pos p = {0,0,0};
    // nums.insert(nums.begin(),p);
    vector<double>ans(n-1);
    for(int i=1;i<n;i++){
        ans[i-1] = direct(nums[i-1].x,nums[i].x,nums[i-1].y,nums[i].y,nums[i-1].z,nums[i].z);

    }
    double answer = accumulate(ans.begin(),ans.end(),0.0);
    cout<<fixed<<setprecision(3)<<answer;
    return 0;
}