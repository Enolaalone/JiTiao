#include <bits/stdc++.h>
using namespace std;
typedef struct student{
    // string name;
    int g1;
    int g2;
    int g3;
}stu;
int main(){
    int n;
    cin>>n;
    map<string,stu>students;
    pair<string,int>s = {"",INT_MIN};
    for(int i=0;i<n;i++){
        string nm;
        cin>>nm;
        cin>>students[nm].g1>>students[nm].g2>>students[nm].g3;
        int k = students[nm].g1+students[nm].g2+students[nm].g3;

        if(k>s.second){
            s.first = nm;
            s.second = k;
        }
    }

    cout<<s.first<<" "<<students[s.first].g1<<" "<<students[s.first].g2<<" "<<students[s.first].g3;



    return 0;
}