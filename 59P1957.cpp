#include <bits/stdc++.h>
using namespace std;

string output(vector<string> &s){
    int r,l;
    l = stoi(s[1]);
    r = stoi(s[2]);

    int k = 0;
    char c;
    switch(int(s[0][0]-'a')){
        case 0:
            c = '+';
            k = l+r;
            break;
        case 1:
            c = '-';
            k = l-r;
            break;
        case 2:
            c = '*';
            k = l*r;
            break;
    }

    string ans;
    ans = to_string(l)+c+to_string(r)+"="+to_string(k);
    // cout<<ans<<endl<<ans.length()<<endl;

    return ans;

}

int main(){
    int n;
    cin>>n;
    string last;

    vector<string>s(3,"");
    vector<string>ans;
    for(int i=0;i<n;i++){

        for(int j=0;j<3;j++){
            cin>>s[j];
            if(j==0&&s[0][0]>='0'&&s[0][0]<='9'){
                cin>>s[2];
                s[1]=s[0];
                s[0]=last;
                break;
            }
        }
        last = s[0];
        ans.push_back(output(s));
    }

    for(string i:ans){
        cout<<i<<endl<<i.length()<<endl;
    }
    return 0;
}