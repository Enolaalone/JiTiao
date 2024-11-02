#include<bits/stdc++.h>

using namespace std;

int n,a[90],b[90],c[90],f[90],d=0,len_a,len_b=1,len_c=1,len_ans,m=1;
string s;
int main(){
    cin>>n;
    b[0]=1; 
    for(int i=1;i<=n;i++){ 
        len_a=0; 
        int p=i;
        //写入数组a
        while(p>0){ 
            a[len_a++]=p%10;
            p/=10;
        }

        //高精度乘法
        for(int j=0;j<len_a;j++)
            for(int k=0;k<=len_b;k++)
                c[j+k]+=a[j]*b[k];
        for(int j=0;j<len_c;j++) 
            if(c[j]>9) c[j+1]+=c[j]/10,c[j]%=10;
        if(c[len_c]) len_c++;


        len_ans=len_b,len_b=len_c,m=max(m,len_c); 
        for(int k=len_c-1;k>=0;k--) b[k]=c[k]; 
        len_c=len_a+len_ans;
        memset(c,0,sizeof(c));

        //高精度加法 
        for(int j=0;j<m;j++){ 
            f[j]+=b[j];
            if(f[j]>9) f[j+1]+=f[j]/10,f[j]%=10; 
        }
    }
    //去除无用 的 0 
    //由于  len_c=len_a+len_ans; 估计大了的
    while(!f[m]&&m>0) m--; 
    for(int i=m;i>=0;i--) cout<<f[i]; 
    return 0; 
}
