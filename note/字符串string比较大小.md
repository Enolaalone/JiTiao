```cpp
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int> &s1,pair<string,int> &s2){
    if(s1.first.length()>s2.first.length())
        return true;
    else if(s1.first.length()==s2.first.length())
        return s1.first>s2.first;
    else return false;
}

```
