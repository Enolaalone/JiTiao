#include<bits/stdc++.h>
using namespace std;
struct stu{
    string name;
    int id;
    int year;
    int month;
    int day;
};

bool cmp(stu s1,stu s2){
    if(s1.year==s2.year){
        if(s1.month == s2.month){
            if(s1.day==s2.day){
                return s1.id>s2.id; 
            }else return s1.day<s2.day;
        }else return s1.month<s2.month;
    }else return s1.year<s2.year;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

    int n;cin>>n;
    vector<stu>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i].name>>nums[i].year>>nums[i].month>>nums[i].day;
        nums[i].id = i;
    }
    sort(nums.begin(),nums.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<nums[i].name<<endl;
    }

    return 0;
}