#include<bits/stdc++.h>
using namespace std;
int n,m;
int d(vector<vector<char>>&mines,int i,int j){
    if(i<0||i>=n||j<0||j>=m)return -1;

    if(mines[i][j]=='*')return -2;


    return 1;
}


int main(){
    cin>>n>>m;
    vector<vector<char>>mines(n,vector<char>(m));
    for(int i=0;i<n;i++){
        string s;cin>>s;
        for(int j=0;j<m;j++){
            mines[i][j] = s[j];
        }
    }


    int count=0;
    int x[3] = {-1,0,1};    
    int y[3] = {-1,0,1};
    // vector<vector<char>>mines_nums(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            count=0;
            if(d(mines,i,j)!=-2){
                for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                        if(!(k==1&&l==1)){
                            if(d(mines,i+x[k],j+y[l])==-2){
                                // cout<<i+x[k]<<","<<j+y[l]<<endl;
                                count++;

                            }
                                
                         }
                    }
                }
                cout<<count;
            }
            else if(d(mines,i,j)==-2){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}