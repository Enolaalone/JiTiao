#include<bits/stdc++.h>
using namespace std;
typedef struct peo{
    string name;
    string pos;
    string n_pos;
    long long int bg;
    int grade;
    int input;
}peo;


int change(string a){
	if (a=="BangZhu") return 0;
	if (a=="FuBangZhu") return 1;
	if (a=="HuFa") return 2;
	if (a=="ZhangLao") return 3;
	if (a=="TangZhu") return 4;
	if (a=="JingYing") return 5;
	if (a=="BangZhong") return 6;
    return -1;
}

//帮贡排序
int cp(peo x,peo y){
    if(x.bg==y.bg){
        return x.input<y.input;
    }
    return x.bg>y.bg;
}

//等级排序
int cmp(peo x,peo y){
    if(change(x.n_pos)==change(y.n_pos)){
        if(x.grade==y.grade)return x.input<y.input;
        return x.grade>y.grade;
    }
    return change(x.n_pos)<change(y.n_pos);
}

int main(){
    int n;cin>>n;
    vector<peo>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i].name>>nums[i].pos>>nums[i].bg>>nums[i].grade;
        nums[i].input = i;
    }
    
    sort(nums.begin()+3,nums.end(),cp);
    
    for(int i=0;i<nums.size();i++){
        if (i==0)
            nums[i].n_pos="BangZhu";
	    else if (i==1||i==2)
            nums[i].n_pos="FuBangZhu";
        else if(i<5)
            nums[i].n_pos = "HuFa";
        else if(i>=5&&i<9)
            nums[i].n_pos = "ZhangLao";
        else if(i>=9&&i<16)
            nums[i].n_pos = "TangZhu";
        else if(i>=16&&i<41)
            nums[i].n_pos = "JingYing";
        else nums[i].n_pos = "BangZhong";
    }

    // cout<<endl;
    // for(int i=0;i<nums.size();i++){
    //     cout<<nums[i].name<<" "<<nums[i].n_pos<<" "<<nums[i].grade<<endl;
    // }

    sort(nums.begin()+1,nums.end(),cmp);

    
    for(int i=0;i<nums.size();i++){
        cout<<nums[i].name<<" "<<nums[i].n_pos<<" "<<nums[i].grade<<endl;
    }


    return 0;
}