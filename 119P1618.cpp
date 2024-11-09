#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int k1,k2,k3;
    int b1,b2,b3;
    int No = 0;    // 初始化
    int ans = 0;   // 初始化
    vector<int>a(10,0);
    cin>>k1>>k2>>k3;
    for(int b = 1;b<=1000/k3;b++){
        No = 0;    // 在循环开始时重置No
        //直接按比例求出3个数
        b1 = b*k1;
        b2 = b*k2;
        b3 = b*k3;
        //越界
        if(b2>999||b3>999)break;
        //判断所有数字出现次数
        for(int c=1;c<=3;c++){
            a[b1%10]++;
            b1/=10;
        }
        for(int c=1;c<=3;c++){
            a[b2%10]++;
            b2/=10;
        }
        for(int c=1;c<=3;c++){
            a[b3%10]++;
            b3/=10;
        }
        // 检查1-9每个数字是否恰好出现一次
        for(int i=1;i<10;i++){
            if(a[i]!=1){//没有出现 或者出现多次
                No = 1;
                break;
            }
        }
        if(!No){
            cout<<b*k1<<" "<<b*k2<<" "<<b*k3<<endl;
            ans++;
        }
        a = vector<int>(10,0);  // 重置数组
    }
    if(!ans)cout<<"No!!!";
    return 0;
}