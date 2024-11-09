// #include<bits/stdc++.h>
// using namespace std;

// void dp(vector<int> &nums,int &ans,vector<int>&add,int last){
//     for(int i=0;i<999;i++){
//         if(last-nums[i]>=0){
//             add.push_back(i);
//             last-=nums[i];
//             if(add.size()==3){
//                 if(add[0]+add[1]==add[2]&&last==0)ans++;
//             }
//             else dp(nums,ans,add,last);
//             last+=nums[i];
//             add.pop_back();
//         }


//     }

// }

// int main(){
//     vector<int>nums={6,2,5,5,4,5,6,3,7,6};
//     int n;cin>>n;

//     for(int i=10;i<=999;i++){
//         int k=i;
//         nums.push_back(0);
//         while(k){
//             nums[i]+=nums[k%10];
//             k/=10;
//         }
//     }
//     vector<int>add;
//     int last = n-4;
//     int ans=0;
//     dp(nums,ans,add,last);
//     cout<<ans;
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

void dp(vector<int> &nums,int &ans,vector<int>&add,int last){
    if(last==0&&add.size()==3){
        if(add[0]+add[1]==add[2])ans++;
        return;
    }else if(last<0||add.size()==3)return; //去除last<0的情况

    for(int i=0;i<999;i++){
        add.push_back(i);
        dp(nums,ans,add,last-nums[i]);
        add.pop_back();

    }

}

int main(){
    vector<int>nums={6,2,5,5,4,5,6,3,7,6};
    int n;cin>>n;

    for(int i=10;i<=999;i++){
        int k=i;
        nums.push_back(0);
        while(k){
            nums[i]+=nums[k%10];
            k/=10;
        }
    }
    vector<int>add;
    int last = n-4;
    int ans=0;
    dp(nums,ans,add,last);
    cout<<ans;
    return 0;
}