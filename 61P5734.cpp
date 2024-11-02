#include<bits/stdc++.h>
using namespace std;
void add(string &s,string &a){
    s+=a;
}

void select(string &s,int a,int b){
    s = s.substr(a,b);
}

void insert(string &s,int a,string &i){
    string l = s.substr(a);
    s = s.substr(0,a);
    s +=i;
    s+=l;
}

int find(string &s,string &f){
    int pos=s.find(f); 
    if(pos == string::npos)return -1;
    else return pos;
}
int main(){
    int q;
    cin>>q;
    string s;
    cin>>s;

    vector<string>ans;
    for(int i=0;i<q;i++){
        int k;
        cin>>k;
        if(k==1){
            string r;
            cin>>r;
            add(s,r);
            ans.push_back(s);
        }
        else if(k==2){
            int m,n;
            cin>>m>>n;
            select(s,m,n);
            ans.push_back(s);

        }
        else if(k==3){
            int m;
            string n;
            cin>>m>>n;
            insert(s,m,n);
            ans.push_back(s);

        }
        else if(k==4){
            string n;
            cin>>n;
            int m = find(s,n);
            ans.push_back(to_string(m));
        }
    }

    for(string c:ans){
        cout<<c<<endl;
    }

    return 0;

}