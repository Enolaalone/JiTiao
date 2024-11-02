#include<bits/stdc++.h>
using namespace std;
typedef struct student{
    int g1;
    int g2;
    int g3;
    double g4;
    string degree;
}stu;
int main(){
    int n;cin>>n;
    vector<stu>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i].g1>>nums[i].g2>>nums[i].g3;
        nums[i].g4 = 0.7*nums[i].g2+0.3*nums[i].g3;
        if(nums[i].g4>=80.0&&nums[i].g3+nums[i].g2>140){
            nums[i].degree = "Excellent";
        }else  
            nums[i].degree = "Not excellent";
    }
    for(int i=0;i<n;i++){
        cout<<nums[i].degree<<endl;
    }
    
    return 0;
}