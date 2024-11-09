#include<bits/stdc++.h>
using namespace std;
typedef struct stu{
    int id;
    int g;
}stu;

bool cmp(stu &s1,stu &s2){
    if(s1.g==s2.g){
        return s1.id<s2.id;
    }else return s1.g>s2.g;
}
int main(){
    int peo_num,grade;
    //总人数 和  预录取人数
    cin>>peo_num>>grade;
    vector<stu>nums(peo_num);
    for(int i=0;i<peo_num;i++){
        scanf("%d %d",&nums[i].id,&nums[i].g);
    }
    sort(nums.begin(),nums.end(),cmp);
    //求预录取人数
    grade = floor (1.5*grade);
    //求分数线
    int m_grade = nums[grade-1].g;

    //求多余的过线人数
    int ren = grade;
    for(int i=grade;i<peo_num;i++){
        if(nums[i].g<m_grade){
            break;
        }else if(nums[i].g==m_grade){
            ren++;
        }
    }
    cout<<m_grade<<" "<<ren<<endl;
    for(int i=0;i<ren;i++){
        printf("%d %d\n",nums[i].id,nums[i].g);
    }

    
    return 0;
}