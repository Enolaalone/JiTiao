#include<bits/stdc++.h>
using namespace std;
int n,m,ans= INT_MAX,w[51],b[51],r[51];
string s;
//求一行的修改次数
inline int check(char c){
    int tot = 0;
    for(int i=0;i<m;i++){
        if(s[i]!=c)++tot;

    }
    return tot;
}

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>s;
        //记录当前行及其前面行换为对应颜色修改次数
        w[i] = w[i-1]+check('W');
        b[i] = b[i-1]+check('B');
        r[i] = r[i-1]+check('R');

    }

    for(int i=1;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            //w i行+ b j行- b i行+r 最后一行-r j行
            ans = min(w[i]+b[j]-b[i]+r[n]-r[j],ans);
        }
    }
    cout<<ans;
    return 0;
}