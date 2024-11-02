#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>q;
     q["one"]=1;q["two"]=2;q["three"]=3;q["four"]=4;q["five"]=5;q["six"]=6;q["seven"]=7;q["eight"]=8;q["nine"]=9;q["ten"]=10;
     q["eleven"]=11;q["twelve"]=12;q["thirteen"]=13;q["fourteen"]=14;q["fifteen"]=15;q["sixteen"]=16;q["seventeen"]=17;q["eighteen"]=18;q["nineteen"]=19;q["twenty"]=20;
     q["a"]=1;q["both"]=2;q["another"]=1;q["first"]=1;q["second"]=2;q["third"]=3;
     //打表

    string s;
    vector<int>ans;
     for(int i=0;i<6;i++){
        cin>>s;
        if(q[s]){
            int k = q[s]*q[s]%100;
            if(k!=0)
                ans.push_back(k);
            
        }
     }

     sort(ans.begin(),ans.end());
     if(ans.size()==0){
        cout<<0;
        return 0;
     }
     cout<<ans[0];
     for(int i=1;i<ans.size();i++){
        if(ans[i]<10)cout<<0;
        cout<<ans[i];
     }


    return 0;
}