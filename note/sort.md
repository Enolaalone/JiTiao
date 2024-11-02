# C++ 中的sort()排序函数原理、用法看这一篇就够了

#### C++ 中的sort（）排序函数原理、用法用法看这一篇就够了

**sort(first_pointer,first_pointer+n,cmp)**

该函数可以给数组，或者链表list、向量排序。

原理：sort并不是简单的快速排序，它对快速排序进行了优化。此外，它还结合了插入排序和推排序。系统会根据数据形式和数据量自动选择合适的排序方法。它每次排序中不只选择一种方法，比如给一个数据量较大的数组排序，开始采用快速排序，分段递归，分段之后每一段的数据量达到一个较小值后它就不继续往下递归，而是选择插入排序，如果递归的太深，他会选择推排序。

**3个参数：**

参数1：第一个参数是数组的首地址，一般是数组名或者迭代器。

参数2：要排序数据的尾地址。

参数3：默认可以不填，如果不填sort会默认按数组升序排序。可以自定义一个排序函数，改排序方式为降序。

使用此函数需先包含：

```cpp
#include < algorithm >
using namespace std;
```

**自己编写排序规则函数**

```cpp
bool compare(int a,int b)
{
	return a<b; //升序排列
}
```

**sort扩展**

sort不只是能像上面那样简单的使用，我们可以对sort进行扩展，关键就在于第三个参数<cmp比较函数>。

方法一：定义比较函数（最常用）
//情况一：数组排列

```cpp
int A[100];
bool cmp1(int a,int b)//int为数组数据类型
{
return a>b;//降序排列
//return a<b;//默认的升序排列
}
sort(A,A+100,cmp1);
```

//情况二：结构体排序

```cpp
Student Stu[100];
bool cmp2(Student a,Student b)
{
return a.id>b.id;//按照学号降序排列
}
sort(Stu,Stu+100,cmp2);
```

注：比较方法也可以放在结构体中或类中定义。

方法二：使用标准库函数

functional提供了一堆基于模板的比较函数对象：equal_to、not_equal_to、greater、greater_equal、less、less_equal。
● 升序：`sort(begin,end,less())`

● 降序：`sort(begin,end,greater())`

缺点：也只是实现简单的排序，结构体不适用。

```cpp
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <functional>

using namespace std;
//简单使用方法
sort(A,A+100,greater<int>());//降序排列
sort(A,A+100,less<int>());//升序排列
```

方法三：重载结构体或类的比较运算符

```cpp
//情况一：在结构体内部重载
typedef struct Student{
int id;
string name;
double grade;

bool operator<(const Student& s)
{
return id>s.id;//降序排列
//return id<s.id;//升序排列
}
};
vector<Student> V;
sort(V.begin(),V.end());
```

//情况二：在外部重载

```cpp
vector<Student> V;
bool operator<(const Student& s1, const Student& s2)
{
return s1.id>s2.id;//降序排列
//return s1.id<s2.id;//升序排列
}
sort(V.begin(),V.end());
```

注意：一定要重载<运算符，因为系统默认是降序，用的是<运算符。

方法四：声明比较类（少用）

```cpp
struct Less
{
bool operator()(const Student& s1, const Student& s2)
{
return s1.id<s2.id; //升序排列
}
};
sort(sutVector.begin(),stuVector.end(),Less());
```
