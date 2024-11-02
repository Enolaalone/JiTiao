#include<bits/stdc++.h>
using namespace std;
void move(vector<vector<char>>&N,vector<int>&ob,int who){

    if(ob[2]==0){
       if(N[ob[0]-1][ob[1]]=='*') {
            ob[2] = 1;
       }else{
            ob[0]--;
       }
    }else if(ob[2]==1){
        if(N[ob[0]][ob[1]+1]=='*') {
            ob[2] = 2;
        }else{
            ob[1]++;
        }

    }else if(ob[2]==2){
        if(N[ob[0]+1][ob[1]]=='*'){
            ob[2] = 3;
        }else{
            ob[0]++;
        }
    }else if(ob[2]==3){
        if(N[ob[0]][ob[1]-1]=='*'){
            ob[2] = 0;
        }else{
            ob[1]--;
        }
    }
}

int main(){
    vector<int> peo(3),cow(3);
    vector<vector<char>>N(12,vector<char>(12));
    for(int i=0;i<=11;i++){
        N[i][0] = '*';
        N[i][11] = '*';
        N[0][i] = '*';
        N[11][i] = '*';
    }

    for(int i=1;i<11;i++){
        for(int j=1;j<11;j++){
            cin>>N[i][j];
            if(N[i][j]=='C'){
                cow[0] = i;cow[1]=j;
            }else if(N[i][j]=='F'){
                peo[0] = i;peo[1] = j;
            }
        }
    }
    int ans = 0;
    for(int i=0;i<1000;i++){
       move(N,cow,1) ;
       move(N,peo,0);
       ans++;
       if(peo[0]==cow[0]&&peo[1]==cow[1]){
            cout<<ans<<endl;
            return 0;
       }
    }
    cout<<0;
    return 0;
}