#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,e,f,g,h,i,j,n,x=0;
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n;
   for (a=1;a<=3;a++)  
    {  
        for (b=1;b<=3;b++)  
        {  
            for (c=1;c<=3;c++)  
            {  
                for (d=1;d<=3;d++)  
                {  
                    for (e=1;e<=3;e++)  
                    {  
                        for (f=1;f<=3;f++)  
                        {  
                            for (g=1;g<=3;g++)  
                            {  
                                for(h=1;h<=3;h++)  
                                {  
                                    for (i=1;i<=3;i++)  
                                    {  
                                        for (j=1;j<=3;j++)  
                                        {  
                                            if (a+b+c+d+e+f+g+h+i+j==n)  
                                            {  
                                                x++;  
                                            }  
                                        }  
                                    }  
                                }  
                            }  
                        }  
                    }  
                }  
            }  
        }  
    }  
    cout<<x<<endl;
   
    for (a=1;a<=3;a++)  
    {  
        for (b=1;b<=3;b++)  
        {  
            for (c=1;c<=3;c++)  
            {  
                for (d=1;d<=3;d++)  
                {  
                    for (e=1;e<=3;e++)  
                    {  
                        for (f=1;f<=3;f++)  
                        {  
                            for (g=1;g<=3;g++)  
                            {  
                                for(h=1;h<=3;h++)  
                                {  
                                    for (i=1;i<=3;i++)  
                                    {  
                                        for (j=1;j<=3;j++)  
                                        {  
                                            if (a+b+c+d+e+f+g+h+i+j==n)  
                                            {  
                                                cout<<a<<" "; 
                                                cout<<b<<" "; 
                                                cout<<c<<" "; 
                                                cout<<d<<" "; 
                                                cout<<e<<" "; 
                                                cout<<f<<" "; 
                                                cout<<g<<" "; 
                                                cout<<h<<" "; 
                                                cout<<i<<" "; 
                                                cout<<j<<" "; 
                                                cout<<endl;
                                            }  
                                        }  
                                    }  
                                }  
                            }  
                        }  
                    }  
                }  
            }  
        }  
    }  

    return 0;
}