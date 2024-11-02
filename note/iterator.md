# C++ 迭代器(iterator)超详解+实例演练

## 什么是迭代器

概念：迭代器是一种检查容器内元素并遍历元素的数据类型，通常 **用于对C++中各种容器内元素的访问** ，但不同的容器有不同的迭代器，初学者可以将迭代器理解为 **指针** 。

如果你还不了解容器，那没关系，我已经为你准备好了一些C++STL常用容器详解：
[string容器详解](https://blog.csdn.net/qq_52324409/article/details/121404001)
[vector容器详解](https://blog.csdn.net/qq_52324409/article/details/121000029)
[deque容器详解](https://blog.csdn.net/qq_52324409/article/details/121027112)
[list容器详解](https://blog.csdn.net/qq_52324409/article/details/121046388)
[set容器详解](https://blog.csdn.net/qq_52324409/article/details/121280952)
[stack容器详解](https://blog.csdn.net/qq_52324409/article/details/121042345)
[queue容器详解](https://blog.csdn.net/qq_52324409/article/details/121043685)
如果对你有帮助，可以订阅我的C++专栏，以后会经常更新有关C++的知识

## begin()和end()

顾名思义，**begin()就是指向容器第一个元素的迭代器** 如果你是初学者，你可能会猜到 end()是指向容器最后一个元素的迭代器， 但事实并非如此，实际上，**end()是指向容器最后一个元素的下一个位置的迭代器**

如何使用begin(),end()?
两种方式(假设rq是容器名)：

* **rq.begin() , rq.end()**
* **begin(rq) , end(rq)**

以vector容器为例：

```cpp
void text()
{
	vector<int> vtr;
	//初始化容器
	for (int i = 0; i < 10; ++i)
	{
		vtr.push_back(i);
	}
	//利用迭代器遍历容器
	cout << "方式1：";
	for (vector<int>::iterator it = vtr.begin(); it != vtr.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << "\n方式1：";
	for (vector<int>::iterator it = begin(vtr); it != end(vtr); ++it)
	{
		cout << *it << " ";
	}
	cout << endl;
}
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/64c2b9e53c2114b43dbbe41aad6046f6.png)
上面这段代码用了一些迭代器的功能，下面会详细介绍

## 迭代器类型

按照迭代器的功能强弱，可以把迭代器分为以下几种类型：

* **输入迭代器 （input iterator）**
* **输出迭代器 （output iterator）**
* **前向迭代器 （forward iterator）**
* **双向迭代器 （bidirectional iterator）**
* **随机访问迭代器（ random-access iterator）**

### 迭代器的通用功能

上面有5种类型的迭代器，我们先来了解一下他们的一些**通用功能**

* **比较两个迭代器是否相等（==、!=）。**
* **前置和后置递增运算（++）。**
* **读取元素的解引用运算符（*）。只能读元素，也就是解引用只能出现在赋值运算符的右边。**
* **箭头运算符（->），解引用迭代器，并提取对象的成员。**

下面将具体介绍这几种类型的迭代器其不同之处

### 输入迭代器

功能：

* 通用的四种功能
* **只能利用迭代器进行输入功能**
* **它只能用于单遍扫描算法**

### 输出迭代器

功能：

* 通用的四种功能
* **只能利用迭代器进行输入功能**
* **只能用于单遍扫描算法**

### 前向迭代器

功能：

* 通用的四种功能
* **能利用迭代器进行输入和输出功能**
* **能用于多遍扫描算法**

### 双向迭代器

功能：

* 通用的四种功能
* 能利用迭代器进行输入和输出功能
* 能用于多遍扫描算法
* **前置和后置递减运算（- -）,这意味这它能够双向访问**

### 随机访问迭代器

功能：

* 通用的四种功能
* 能利用迭代器进行输入和输出功能
* 前置和后置递减运算（- -）（意味着它是双向移动的）
* **比较两个迭代器相对位置的关系运算符（<、<=、>、>=）**
* **支持和一个整数值的加减运算（+、+=、-、-=）**
* **两个迭代器上的减法运算符（-），得到两个迭代器的距离**
* **支持下标运算符（iter[n]）** ，访问距离起始迭代器n个距离的迭代器指向的元素
* 能用于多遍扫描算法。 **在支持双向移动的基础上，支持前后位置的比较、随机存取、直接移动n个距离**

总结：
![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/b09c62235663e4db1cc6db5507314e0d.png)

## 常用容器的迭代器

* **vector ——随机访问迭代器**
* **deque——随机访问迭代器**
* **list —— 双向迭代器**
* **set / multiset——双向迭代器**
* **map / multimap——双向迭代器**
* **stack——不支持迭代器**
* **queue——不支持迭代器**

## 实例演练

**双向迭代器**和**随机访问迭代器**是最为常用的，因此下面演示这两种迭代器的用法

### 双向迭代器实例

以list容器为例

```cpp
void text()
{
	list<int> lst;
	for (int i = 0; i < 10; ++i)
	{
		lst.push_back(i);
	}
	list<int>::iterator it;//创建list的迭代器
	cout << "遍历lst并打印: ";
	for (it = lst.begin(); it != lst.end(); ++it)//用 != 比较两个迭代器
	{
		cout << *it << " ";
	}
	//此时it=lst.end(),这个位置是最后一个元素的下一个位置，没有存储数据
	--it;//等价于it--，回到上一个位置
	//it -= 1; //报错,虽然都是-1，但这种方式是随机迭代器才有的功能
	cout << "\nlst的最后一个元素为：" << *it << endl;
}
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/598ab033089bfacb8e6674635e0d4d52.png)

唯一要注意的就是对于迭代器来说， **虽然都是加1或者减1，但- -不等同于- =1，++不等同于+=1** ，他们实现的是不同的功能

### 随机访问迭代器实例

以vector容器为例

```cpp
void text()
{
    vector<int> v;
    for (int i = 0; i < 10; ++i)
    {
        v.push_back(i);
    }
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it) //用 != 比较两个迭代器
    {
        cout << *it << " ";
    }
    cout << endl;
    for (it = v.begin(); it < v.end(); ++it) //用 < 比较两个迭代器
    {
        cout << *it << " ";
    }
    cout << endl;
    it = v.begin();//让迭代器重新指向首个元素的位置
    while (it < v.end())//间隔一个输出
    { 
        cout << *it << " ";
        it += 2; // 用 += 移动迭代器
    }
    cout << endl;

    it = v.begin();
    cout << it[5] << endl; //用[]访问
}
```

![在这里插入图片描述](https://i-blog.csdnimg.cn/blog_migrate/730a0e35bfdc81adeee6238d341225e2.png)
对于vector容器来说，其迭代器有**失效**的可能。
**vector容器有动态扩容的功能，每当容器容量不足时，vector就会进行动态扩容，动态扩容不是在原来的空间后面追加空间，而是在寻找一段新的更大的空间，把原来的元素复制过去。
但是这样一来，容器存储元素的位置就改变了，原来的迭代器还是指向原来的位置，因此每次进行动态扩容后原来的迭代器就会失效。**

## 迭代器的辅助函数

STL 中有用于操作迭代器的三个函数模板，它们是：

* **advance(it, n)；使迭代器 it 向前或向后移动 n 个元素。**
* **distance(it1, it2)；计算两个迭代器之间的距离** ，即迭代器 it1 经过多少次 + + 操作后和迭代器 it2相等。如果调用时 it1 已经指向 it2 的后面，则这个函数会陷入死循环。
* **iter_swap(it1, it2)；用于交换两个迭代器 it1、it2 指向的值。**

要使用上述模板，需要包含头文件

```cpp
#include<algorithm>
```

下面的程序演示了这三个函数模板的用法

```cpp
void text1()
{
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    list<int> lst(a, a + 10);
    list<int>::iterator it1 = lst.begin();

    advance(it1, 2);  //it1向后移动两个元素，指向3
    cout << "当前it1指向的元素:" << *it1 << endl;  //输出3
    advance(it1, -1);  //it1向前移动一个元素，指向2
    cout << "当前it1指向的元素:" << *it1 << endl;  //输出2

    list<int>::iterator it2 = lst.end();
    it2--;  //it2指向最后一个元素的位置，即10的位置
    cout << "it1和it2的距离" << distance(it1, it2) << endl;  //输出8

    cout << "交换前打印：";
    for (it1 = begin(lst); it1 != end(lst); ++it1)
    {
        cout << *it1 << " ";
    }
    it1 = begin(lst);
    iter_swap(it1, it2); //交换 1 和 10
    cout << "\n交换后打印：";
    for (it1 = begin(lst); it1 != end(lst); ++it1)
    {
        cout << *it1 << " ";
    }
    cout << endl;
}



```
