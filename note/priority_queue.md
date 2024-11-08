# C++从入门到起飞之——priority_queue(优先级队列) 全方位剖析！



在C++标准库中，`priority_queue` 是一种非常常用的容器适配器，广泛应用于调度系统、图算法中的最短路径问题等场景。`priority_queue` 提供了一种以堆（heap）为底层结构的优先队列，支持高效的插入和最大（或最小）元素的提取操作。本文将从基础入门到实际应用，深入剖析C++中的`priority_queue`，并附上代码示例，让你轻松掌握它的使用技巧。

### 一、什么是`priority_queue`？

`priority_queue` 是一个存储元素的容器适配器，它能确保队列中的元素按照优先级顺序进行排序。通常来说，默认的`priority_queue`是**最大堆**，即每次弹出时获取的是当前队列中的最大元素。用户也可以通过自定义比较函数将其转化为最小堆等其他形式。

#### 1.1 基本特性

- **底层结构**：堆（Heap）
- 时间复杂度：
  - 插入元素的时间复杂度是O(log n)
  - 获取和移除最大或最小元素的时间复杂度是O(log n)
- **默认行为**：大顶堆（最大元素优先）

#### 1.2 头文件

```cpp
#include <queue>
#include <vector>
```

### 二、`priority_queue`的基本用法

#### 2.1 声明与初始化

- 默认堆顶数是最大的 大顶堆；

要使用`priority_queue`，首先需要包含相应的头文件。声明`priority_queue`时，通常会指定数据类型，还可以提供自定义的比较函数用于改变默认行为。

```cpp
#include <iostream>
#include <queue>
#include <vector>

int main() {
    // 创建一个默认的大顶堆
    std::priority_queue<int> pq;

    // 插入元素
    pq.push(10);
    pq.push(30);
    pq.push(20);
    
    // 打印最大元素
    std::cout << "Top element: " << pq.top() << std::endl; // 输出30
    
    // 移除最大元素
    pq.pop();
    
    // 打印当前最大元素
    std::cout << "New top element: " << pq.top() << std::endl; // 输出20
    
    return 0;
}
```

#### 2.2 最小堆实现

默认情况下，`priority_queue` 是大顶堆，要实现最小堆，可以通过自定义比较器或利用**负数技巧**实现。

##### 方法一：自定义比较器

```cpp
#include <iostream>
#include <queue>
#include <vector>

int main() {
    // 创建一个小顶堆（通过自定义比较器）
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
    
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);

    std::cout << "Top element: " << minHeap.top() << std::endl; // 输出10
    
    minHeap.pop();
    
    std::cout << "New top element: " << minHeap.top() << std::endl; // 输出20
    
    return 0;
}
```

##### 方法二：负数技巧

```cpp
#include <iostream>
#include <queue>
#include <vector>

int main() {
    // 使用负数技巧实现小顶堆
    std::priority_queue<int> minHeap;
    
    minHeap.push(-10);
    minHeap.push(-30);
    minHeap.push(-20);
    
    std::cout << "Top element: " << -minHeap.top() << std::endl; // 输出10
    
    minHeap.pop();
    
    std::cout << "New top element: " << -minHeap.top() << std::endl; // 输出20
    
    return 0;
}
```

#### 2.3 自定义类型的`priority_queue`

`priority_queue`不仅仅局限于存储基本数据类型，也可以存储自定义的类型。要使自定义类型能够被`priority_queue`正确排序，必须定义比较运算符。

~~~cpp
#include <iostream>
#include <queue>
#include <vector>

// 定义一个结构体
struct Person {
    std::string name;
    int age;
    
    // 自定义比较运算符，按照年龄排序
    bool operator<(const Person& other) const {
        return age < other.age; // 按年龄降序排列
    }
};

