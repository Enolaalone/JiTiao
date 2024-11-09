#include<bits/stdc++.h>
using namespace std;
typedef struct stu{
    int id;
    int y;
    int s;
    int e;
    int sum;
}stu;
bool cmp(stu &s1,stu &s2){
    if(s1.sum==s2.sum){
       if(s1.y==s2.y){
            return s1.id<s2.id;
       }else return s1.y>s2.y;
    }
    else return s1.sum>s2.sum;
}
int main(){
    int n;
    cin>>n;
    vector<stu>nums(n);
    for(int i=0;i<n;i++){
        nums[i].id = i+1;
        scanf("%d %d %d",&nums[i].y,&nums[i].s,&nums[i].e);
        nums[i].sum = nums[i].y+nums[i].s+nums[i].e;
    }
    sort(nums.begin(),nums.end(),cmp);
    for(int i=0;i<5;i++){
        printf("%d %d\n",nums[i].id,nums[i].sum);
    }
    return 0;
}