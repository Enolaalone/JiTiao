#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<double,double>>poses(3,pair<double,double>(0,0));

    for(int i=0;i<3;i++){
        cin>>poses[i].first>>poses[i].second;
    }

    double ans = 0;
    ans+=sqrt(pow(poses[0].first-poses[1].first,2)+pow(poses[0].second-poses[1].second,2));

    ans+=sqrt(pow(poses[0].first-poses[2].first,2)+pow(poses[0].second-poses[2].second,2));

    ans+=sqrt(pow(poses[2].first-poses[1].first,2)+pow(poses[2].second-poses[1].second,2));
    cout<<fixed<<setprecision(2)<<ans;
    return 0;
}