int main() {
    std::priority_queue<Person> pq;
    
## 二、`priority_queue`的特点

`priority_queue` 是基于堆的容器适配器，具体来说是**最大堆**（默认情况下），其特点如下：
1. **自动排序**：队列中的元素自动按优先级排序，优先级高的元素总是位于队首。
2. **插入和删除效率高**：插入元素和删除优先级最高的元素的时间复杂度为O(log n)。
3. **只允许访问队首元素**：只能访问优先级最高的元素，即`top()`函数提供访问，而不允许随机访问其他元素。

## 三、`priority_queue`的构造和用法

### 1. 创建`priority_queue`
要使用`priority_queue`，你需要包含头文件 `<queue>`，并按照以下方式声明一个优先队列：
```cpp
#include <iostream>
#include <queue>
#include <vector>

int main() {
    // 创建一个空的priority_queue
    std::priority_queue<int> pq;

    // 插入元素
    pq.push(10);
    pq.push(30);
    pq.push(20);

    // 获取队首元素（最大元素）
    std::cout << "队首元素（最大值）: " << pq.top() << std::endl;

    // 移除队首元素
    pq.pop();
    std::cout << "移除后队首元素: " << pq.top() << std::endl;

    return 0;
}
~~~

**运行结果**：

```
队首元素（最大值）: 30
移除后队首元素: 20
```

#### 2. 自定义比较方式——最小堆

默认情况下，`priority_queue` 是**最大堆**，即优先队列中优先级高的元素排在前面。但有时我们需要最小堆，即优先级低的元素排在前面。可以通过以下方式实现最小堆：

```cpp
#include <iostream>
#include <queue>
#include <vector>

int main() {
    // 创建一个最小堆，使用greater<int>作为比较方式
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    // 插入元素
    minHeap.push(10);
    minHeap.push(30);
    minHeap.push(20);

    // 获取队首元素（最小元素）
    std::cout << "队首元素（最小值）: " << minHeap.top() << std::endl;

    return 0;
}
```

**运行结果**：

```
队首元素（最小值）: 10
```

#### 3. 使用自定义数据类型

有时，我们需要处理不仅仅是基本数据类型的`priority_queue`，例如处理结构体或类对象。在这种情况下，可以自定义比较器。

```cpp
#include <iostream>
#include <queue>
#include <vector>

struct Person {
    std::string name;
    int age;

    // 自定义比较器，按年龄从大到小排序
    bool operator<(const Person& other) const {
        return age < other.age;
    }
};

int main() {
    std::priority_queue<Person> pq;

    // 插入元素
    pq.push({"Alice", 30});
    pq.push({"Bob", 25});
    pq.push({"Charlie", 35});

    // 输出按年龄排序的队首元素
    std::cout << "队首元素: " << pq.top().name << ", 年龄: " << pq.top().age << std::endl;

    return 0;
}
```

**运行结果**：

```
队首元素: Charlie, 年龄: 35
```

### 四、`priority_queue`的常用操作

#### 1. 插入元素：`push()`

将一个元素插入优先队列，时间复杂度为O(log n)。

```cpp
pq.push(50);
```

#### 2. 获取队首元素：`top()`

返回优先队列中的最高优先级元素，但不删除该元素。

```cpp
std::cout << pq.top();
```

#### 3. 删除队首元素：`pop()`

移除优先队列中的最高优先级元素，时间复杂度为O(log n)。

```cpp
pq.pop();
```

#### 4. 判断队列是否为空：`empty()`

返回`true`表示队列为空，`false`表示队列中有元素。

```cpp
if(pq.empty()) {
    std::cout << "队列为空" << std::endl;
}
```

#### 5. 获取队列的大小：`size()`

返回优先队列中的元素个数。

```cpp
std::cout << "队列大小: " << pq.size() << std::endl;
```

### 五、`priority_queue`的实际应用

#### 应用场景1：任务调度

在操作系统中，任务调度是常见的应用场景，`priority_queue`可以根据任务的优先级调度执行顺序。

```cpp
#include <iostream>
#include <queue>
#include <string>

struct Task {
    std::string description;
    int priority;

    // 按优先级从大到小排列
    bool operator<(const Task& other) const {
        return priority < other.priority;
    }
};

int main() {
    std::priority_queue<Task> taskQueue;

    taskQueue.push({"完成报告", 3});
    taskQueue.push({"检查邮件", 1});
    taskQueue.push({"备份文件", 2});

    while (!taskQueue.empty()) {
        Task currentTask = taskQueue.top();
        std::cout << "当前任务: " << currentTask.description << "，优先级: " << currentTask.priority << std::endl;
        taskQueue.pop();
    }

    return 0;
}
```

**运行结果**：

```
当前任务: 完成报告，优先级: 3
当前任务: 备份文件，优先级: 2
当前任务: 检查邮件，优先级: 1
```

#### 应用场景2：K个元素的排序

如果我们想对前K个最大的元素进行排序，可以使用`priority_queue` 实现。以下是一个找到数组中前K个最大元素的示例：

```cpp
#include <iostream>
#include <queue>
#include <vector>

std::vector<int> findTopK(std::vector<int>& nums, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    std::vector<int> result;
    while (!minHeap.empty()) {
        result.push_back(minHeap.top());
        minHeap.pop();
    }
    return result;
}

int main() {
    std::vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    std::vector<int> topK = findTopK(nums, k);

    std::cout << "数组中前" << k << "个最大元素是: ";
    for (int num : topK) {
        std::cout << num << " ";
    }

    return 0;
}
```

**运行结果**：

```
数组中前2个最大元素是: 5 6
```

### 六、总结

`priority_queue` 是C++中非常有用的数据结构，尤其在需要高效的优先级处理时。通过本文的讲解和代码示例，相信你已经掌握了`priority_queue` 的基本用法和实际应用。