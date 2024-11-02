#include<bits/stdc++.h>
using namespace std;
bool check_in_line(vector<vector<bool>> &timeline,int begin_time_point,int end_time_point,int workid){
    for(int time = begin_time_point;time<end_time_point;time++){
        if(timeline[workid][time])
            return false;
        
    }
    return true;
}
int main(){
    int m,n;
    cin>>m>>n;
    int ans = 0;
    m++;n++;
    //构建数组
    vector<int>worklist(m*n) ;
    vector<vector<int>>worknumber(n,vector<int>(m)) ;
    vector<vector<int>>worktime(n,vector<int>(m)) ;
    vector<int>cnt_work_step(m*n);
    vector<int>lasttime(m*n);
    vector<vector<bool>>timeline(m*n,vector<bool>(n*m));

    m--;n--;
    //输入工序
    for(int i=1;i<=m*n;i++){
        cin>>worklist[i];
    }
    //输入机器
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>worknumber[i][j];
        }
    }
    //输入时间
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>worktime[i][j];
        }
    }    
    for(int i=1;i<=n*m;i++){
        int nowitem = worklist[i];//输入工件id
        cnt_work_step[nowitem]++;//工序步骤++
        int nownumber = worknumber[nowitem][cnt_work_step[nowitem]];//工序的机器
        int costtime = worktime[nowitem][cnt_work_step[nowitem]];//花费的时间

        for(int time=lasttime[nowitem]+1;;time++){
            if(check_in_line(timeline,time,time+costtime-1,nownumber)){//time,time+costtime-1时间内是否被占用
                //标记该时间被占用
                for(int marktime=time;marktime<=time+costtime-1;marktime++)
                    timeline[nownumber][marktime]=true;
                lasttime[nowitem] = time+costtime-1;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        ans = max(ans,lasttime[i]);
    }
    cout<<ans<<endl;
    return 0;
}