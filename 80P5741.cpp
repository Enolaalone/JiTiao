#include<bits/stdc++.h>
using namespace std;
typedef struct student{
    string name;
    int g1;
    int g2;
    int g3;
}stu;
int main(){
    int n;cin>>n;
    vector<stu>stu_s(n);
    for(int i=0;i<n;i++){
        cin>>stu_s[i].name>>stu_s[i].g1>>stu_s[i].g2>>stu_s[i].g3;
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int sum1=0,sum2=0;
            
            if(abs(stu_s[i].g1-stu_s[j].g1)<=5){
                sum1+=stu_s[i].g1;
                sum2+=stu_s[j].g1;
            }else continue;
            if(abs(stu_s[i].g2-stu_s[j].g2)<=5){
                sum1+=stu_s[i].g2;
                sum2+=stu_s[j].g2;
            }else continue;
            if(abs(stu_s[i].g3-stu_s[j].g3)<=5){
                sum1+=stu_s[i].g3;
                sum2+=stu_s[j].g3;
            }else continue;
            if(abs(sum1-sum2)<=10){
                 if( stu_s[i].name.compare(stu_s[j].name)>0){
                    cout<<stu_s[j].name<<" "<<stu_s[i].name;
                 }else{
                    cout<<stu_s[i].name<<" "<<stu_s[j].name;
 
                 }
                cout<<endl;
            }

        }
    }
    return 0;
}