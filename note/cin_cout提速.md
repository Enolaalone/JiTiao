# C++ 输入输出（cin & cout）加速/效率优化

### 一、cin 和 cout 效率低下的原因

   在做算法题的时候，最近遇到很奇怪的问题：命名算法的复杂度不是很高，粗略计算是能通过的，但总是显示超时，检查算法也没问题，当把输入输出换成 `scanf` 和 `printf`后就莫名其妙地能通过了。后面查找文档才发现，原来C++的 `cin` 和 `cout` 虽然使用方便灵活，但是有坑，在输入输出效率上远远小于 `scanf` 和 `printf`，在一些大数据频繁读取输出的时候就显得十分耗时。
   **原因在于：** 相比于 `scanf` 和 `printf`，C++中的 `cin` 和 `cout` 因为要把输入输出的数据通过一个流缓冲区来同步C的 `scanf` 和 `printf`，以至于当 `scanf` 和 `printf`以及 `cin` 和 `cout` 同时使用时不发生混乱。

### 二、解决方案

```c
#include <iostream>
using namespace std;

int main() {
	// 关闭输入输出缓存，使效率提升
	ios::sync_with_stdio(false);
	// 解除cin和cout的默认绑定，来降低IO的负担使效率提升
	cin.tie(NULL); cout.tie(NULL);
	... 
	return 0;
}
```

#### 1. ios::sync_with_stdio(false)；

   通过关闭输入输出缓存，即像 `scanf` 和 `printf` 一样直接进行，可大大提升输入输出效率。其次，在输出时使用 `\n` 来进行换行，避免使用 `endl` 也可提升输出效率。

> **注意：** 当设置为 `false` 时，`cin` 就不能和 `scanf`，`sscanf`, `getchar`, `fgets`等同时使用。

#### 2. cin.tie(NULL)；cout.tie(NULL)；

   解除 `cin` 和 `cout` 运行库层面的对数据传输的默认绑定。由于存在数据传输的默认绑定， `cin` 和 `cout` 在每次操作的时候（也就是调用”<<”或者”>>”）都要刷新（调用flush），这样增加了IO的负担。通过解除绑定，可提高输入输出效率。
