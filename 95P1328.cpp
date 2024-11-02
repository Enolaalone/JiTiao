#include<bits/stdc++.h>
using namespace std;
int main(){
    //记录游戏状态
    vector<vector<int>>vs = {
        {0,-1,1,1,-1},
        {1,0,-1,1,-1},
        {-1,1,0,-1,1},
        {-1,-1,1,0,1},
        {1,1,-1,-1,0}
    };
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>n_a(a);
    vector<int>n_b(b);
    for(int i=0;i<a;i++){
        cin>>n_a[i];
    }
    for(int i=0;i<b;i++){
        cin>>n_b[i];
    }
    int score_a=0,score_b=0;
    for(int i=0;i<n;i++){
        int A = i%a;
        int B = i%b;
        int s = vs[n_a[A]][n_b[B]];
        if(s==1)score_a++;
        else if(s==-1) score_b++;
    }
    cout<<score_a<<" "<<score_b;
    return 0;
}