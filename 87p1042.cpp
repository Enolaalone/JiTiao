#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string ans;
    while(cin>>s){
        ans+=s;
    }

    int Hua=0,counterpart=0;
    for(int i=0;i<ans.length();i++){
        if(ans[i]=='L')counterpart++;
        else if(ans[i]=='W')Hua++;
        else if(ans[i]=='E'){
            cout<<Hua<<":"<<counterpart<<endl;
        }
        //比赛分数大于11 而且 比赛分数差距大于2也会结束
        if((Hua>=11||counterpart>=11)&&abs(Hua-counterpart)>=2){
            cout<<Hua<<":"<<counterpart<<endl;
            Hua=0;
            counterpart = 0;
        }
    }
    cout<<endl;
    Hua=0,counterpart=0;
    for(int i=0;i<ans.length();i++){
        if(ans[i]=='L')counterpart++;
        else if(ans[i]=='W')Hua++;
        else if(ans[i]=='E'){
            cout<<Hua<<":"<<counterpart<<endl;
        }
        if((Hua>=21||counterpart>=21)&&abs(Hua-counterpart)>=2){
            cout<<Hua<<":"<<counterpart<<endl;
            Hua=0;
            counterpart = 0;
        }
    }


    return 0;
}