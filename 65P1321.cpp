#include<bits/stdc++.h>//c++万能头文件 
using namespace std;//命名空间~ 
int main() {//主函数 
	int boy=0,girl=0;
	string st;//定义题目给出的字符串 
	cin>>st;//这个我们校长都能看得懂的输入~ 
	for(int i=0;i<=st.length();i++){
        // cout<<st[i]<<st[i+1]<<st[i+2]<<endl;

        // ||运算求重叠部分
		if (st[i]=='b'||st[i+1]=='o'||st[i+2]=='y')//判断连着的三个字母是否为b、o、y 
			boy++;//boy计数器加一 
		if (st[i]=='g'||st[i+1]=='i'||st[i+2]=='r'||st[i+3]=='l')//判断连着的三个字母是否为g、i、r、l 
			girl++;//girl计数器加一 
	}
	cout<<boy<<endl;
	cout<<girl<<endl;
	return 0;
}