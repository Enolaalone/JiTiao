#include<bits/stdc++.h>
using namespace std;

typedef struct student{
    string name;
    int age;
    int grade;
}stu;
int main(){
    int n;
    cin>>n;
    vector<stu>students(n);
    for(int i=0;i<n;i++){
        cin>>students[i].name>>students[i].age>>students[i].grade;
        
        students[i].age++;
        students[i].grade = 1.2*students[i].grade;
        if(students[i].grade>600){
            students[i].grade=600;
        }
    }

    for(int i=0;i<n;i++){
        cout<<students[i].name<<" "<<students[i].age<<" "<<students[i].grade<<endl;
    }
    return 0;
}