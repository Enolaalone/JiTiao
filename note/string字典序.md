# string类型的常用操作&string中的字典序

## string类型的常用操作

| 字符串s的操作       | 意义                                           |
| ------------------- | ---------------------------------------------- |
| s.enpty()           | 若s为空，返回TRUE，否则返回FALSE               |
| s.size()            | 返回s中的字符个数                              |
| s[i]                | 返回s中下标为i的字符                           |
| s1==s2              | 比较s1,s2的内容，一样返回TRUE，否则返回FALSE   |
| s.insert(pos,s2)    | 在s下标为pos的元素前插入string类型s2           |
| s.substr(pos,n)     | 返回从s下标pos起的n个字符，类型为string        |
| s.erase(pos,n)      | 删除s下标pos起的n个字符                        |
| s.replace(pos,n,s2) | 将s下标pos起的n个字符替换为s2的内容            |
| s.find(s2,pos)      | 在s下标pos起查找s2第一次出现的位置             |
| s.c_str             | 返回一个与s内容相同的C语言风格的字符串临时指针 |

**显示详细信息**

## string中的字典序

> 字典序解释：

两个字符串s1,s2从前向后一个一个字符串进行比较。遇到第i个不同时，结果就是s1[i]和s2[i]的大小关系。如果一直相等，有一个字符串结束，则长的大，一样长的话，则2个字符串相等，字典序比较的两种方法。

1. 比较运算符："<" ,"<=" ,"==",">=".
2. compare()函数，最常见的方式是

```c
s1.compare(s2);
```

s1和s2相等时返回0；

s1字典序小于s2时返回值小于0

s1字典序大于s2时返回值大于0
