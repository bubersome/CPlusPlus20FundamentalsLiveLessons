## 第5章功能

![图片](Images/ch05.jpg)

目标

在本章中，您将：

■从函数模块化构建程序。

■使用常见的数学库函数，了解C++20、C++17和C++11中添加的数学函数和常量。

■用函数原型声明函数。

■查看许多关键的C++标准库标题。

■使用随机数来实现游戏应用程序。

■在范围`enum`中声明常量，并通过C++20`using enum`声明使用没有类型名称的常量。

■使用数字分隔符使长数字更易读。

■了解标识符的范围。

■使用内联函数、引用和默认参数。

■定义重载函数，根据参数的数量和类型执行不同的任务。

■定义可以生成重载函数家族的函数模板。

■编写和使用递归函数。

■使用C++17和C++20 `[[nodiscard]]`属性来指示不应忽略函数的返回值。

■ Zajnropc vrq lnfylun-lhqtomh uyqmmhzg tupb j dvql psrpu iw dmwwqnddwjqz。

大纲

[**5.1** 导言](ch05.xhtml#ch05lev1sec1)

[**5.2** C++中的程序组件](ch05.xhtml#ch05lev1sec2)

[**5.3** 数学库函数](ch05.xhtml#ch05lev1sec3)

[**5.4** 函数定义和功能原型](ch05.xhtml#ch05lev1sec4)

[**5.5** 函数参数的评估顺序](ch05.xhtml#ch05lev1sec5)

[**5.6** 功能-原型和参数-胁迫注释](ch05.xhtml#ch05lev1sec6)

[5.6.1 函数签名和功能原型](ch05.xhtml#ch05lev2sec1)

[5.6.2 争论胁迫](ch05.xhtml#ch05lev2sec2)

[5.6.3 论点-促进规则和隐性转换](ch05.xhtml#ch05lev2sec3)

[**5.7** C++标准库标题](ch05.xhtml#ch05lev1sec7)

[**5.8**案例研究：随机数生成](ch05.xhtml#ch05lev1sec8)

[5.8.1 滚动六面模具](ch05.xhtml#ch05lev2sec4)

[5.8.2 滚动六面模具60,000,000次](ch05.xhtml#ch05lev2sec5)

[5.8.3 将随机数生成器随机化`srand`](ch05.xhtml#ch05lev2sec6)

[5.8.4 使用当前时间播种随机数生成器](ch05.xhtml#ch05lev2sec7)

[5.8.5 缩放和移动随机数](ch05.xhtml#ch05lev2sec8)

[**5.9**案例研究：机会游戏；引入范围`enum`](ch05.xhtml#ch05lev1sec9)

[**5.10** C++11更安全的非确定性随机数](ch05.xhtml#ch05lev1sec10)

[**5.11** 范围规则](ch05.xhtml#ch05lev1sec11)

[**5.12** 内联函数](ch05.xhtml#ch05lev1sec12)

[**5.13** 参考和参考参数](ch05.xhtml#ch05lev1sec13)

[**5.14** 默认参数](ch05.xhtml#ch05lev1sec14)

[**5.15** 统一范围解析操作员](ch05.xhtml#ch05lev1sec15)

[**5.16** 功能超载](ch05.xhtml#ch05lev1sec16)

[**5.17** 功能模板](ch05.xhtml#ch05lev1sec17)

[**5.18** 递归](ch05.xhtml#ch05lev1sec18)

[**5.19** 使用递归的示例：斐波那契系列](ch05.xhtml#ch05lev1sec19)

[**5.20**递归与迭代](ch05.xhtml#ch05lev1sec20)

[**5.21** C++17和C++20：`[[nodiscard\]]`属性](ch05.xhtml#ch05lev1sec21)

[**5.22** Lnfylun Lhqtomh Wjtz Qarcv：Qjwazkrplm xzz Xndmwwqhlz](ch05.xhtml#ch05lev1sec22)

[**5.23**总结](ch05.xhtml#ch05lev1sec23)

### 5.1 导言

在本章中，我们介绍了自定义函数。我们概述了C++标准库的部分数学函数，并介绍了C++20、C++17和C++11中添加的新函数和常量。我们介绍了函数原型，并讨论了编译器如何在必要时使用它们将函数调用中的参数类型转换为函数参数列表中指定的类型。我们还概述了C++标准库的标题。

接下来，我们将演示随机数生成的模拟技术。我们开发了一个流行的赌场骰子游戏版本，该版本使用我们迄今为止展示的大部分C++功能。在游戏中，我们展示了如何在范围`enum`中声明常量，并讨论了C++20`using enum`声明的新方法，在没有类型名称的情况下直接访问范围`enum`常量。

然后，我们介绍了C++的范围规则，该规则决定了在程序中可以引用标识符的位置。我们讨论了有助于提高程序性能的功能——可以消除函数调用开销的内联函数和可用于高效地将大型数据项传递给函数的引用参数。

您开发的许多应用程序将具有多个同名功能。这种技术称为函数重载，用于实现对不同类型或不同数量参数的参数执行类似任务的函数。我们考虑函数模板——一种简洁定义重载函数家族的机制。我们引入了递归函数，这些函数直接或间接通过另一个函数调用自己。

我们提出了C++17的`[[nodiscard]]`属性，用于指示不应忽略函数的返回值。这有助于编译器在您的程序中未使用返回值时警告您。我们还讨论了C++20的`[[nodiscard]]`增强功能，该增强功能允许您指定不应忽略返回值的原因。Cujuumt，ul znkfehdf jsy lagqynb-ovrbozi mljapvao thqt w wjtz qarcv aj wazkrvdqxbu。

##### 适用于O’Reilly在线学习订阅者的“粗切”电子书

您正在查看*程序员*早期访问的*C++20*“粗切”。**我们仔细准备了此内容，但尚未经过审核或复制编辑，可能会发生变化。**在完成每一章时，我们将在这里发布。请将任何更正、评论、问题和改进建议发送至`paul@deitel.com`，我会立即回复。经常查看此处以获取更新。

##### O’Reilly在线学习订阅者的“偷看”视频

作为O’Reilly在线学习订阅者，您还可以在以下网址访问我们新的*C++20 Fundamentals LiveLessons*视频：

```
https://learning.oreilly.com/videos/c-20-fundamentals-parts/9780136875185
```

当我们完成每个粗剪的电子书章节时，合著者Paul Deitel立即记录了每个视频课程。几天后，课程将在O’Reilly Online Learning上线。同样，请经常查看此处是否有更新。

### 5.2 C++中的程序组件

您通常通过组合来编写C++程序

•C++标准库中可用的预打包函数和类，

•大量开源和专有第三方库中可用的函数和类，以及

•您和您的同事编写的新函数和类。

C++标准库为数学、字符串处理、正则表达式、输入/输出、文件处理、日期、时间、容器（数据收集）、用于操作容器的算法、内存管理、并发编程、异步编程和许多其他操作提供了丰富的函数和类集合。

函数和类允许您将程序的任务分成自包含的单元。到目前为止，您在每个程序中使用了C++标准库功能、开源库功能和`main`功能的组合。在本章中，您将开始定义自定义函数，从第10[章开始](ch10.xhtml#ch10)，您将定义自定义类。

使用函数和类来创建程序组件有几个动机：

•软件重用。例如，在早期的程序中，我们不必定义如何创建和操作`string`或如何从键盘读取一行文本——C++分别通过`<string>`标题的`string`类和`getline`函数提供这些功能。

•避免重复代码。

•将程序划分为有意义的函数和类使程序更容易测试、调试和维护。

为了提高可重用性，每个函数都应该执行一个定义明确的任务，并且函数的名称应该有效地表达该任务。在处理面向对象编程时，我们将更多地谈论软件可重用性。C++20引入了另一个名为模块的程序组件，我们将在后面的章节中讨论。

### 5.3 数学库函数

在我们的对象自然案例研究部分，您创建了有趣类的对象，然后调用其成员函数来执行有用的任务。像`main`这样的非成员函数称为**全局函数**。

`<cmath>`标头为常见的数学计算提供了许多全局函数。例如，

```
平方米（900.0）
```

计算`900.0`的平方根，并返回结果`30.0`。函数`sqrt`接受一个`double`参数并返回一个`double`结果。在调用函数`sqrt`之前，无需创建任何对象。`<cmath>`标头中的所有函数都是`std`命名空间中的全局函数。每个都只需指定函数名后跟包含参数的括号即可调用。

函数参数可以是常量、变量或更复杂的表达式。下表总结了一些流行的数学库函数，其中变量`x`和`y`类型为`double`。

![图片](Images/f0147-01.jpg)

##### C++11附加数学函数

11 17 C++11在`<cmath>`标题中添加了数十个新的数学函数。有些是全新的，有些是现有函数的附加版本，用于`float`或`long double`类型的参数，而不是`double`。例如，双参数`**hypot**`函数计算直角三角形的斜边。C++17添加了一个三参数版本的`hypot`来计算三维空间中的斜调。有关`<cmath>`标头功能的完整列表，请参阅

```
https://zh.cppreference.com/w/cpp/numeric/math
```

或C++标准文档第26.8.1节

```
https://open-std.org/JTC1/SC22/WG21/docs/papers/2020/n4861.pdf
```

##### 20 C++20—New Mathematical Constants and the `<numbers>` Header

虽然C++一直具有共同的数学函数，但C++标准没有定义常见的数学常量。一些C++实现通过**预处理器宏**定义了`M_PI`（用于*p*）和`M_E`（for *e*）以及其他数学常量。1当预处理器在这些实现中执行时，它会用相应的`double`浮点值替换这些宏名称。不幸的是，并非每个C++实现中都存在这些预处理器宏。C++20的新`**<numbers>**`**头**[2](ch01.xhtml#ch0fn2)标准化了许多科学和工程应用中常用的以下数学常量：

[1。](ch01.xhtml#rch0fn1)我们在[附录E](app05.xhtml#app05)中讨论了预处理器和宏。

`http://wg21.link/p0631r8`。

![图片](Images/f0147-02.jpg)

##### 17 C++17 数学特殊函数

对于工程和科学界以及其他数学领域，C++17在`<cmath>`标题中添加了数十个**数学特殊函数**[3](ch01.xhtml#ch0fn3)。您可以在以下网址看到每个的完整列表和简要示例：

`http://wg21.link/p0226r1`。

```
https://zh.cppreference.com/w/cpp/numeric/special_functions
```

下表中的每个数学特殊函数都有`float`、`double`和`long double`参数的版本：

![图片](Images/f0148-01.jpg)

### 5.4 函数定义和功能原型

在本节中，我们创建一个名为`maximum`的用户定义函数，该函数返回其三个`int`参数中最大的一个。当应用程序在[图](ch05.xhtml#fig5_1)中[时。5.1](ch05.xhtml#fig5_1)执行，`main`函数首先从用户那里读取三个整数。然后，输出语句（第15-16行）调用`maximum`，这是第20-34行中定义的。在第33行中，函数`maximum`返回到`maximum`调用点的最大值（第16行），这是一个显示结果的输出语句。示例输出显示，无论它是第一个、第二个还是第三个参数，`maximum`都决定了最大值。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig01)

```
1 // 图05_01.cpp
2 // 带有函数原型的最大函数。
3 #include <iostream>4 #include <iomanip>5使用命名空间std；6
7 int maximum(int x, int y, int z); // 函数原型
8
9 int main() {10 cout << "输入三个整数值: ";11 int int1，int2，int3；12     cin >> int1 >> int2 >> int3;
13
14 // 调用最大值
15 cout << "最大整数值为: "
16        << maximum(int1, int2, int3) << endl;
17  }
18
19 // 返回三个整数中最大的一个
20 int maximum(int x, int y, int z) {21 int maximumValue{x}; // 假设x是最大的开始
22
23 // 确定y是否大于最大值
24 if (y > maximumValue) {25 maximumValue = y; // 使 y成为新的最大值
26     }
27
28 // 确定 z 大于最大值
29 if (z > maximumValue) {30 maximumValue = z; // 使 z成为新的 maximumValue
31     }
32
33返回最大值；34  }
Enter three integer grades: 86 67 75
The maximum integer value is: 86
Enter three integer grades: 67 86 75
The maximum integer value is: 86
Enter three integer grades: 67 75 86
The maximum integer value is: 86
```

**图。5.1** 带有功能原型`maximum`功能。

##### 功能`maximum`

通常，函数定义的第一行指定其返回类型、函数名称和**参数列表**，这些列表包含在所需的括号中。参数列表指定了函数执行任务所需的其他信息。函数的第一行也称为函数的**标题**。参数列表可能包含零个或多个**参数**，每个参数都声明为类型和名称。使用逗号分隔的参数列表指定两个或多个参数。函数`maximum`的标头表示该函数有三个`int`参数，分别为`x`、`y`和`z`。当您调用函数时，每个参数都会从函数调用中接收相应的参数值。

函数`maximum`首先假设参数`x`具有最大的值，因此第21行将本地变量`maximumValue`初始化为参数`x`的值。当然，参数`y`或`z`可能包含实际的最大值，因此每个值都必须与`maximum-Value`进行比较。第24-26行确定`y`是否大于`maximumValue`，如果大于，请将`y`分配给`maximumValue`。第29-31行确定`z`是否大于`maximumValue`，如果是，请将`z`分配给`maximumValue`。此时，最大值在`maximumValue`中，因此第33行将该值返回给调用者。

##### 功能原型`maximum`

您必须先定义函数，或者声明它，如第7行所示：

[点击此处查看代码图像](Images/ch05_images.xhtml#f0111-01)

```
int maximum(int x, int y, int z); // 函数原型
```

该**函数原型**描述了`maximum`函数的接口，而不显示其实现。函数原型告诉编译器函数的名称、返回类型及其参数类型。第7行表示`maximum`返回一个`int`，并且需要三个`int`参数来执行其任务。函数原型中的类型应与相应函数定义标题（第20行）中的类型相同。函数原型以所需的分号结束。我们将看到，函数原型参数中的名称不需要与函数定义中的名称匹配。

##### 函数原型中的参数名称

函数原型中的参数名称是可选的（编译器忽略它们），但建议您将这些名称用于文档目的。

##### 编译器对`maximum`的函数原型做什么

编译程序时，编译器使用原型

• 确保`maximum`的第一行（第20行）与其原型（第7行）匹配。

•检查对`maximum`的调用（第16行）是否包含正确的参数数量和类型，以及参数的类型是否正确顺序（在这种情况下，所有参数都属于同一类型）。

• Ensure that the value returned by the function can be used correctly in the expression that called the function—for example, a function that does not return a value (declared with the `**void**` **return type**) cannot be called on the right side of an assignment.

•确保每个参数都与相应参数的类型一致——例如，`double`类型的参数可以接收7.35、22或-0.03456等值，但不能接收像`"hello"`这样的字符串。如果传递给函数的参数与函数原型中指定的类型不匹配，编译器会尝试将参数转换为这些类型。[第5.6节](ch05.xhtml#ch05lev1sec6)讨论了此转换过程，以及如果不允许转换会发生什么。

如果函数原型、标头和调用在参数和参数的数量、类型和顺序以及返回类型中并不完全一致，则会发生编译错误。对于调用，编译器检查函数的返回值（如果有的话）是否可以在调用函数的地方使用。

##### 将控件从函数返回给调用方

当程序调用函数时，该函数执行其任务，然后将控件（可能还有值）返回到调用函数的位置。在不返回结果的函数（即它具有`void`返回类型）中，当程序到达函数结束的右大括号时，控件返回。函数可以通过执行显式将控件（没有结果）返回给调用方

```
返回；
```

功能主体中的任意位置。

### 5.5 函数参数的评估顺序

函数原型、函数头和函数调用中将多个参数指定为逗号分隔的列表。[图](ch05.xhtml#fig5_1)16行中的逗号[。5.1 ](ch05.xhtml#fig5_1)单独的函数`maximum`参数不是逗号运算符。逗号运算符保证其操作数从左到右进行评估。然而，函数参数的评估顺序没有由C++标准指定。因此，不同的编译器可以按不同的顺序计算函数参数。

有时，当函数的参数是表达式时，例如调用其他函数的参数，编译器评估参数的顺序可能会影响一个或多个参数的值。如果编译器之间的评估顺序发生变化，传递给函数的参数值可能会发生变化，从而导致微妙的逻辑错误。

如果您对函数参数的计算顺序以及该顺序是否会影响传递给函数的值有疑问，请在调用前将参数分配给变量，然后将这些变量作为参数传递给函数。

### 5.6 功能-原型和参数-胁迫注释

除非在使用之前定义了函数，否则需要函数原型。当您使用`sqrt`等标准库函数时，您无法访问该函数的定义，因此在调用函数之前无法在代码中定义它。相反，您必须包含其相应的标头（在本例中为`<cmath>`），其中包含函数的原型。

如果一个函数是在调用之前定义的，那么它的定义也是函数的原型，因此不需要单独的原型。如果函数在定义之前被调用，并且该函数没有函数原型，则会发生编译错误。

始终提供函数原型，即使在使用函数之前定义函数时可以省略它们。提供原型可以避免将代码绑定到函数定义的顺序（随着程序的发展，函数可以很容易地更改）。

#### 5.6.1 函数签名和功能原型

函数的名称及其参数类型一起被称为**函数签名**或简称**签名**。函数的返回类型不是函数签名的一部分。函数的范围是程序中已知和可访问该函数的区域。同一范围内的函数必须具有唯一的签名。我们将[在第5.11节](ch05.xhtml#ch05lev1sec11)中详细介绍范围。

在[图中。5.1](ch05.xhtml#fig5_1)，如果第7行的功能原型已经写好

```
void maximum（int x、int y、int z）；
```

编译器将报告错误，因为函数原型中的`void`返回类型与函数头中的`int`返回类型不同。同样，这样的原型将导致声明

```
cout << maximum(6, 7, 0);
```

生成编译错误，因为该语句取决于返回要显示的值`maximum`。函数原型可帮助您在编译时找到许多类型的错误，这总是比在运行时找到它们更好。

#### 5.6.2 争论胁迫

函数原型的一个重要特征是**参数强制**，即将参数强制到参数声明指定的适当类型。例如，程序可以使用整数参数调用函数，即使函数原型指定了`double`参数——该函数仍然可以正常工作，前提是这不是缩小转换（[在第3.8.3节](ch03.xhtml#ch03lev2sec3)中讨论）。如果函数调用中的参数无法隐式转换为函数原型中指定的预期类型，则会发生编译错误。

#### 5.6.3 辩论-促进规则和隐性转换[4](ch02.xhtml#ch0fn4)

[4。](ch02.xhtml#rch0fn4)促销和转换是C++标准文档第7.3和7.4节中讨论的复杂主题。“工作草案，编程语言C的标准。”2020年5月11日访问。`http://open-std.org/JTC1/SC22/WG21/docs/papers/2020/n4861.pdf`。

11 有时，编译器可以在调用函数之前将不完全对应于函数原型中的参数类型的参数值转换为适当的类型。这些转换按照C++的**推广规则**进行，这些规则指示基本类型之间允许的隐式转换。一个`int`可以转换为双`double`。`double`也可以转换为`int`，但这种缩小转换截断了`double`的小数部分——从[第3.8.3节](ch03.xhtml#ch03lev2sec3)中回忆起，C++11列表初始化器不允许缩小转换。请记住，`double`变量可以容纳比`int`变量更大的数量，因此在缩小转换中的数据丢失可能相当可观。

当将大整数类型转换为小整数类型（例如，从`long`到`short`）、签名为无符号或未签名转换为有符号时，也可以修改值。`**unsigned**`整数类型的变量可以表示从0到大约两倍于相应有符号整数类型的正范围。`unsigned`类型主要用于位操作（第22章）。它们不应该用来确保一个值是非负数。

[5。](ch03.xhtml#rch0fn5)C++核心指南。2020年5月11日访问。`https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Ri-expects`。

推广规则也适用于包含两种或两种以上数据类型（即**混合类型表达式）**值**的**表达式。混合类型表达式中的每个值的类型都提升为表达式的“最高”类型（实际上，创建并使用每个值的临时副本——原始值保持不变）。下表按“最高类型”到“最低类型”的顺序列出了算术数据类型。

![图片](Images/f0114-01.jpg)

##### 转换可能导致错误的值

将值转换为较低的基本类型可能会导致转换范围缩小导致错误。因此，只有通过显式将值分配给较低类型的变量（在这种情况下，一些编译器会发出警告）或使用转换运算符，才能将值转换为较低的基本类型。函数参数值转换为函数原型中的参数类型，就像它们直接分配给这些类型的变量一样。如果使用`double`参数调用具有`int`参数的`square`函数，则参数将转换为`int`（较低类型，因此转换范围缩小），并且`square`可能会返回错误的值。例如，`square(4.5)`将返回16，而不是`20.25`。一些编译器警告您转换范围缩小。例如，Microsoft Visual C++发出警告，

```
“论点”：从“double”转换为“int”，可能丢失数据
```

##### 使用指南支持库缩小转换范围

如果您必须执行显式缩小转换，C++核心指南建议使用**指南支持库（GSL）**中的`**narrow_cast**`**运算符**[6](ch03.xhtml#ch0fn6)——我们将用[图。5.5](ch05.xhtml#fig5_5)和[5.6](ch05.xhtml#fig5_6)。这个库有几个实现。微软提供了一个开源版本，该版本已在许多平台/编译器组合上进行了测试，包括我们的三个首选编译器和平台。您可以从以下网站下载他们的GSL实现：

[6。](ch03.xhtml#rch0fn6)C++核心指南。2020年5月10日访问。`http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Res-narrowing`。

```
https://github.com/Microsoft/GSL
```

为了您的方便，我们在子文件夹`libraries/GSL`中向GSL库提供了这本书的代码示例。

The GSL is a header-only library, so you can use it in your programs simply by including the header `"gsl/gsl"`. You must point your compiler to the `GSL` folder’s `include` sub-folder, so the compiler knows where to find the include file, as you did when you used class `BigNumber` at the end of [Section 3.12](ch03.xhtml#ch03lev1sec12). The following statement uses the `narrow_cast` operator (from namespace `gsl`) to convert the double value `7.5` to the `int` value `7`:

```
gsl::narrow_cast<int>(7.5)
```

与`static_cast`等其他命名的转换运算符一样，括号中的值转换为角括号`<>`中的类型。

### 5.7 C++标准库标题

C++标准库分为许多部分，每个部分都有自己的标题。标题包含构成库每个部分的相关函数的函数原型。标题还包含各种类类型和函数的定义，以及这些函数所需的常量。标题“指导”编译器如何与库和用户编写的组件接口。

下表列出了一些常见的C++标准库标题，其中许多将在本书后面讨论。[附录E](app05.xhtml#app05)，预处理器详细讨论了多次使用的“宏”一词。有关96 C++20标准库标题的完整列表，请访问

```
https://zh.cppreference.com/w/cpp/header
```

在该页面上，您将看到大约三十多个被标记为已弃用或删除的附加标题。已弃用的标头是您不应再使用的标头，已删除的标头不再包含在C++标准库中。

![图片](Images/f0154-01.jpg)

![图片](Images/f0154-01a.jpg)

![图片](Images/f0154-01b.jpg)

![图片](Images/f0154-01c.jpg)

### 5.8案例研究：随机数生成

我们现在将一个简短且有希望有趣的转入一个流行的编程应用程序，即模拟和游戏玩法。在本节和下一节中，我们开发了一个包含多种功能的游戏程序。

##### `rand`函数

使用C++标准库函数`**rand**`，可以将偶然元素引入计算机应用程序。请考虑以下陈述：

```
i = rand();
```

函数`rand`在0和`RAND_MAX`（`<cstdlib>`标头中定义的符号常量）之间生成整数。只需显示常量，您就可以确定系统`RAND_MAX`的值。如果`rand`确实随机生成整数，那么每次调用`rand`时，0和`RAND_MAX`之间的每个数字都有相同的选择机会（或概率）。

函数`rand`直接生成的值范围通常与特定应用程序所需的值不同。例如，模拟掷硬币的程序可能只需要0用于“头部”，1用于“尾巴”。模拟滚动六面模具的程序需要1到6范围内的随机整数。一个随机预测在电子游戏中飞越地平线的下一种宇宙飞船（四种可能性）的程序可能需要1到4范围内的随机整数。

#### 5.8.1 滚动六面模具

为了演示`rand`，[图。5.2](ch05.xhtml#fig5_2)模拟六面模具的十卷，并显示每卷的值。`rand`函数的函数原型在`<cstdlib>`中。要在0到5范围内生成整数，我们使用带有`rand`的剩余运算符（`%`），如下所示：

```
兰特（）%6
```

这叫做**缩放**。数字6被称为**缩放因子**。然后，我们通过在之前的结果中添加1来**转移**生成的数字范围。[图5.2](ch05.xhtml#fig5_2)确认结果在1到6之间。如果您多次执行此程序，您将看到它每次都会产生相同的“随机”值。我们将在[图5.4](ch05.xhtml#fig5_4)中展示如何解决这个问题。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig02)

```
1 // 图05_02.cpp
2 // 由 1 + rand() % 6 生成的移动、缩放整数。
3 #include <iostream>4 #include <cstdlib> // 包含兰特的函数原型
5使用命名空间std；6
7 int main() {8 for (int counter{1}; counter <= 10; ++counter) {9 // 从1到6选择随机数并输出
10 cout << (1 + rand() % 6) << " ";11     }
12
13     cout << endl;
14  }
6 6 5 5 6 5 1 1 5 3
```

**图。5.2** 由`1 + rand() % 6`生成的移位缩放整数。

#### 5.8.2 滚动六面模具60,000,000次

为了证明`rand`产生的值发生的可能性大致相同，[图5.3](ch05.xhtml#fig5_3)模拟60,000,000卷模具。[7 ](ch03.xhtml#ch0fn7)1至6范围内的每个整数应出现约10,000,000次（六分之一卷）。程序的输出证实了这一点。`switch`初始化器（第19行）中`face`变量的定义前面是`**const**`。对于任何初始化后不应更改的变量来说，这是一个良好做法——如果您不小心修改变量，编译器可以报告错误。

[7。](ch03.xhtml#rch0fn7)当合著者Harvey Deitel于1976年首次在他的班级中实现这个例子时，他只表演了600个模具卷——6000个模具卷会花太长时间。在我们的系统上，这个程序大约花了五秒钟才完成6000万个模具卷！600,000,000个模具卷大约需要一分钟。模具滚动依次发生。在我们的并发章节中，我们将探索如何并行使用此应用程序，以利用当今的多核计算机。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig03)

```
1 // 图05_03.cpp
2 // 滚动六面模具60,000,000次。
3 #include <iostream>4 #include <iomanip>5 #include <cstdlib> // 包含兰特的函数原型
6使用命名空间std；7
8 int main() {9 int frequency1{0}; // 滚动 1s 计数
10 int frequency2{0}; // 滚动 2s 的计数
11 int frequency3{0}; // 滚动 3s 计数
12 int frequency4{0}; // 滚动4s的计数
13 int frequency5{0}; // 滚动5s的计数
14 int frequency6{0}; // 滚动6s的计数
15
16 // 总结6000万卷模具的结果
17 for (int roll{1}; roll <= 60'000'000; ++roll) {18 // 确定滚动值 1-6 和增量适当的计数器
19开关（const int face{1 + rand() % 6}; face）{20个案例1：21 ++frequency1; // 增加 1s 计数器
22次休息；23个案例2：24++频率2; // 增加2s计数器
25次休息；26个案例3：27++频率3; // 增加3s计数器
28休息；29个案例4：30++频率4; // 增加4s计数器
31休息；32个案例5：33++频率5; // 增加5s计数器
34次休息；35案例6：36++频率6; // 增加6s计数器
37休息；38 默认值：// 无效值
39 出局 <<“程序永远不应该来到这里！”；40        }
41     }
42
43 cout << "Face" << setw(13) << "Frequency" << endl; // 输出标头
44 cout << " 1" << setw(13) << frequency145 << "\n 2" << setw(13) << frequency246 << "\n 3" << setw(13) << frequency347 << "\n 4" << setw(13) << frequency448 << "\n 5" << setw(13) << frequency549 << "\n 6" << setw(13) << frequency6 << endl;50  }
Face   Frequency
   1     9999294
   2    10002929
   3     9995360
   4    10000409
   5    10005206
   6     9996802
```

**图。5.3** 滚动六面模具60,000,000次。

正如输出所示，我们可以通过缩放和移动`rand`产生的值来模拟滚动六面模具。`switch`中的默认大小写（第38-39行）永远不应该执行，因为交换机的控制表达式（`face`）的值总是在1-6范围内。在我们研究了[第6章](ch06.xhtml#ch06)中的数组后，我们展示了如何在[图](ch05.xhtml#fig5_3)中替换整个开关[。5.3 ](ch05.xhtml#fig5_3)优雅地使用单行语句。许多程序员在每个`switch`语句中都提供`default`情况，以捕获错误，即使他们确信他们的程序没有错误。

##### 14个数字文字的C++14位分隔符

在C++14之前，您将在程序中将整数值60,000,000表示为`60000000`。键入多位数字文字可能容易出错。为了使数字文字更具可读性并帮助减少错误，您可以在数字组之间使用C++14**的数字分隔符**`**'**`（单引号字符）——`60'000'000`（第17行）表示整数值60,000,000。您可能想知道为什么使用单引号字符而不是逗号。如果我们第17行使用`60,000,000`C++将逗号视为逗号运算符，`60,000,000`的值将是最右边的表达式（`000`）。循环继续条件将立即为false——这是此程序中的逻辑错误。

#### 5.8.3 将随机数生成器随机化`srand`

执行[图](ch05.xhtml#fig5_2)的程序[。5.2](ch05.xhtml#fig5_2)再次产生

[点击此处查看代码图像](Images/ch05_images.xhtml#f0121-01)

```
6 6 5 5 6 5 1 1 5 3
```

这是[图](ch05.xhtml#fig5_2)中显示的相同值序列[。5.2](ch05.xhtml#fig5_2)。这些怎么可能是随机数？

函数`rand`实际上生成**伪随机数**。反复调用`rand`会产生一系列看似随机的数字。然而，每次程序执行时，该序列都会重复。在调试模拟程序时，随机数的可重复性对于证明对程序的校正正常工作至关重要。一旦程序被彻底调试，就可以为每次执行生成不同的随机数序列。这被称为**随机化**，可以通过标题`<cstdlib>``**srand**`C++标准库函数来实现。函数`srand`接受`unsigned`整数参数，并**种子**`rand`函数，为每次执行生成不同的随机数序列。

##### 使用`srand`

[图5.4](ch05.xhtml#fig5_4)显示了函数`srand`。该程序每次执行时都会产生不同的随机数序列，前提是用户输入不同的种子。我们在第一个和第三个样本输出中使用了相同的种子，因此每个输出中都显示相同的10个数字系列。

![图片](Images/common02.jpg) 安全性 为了安全起見，请确保您的程序每次执行时以不同的方式（且只有一次）播种随机数生成器；否则，攻击者将轻松确定将产生的伪随机数序列。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig04)

```
1 // 图05_04.cpp
2 // 随机化模滚程序。
3 #include <iostream>4 #include <iomanip>5 #include <cstdlib> // 包含函数srand和rand的原型
6使用命名空间std；7
8 int main() {9 int seed{0}; // 存储用户输入的种子
10
11 cout << "输入种子: ";12     cin >> seed;
13 srand(seed); // 种子随机数生成器
14
15 // 循环 10 次
16 for (int counter{1}; counter <= 10; ++counter) {17 // 从 1 到 6 随机选择并输出
18 cout << (1 + rand() % 6) << " ";19     }
20
21     cout << endl;
22  }
Enter seed: 67
6 1 4 6 2 1 6 1 6 4
Enter seed: 432
4 6 3 1 6 3 1 5 4 2
Enter seed: 67
6 1 4 6 2 1 6 1 6 4
```

**图。5.4** 随机化模滚程序。

#### 5.8.4 使用当前时间播种随机数生成器

要随机化，而不必每次都输入种子，我们可以使用类似

[点击此处查看代码图像](Images/ch05_images.xhtml#f0122-01)

```
srand(gsl::narrow_cast<unsigned int>(time(0)));
```

这会导致计算机读取其时钟以获得种子的值。函数`**time**`（前面语句中写的参数为`0`）通常将当前时间作为自1970年1月1日午夜格林威治标准时间（GMT）以来的秒数返回。此值（类型为`time_t`）转换为`unsigned int`，并用作随机数生成器的种子。上一个语句中的`narrow_cast`（来自指南支持库）消除了如果您将`time_t`值传递给期望`unsigned int`的函数时发出的编译器警告。[8](ch03.xhtml#ch0fn8)`time`的函数原型在`<ctime>`中。

[8。](ch03.xhtml#rch0fn8)我们的代码最初使用`static_cast`而不是`narrow_cast`。Microsoft Visual C++中的C++核心指南检查器报告称，应使用`narrow_cast`运算符进行缩小转换。

#### 5.8.5 缩放和移动随机数

之前，我们用陈述模拟滚动六面模具

```
int face{1 + rand() % 6};
```

which always assigns an integer (at random) to variable `face` in the range 1 ≤ `face` ≤ 6. The width of this range (i.e., the number of consecutive integers in the range) is 6, and the starting number in the range is 1. Referring to the preceding statement, we see that the width of the range is determined by the number used to scale `rand` with the remainder operator (i.e., 6), and the starting number of the range is equal to the number (i.e., 1) that is added to the expression `rand % 6`. We can generalize this result as

```
int` *variableName*`{`*shiftingValue* `+ rand() %` *scalingFactor*`};
```

其中*shiftingValue*等于所需连续整数范围内的第一个数字，*缩放因子*等于所需连续整数范围的宽度。

### 5.9案例研究：机会游戏；引入范围`enum`

最受欢迎的机会游戏之一是被称为“骰子”的骰子游戏，它在世界各地的赌场和后巷里玩。游戏规则很简单：

*一个玩家掷两个骰子。每个模具都有六张脸。这些面孔包含1、2、3、4、5和6个斑点。骰子休息后，计算两个向上面上的斑点之和。如果第一轮的总和是7或11，玩家获胜。如果第一轮的总和是2、3或12（称为“骰子”），玩家将输（即“房子”获胜）。如果第一轮的总和是4、5、6、8、9或10，那么这个总和将成为玩家的“点”。要获胜，你必须继续掷骰子，直到你“表达你的观点”。球员在得分前滚动7分输了。*

在规则中，请注意，玩家必须在第一卷和所有后续滚动上掷两个骰子。我们将定义一个`rollDice`函数来滚动骰子并计算和显示其和。该函数将被定义一次，但可以多次调用——一次用于游戏的第一卷，如果玩家在第一卷中没有赢或输，则可能多次调用。以下是几个示例执行的输出，显示：

•通过滚动7在第一轮中获胜，

•在第一轮中输掉12，

•在滚动7之前通过“表明观点”在随后的滚动中获胜，以及

•在“说到点子”之前滚动7，在随后的滚动中输掉。

[点击此处查看代码图像](Images/ch05_images.xhtml#f0123-01)

```
玩家滚动2 + 5 = 7玩家获胜
玩家滚动6 + 6 = 12球员输了
玩家滚动3 + 3 = 6点是6玩家滚动5 + 3 = 8玩家滚动4 + 5 = 9玩家滚动2 + 1 = 3玩家滚动1 + 5 = 6玩家获胜
```

[点击此处查看代码图像](Images/ch05_images.xhtml#f0124-01)

```
玩家滚动1 + 3 = 4点是4玩家滚动4 + 6 = 10玩家滚动2 + 4 = 6玩家滚动6 + 4 = 10玩家滚动2 + 3 = 5玩家滚动2 + 4 = 6玩家滚动1 + 1 = 2玩家滚动4 + 4 = 8玩家滚动4 + 3 = 7球员输了
```

##### 实施游戏

废话程序（[图5.5](ch05.xhtml#fig5_5)）使用两个函数（`main`和`roll-Dice`）和`switch`模拟游戏，`while`，`if…else`，嵌套`if…else`和嵌套`if`语句。函数`rollDice`的原型（第9行）表示，该函数不接受参数（空括号），并返回一个`int`（骰子的总和）。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig05)

```
1 // 图05_05.cpp
2 // 骰子模拟。
3 #include <iostream>4 #include <cstdlib> // 包含函数srand和rand的原型
5 #include <ctime> // 包含函数时间的原型
6 #include "gsl/gsl" // narrow_cast的指南支持库
7使用命名空间std；8
9 int rollDice(); // rolls dice, 计算和显示和
10
11 int main() {
```

**图。5.5** 骰子模拟。

##### C++11：范围`enum`

玩家可以在第一轮或任何后续回合中赢或输。该程序使用变量`gameStatus`跟踪这一点，第19行声明为新类型`Status`。第13行声明一个名为**范围****枚举****的**用户定义类型，该类型由关键字`**enum class**`引入，后跟类型名称（`Status`）和一组表示整数常量的标识符：

[点击此处查看代码图像](Images/ch05_images.xhtml#f0124-02)

```
12 // 表示游戏状态的常量范围枚举
13枚举类状态{keepRolling, won, lost}; //常量中的所有大写字母
14
15 // 使用当前时间随机化随机数生成器
16 srand(gsl::narrow_cast<unsigned int>(time(0)));
17
18 int myPoint{0}; // 如果第一轮没有赢或输，则得积分
19 Status gameStatus{Status::keepRolling}; // 游戏尚未结束
20
```

The underlying values of these **enumeration constants** are of type `int`, start at `0` and increment by `1`, by default (you’ll soon see how to change this). In the `Status` enumeration, the constant `keepRolling` has the value 0, `won` has the value 1, and `lost` has the value 2. The identifiers in an `enum class` must be unique, but separate enumeration constants can have the same value. Variables of user-defined type `Status` can be assigned only the constants declared in the enumeration.

按照惯例，您应该在多字`enum class`名称（例如`ProductCode`）中将`enum class`名称的第一个字母和每个后续单词的第一个字母大写。`enum class`中的常量应使用与变量相同的命名约定。[9,10](ch03.xhtml#ch0fn9)

[9。](ch03.xhtml#rch0fn9)C++核心指南。2020年5月11日访问。`https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Renum-caps`。

[10。](ch03.xhtml#rch0fn10)在传统的C++代码中，您通常会在所有大写字母中看到`enum`常量——这种做法现在已被弃用。

To reference a scoped `enum` constant, qualify the constant with the scoped `enum`’s type name (in this example, `Status`) and the scope-resolution operator (`::`), as shown in line 19, which initializes `gameStatus` to `Status::keepRolling`. For a win, the program sets `gameStatus` to `Status::won`. For a loss, the program sets `gameStatus` to `Status::lost`.

##### 在第一轮中赢或输

以下`switch`决定了玩家在第一轮中是赢还是输：

[点击此处查看代码图像](Images/ch05_images.xhtml#f0125-01)

```
21 // 根据第一卷确定游戏状态和点（如果需要）
22开关（const int sumOfDice{rollDice()}; sumOfDice）{23个案例7：//在第一轮以7获胜
24个案例11：//第一轮以11获胜
25 gameStatus = Status::won;
26次休息；27个案例2：//第一轮2输
28个案例3：//第一轮输了3
29案例12：//第一卷输了12
30 gameStatus = Status::lost;
31休息；32默认值：//没有赢或输，所以记住点
33 myPoint = sumOfDice; // 记住这一点
34 cout << "Point is " << myPoint << endl;35中断；//开关末端可选
36 }37
```

17`switch`的初始化器（第22行）创建变量`sumOfDice`，并通过调用函数`rollDice`对其进行初始化。如果滚动是`7`或11，第25行将`gameStatus`设置为`Status::won`。如果滚动是2、3或12，第30行将`gameStatus`设置为`Status::lost`。对于其他值，`gameStatus`保持不变（`Status::keepRolling`），第33行在`myPoint`中保存`sumOfDice`，第34行显示`myPoint`。

##### 继续滚动

第一次滚动后，如果`gameStatus`是`Status::keepRolling`，则执行在语句`while`继续执行以下内容：

[点击此处查看代码图像](Images/ch05_images.xhtml#f0126-01)

```
38 // 当游戏尚未完成时
39 while (Status::keepRolling == gameStatus) { // 未赢或输
40 // 再次掷骰子并确定游戏状态
41 if (const int sumOfDice{rollDice()}; sumOfDice == myPoint) {42 gameStatus = Status::won;
43 }44 其他 {45 if (sumOfDice == 7) { // 在点前滚动7输
46 gameStatus = Status::lost;
47 }48 }49 }50
```

17 在`while`的每个迭代中，`if`语句的初始化器（第41行）调用`rollDice`来生成一个新的`sumOfDice`。如果`sumOfDice`匹配`myPoint`，程序将`gameStatus`设置为`Status::won`（第42行），循环终止。如果`sumOfDice`为7，程序将`gameStatus`设置为`Status::lost`（第46行），循环终止。否则，循环将继续执行。

##### 显示玩家是赢还是输

When the preceding loop terminates, the program proceeds to the following `if…else` statement, which prints `"Player wins"` if `gameStatus` is `Status::won` or `"Player loses"` if `gameStatus` is `Status::lost`:

[点击此处查看代码图像](Images/ch05_images.xhtml#f0126-02)

```
51 // 显示赢或输消息
52 if (Status::won == gameStatus) {53 局 << "玩家获胜" << endl;54 }55 其他 {56 局 << "Player loses" << endl;57 }58 }59
```

##### 功能`rollDice`

要滚动骰子，函数`rollDice`使用之前显示的模具滚动计算来初始化变量`die1`和`die2`，然后计算它们的总和。第67-68行在第69行返回`sum`之前显示`die1`、`die2`和和的值。

[点击此处查看代码图像](Images/ch05_images.xhtml#f0126-03)

```
60 //掷骰子，计算总和并显示结果
61 int rollDice() {62 const int die1{1 + rand() % 6}; // first die roll
63 const int die2{1 + rand() % 6}; // second die roll
64 const int sum{die1 + die2}; // 计算模具值的总和
65
66 // 显示此卷的结果
67 出局 << "Player rolled " << die1 << " + " << die268 << " = " << sum << endl;69 退货金额；70 }
```

##### 关于范围`enum`的附加说明

Qualifying an `enum class`’s constant with its type name and `::` explicitly identifies the constant as being in the scope of the specified `enum class`. If another `enum class` contains the same identifier, it’s always clear which constant is being used because the type name and `::` are required. In general, you should use unique values for an `enum`’s constants to help prevent hard-to-find logic errors.

另一个流行的范围列举是

[点击此处查看代码图像](Images/ch05_images.xhtml#f0127-02)

```
enum class Months {jan = 1, feb, mar, apr, may, jun, jul, aug,sep，oct，nov，dec}；
```

创建用户定义的`enum class`类型`Months`，枚举常量表示一年中的月份。前面枚举中的第一个值显式设置为1，因此剩余值从1增加，得出值为`1`到12。任何枚举常量都可以在枚举定义中分配整数值。在下一个显式设置之前，随后的枚举常量每个值都高于前一个常量1。

##### C++11之前的枚举类型

枚举也可以用关键字`**enum**`定义，后跟类型名称和一组由标识符表示的整数常量，如

[点击此处查看代码图像](Images/ch05_images.xhtml#f0127-03)

```
枚举状态{keepRolling, won, lost};
```

这种枚举中的常量是无范围的——你可以简单地用它们的名字来称呼它们，`keepRolling`，`won`和`lost`。如果两个或多个无范围的`enum`包含名称相同的常量，这可能会导致命名冲突和编译错误。

##### 11 C++11—指定`enum`常量的类型

枚举的常量有整数值。无范围`enum`的基础类型取决于其常量的值，并保证足够大来存储其常量值。作用域`enum`的基础积分类型是`int`，但您可以通过在类型名称后加上冒号（`:`）和积分类型来指定不同的类型。例如，我们可以指定`enum class Status`中的常量应该有`long`类型，如

[点击此处查看代码图像](Images/ch05_images.xhtml#f0127-04)

```
枚举类状态：长{keepRolling，赢了，输}；
```

##### 20 C++20—`using enum`声明

如果`enum class`常量的类型是显而易见的，根据它们使用的上下文（例如在我们的废话示例中），C++20`**using enum**`**声明**[11,12](ch03.xhtml#ch0fn11)允许您在没有类型名称和范围分辨率运算符（`::`）的情况下引用`enum class`的常量。例如，在`enum class`声明后添加以下语句：

`http://wg21.link/p1099r5`。

[12。](ch03.xhtml#rch0fn12)在撰写本文时，此功能仅适用于微软的Visual C++编译器。

```
使用枚举状态；
```

将允许程序的其余部分分别使用`keepRolling`，而不是`Status::keepRolling`、`Status::won`和`Status::lost`。您也可以使用单个`enum class`常量来声明表单

```
使用枚举状态::keepRolling；
```

这将允许您的代码在没有`Status::`限定符的情况下使用`keepRolling`。

### 11 5.10 C++11更安全的非确定性随机数

![图片](Images/common02.jpg) 安全函数`rand`从C标准库继承到C++中，没有“良好的统计属性”，并且可以预测。[13](ch03.xhtml#ch0fn13)这使得使用`rand`的程序不那么安全。C++11提供了一个更安全的随机数功能库，可以生成**非确定性随机数**——一组无法预测的随机数。这种随机数生成器用于不可预见性的模拟和安全场景。这些功能位于C++标准库的`<random>`标题中。

[13。](ch03.xhtml#rch0fn13)“不要使用`rand()`函数生成伪随机数。”2020年5月9日访问。`https://wiki.sei.cmu.edu/confluence/display/c/MSC30-C.+Do+not+use+the+rand%28%29+function+for+generating+pseudorandom+numbers`。

随机数生成是一个复杂的主题，数学家为此开发了许多具有不同统计属性的算法。为了根据程序中使用随机数的方式实现灵活性，C++11提供了许多代表各种**随机数生成引擎和分发的**类。引擎实现了生成伪随机数的随机数算法。分布控制引擎产生的值范围、值的类型（例如`int`、`double`等）以及值的统计属性。我们将使用默认的随机数生成引擎——`**default_random_engine**`——和`**uniform_int_distribution**`，该引擎在指定的值范围内均匀地分配伪随机整数。默认范围从0到平台上`int`的最大值。

##### 滚动六面模具

[图5.6](ch05.xhtml#fig5_6)使用`default_random_engine`和`uniform_int_distribution`滚动六面模具。第14行创建一个名为`engine`的`default_random_engine`对象。其构造函数参数随着当前时间生成随机数生成引擎。如果您不将值传递给构造函数，将使用默认种子，并且程序每次执行时都会生成相同的数字序列——这对于测试目的非常有用。第15行创建`randomInt`——一个`uniform_int_distribution`对象，在1至6范围内生成`int`值（由`<int>`指定）（由初始化器`{1, 6}`指定）。表达式`randomInt(engine)`）（第20行）返回1至6范围内的一个`int`

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig06)

```
1 // 图05_06.cpp
2 // 使用C++11随机数生成引擎和分发
3 // 更安全地滚动六面模具。
4 #include <iostream>5 #include <iomanip>6 #include <random> // 包含 C++11 随机数生成功能
7 #include <ctime>8 #include "gsl/gsl"
9使用命名空间std；10
11 int main() {12 // 使用默认的随机数生成引擎                 
13 // 从 1 到 6 生成均匀分布的伪随机int 值  
14 default_random_engine engine{gsl::narrow_cast<unsigned int>(time(0))};
15 const uniform_int_distribution<int> randomInt{1, 6};
16
17 // 循环 10 次
18 for (int counter{1}; counter <= 10; ++counter) {19 // 从 1 到 6 随机选择并输出
20 cout << setw(10) << randomInt(engine);21     }
22
23     cout << endl;
24  }
2 1 2 3 5 6 1 5 6 4
```

**图。5.6** 使用C++11随机数生成引擎和分发更安全地滚动六面模具。

第15行中的符号`<int>`表示`uniform_int_distribution`是一个类模板。在这种情况下，任何整数类型都可以在角括号（`<`和`>`）中指定。在第19[章](ch19.xhtml#ch19)中，我们讨论了如何创建类模板，其他各章展示了如何使用C++标准库中的现有类模板。目前，您可以通过模仿示例中显示的语法来使用类模板`uniform_int_distribution`。

### 5.11 范围规则

程序中可以使用标识符的部分称为其范围。例如，当我们在块中声明局部变量时，只能引用它

•从该块中的声明点开始，并且

•在变量声明后显示在该块中的嵌套块中。

本节讨论块范围和全局命名空间范围。函数原型中的参数名称具有**函数原型范围**——它们仅在它们出现的原型中已知。稍后，我们将看到其他范围，包括[第11章](ch11.xhtml#ch11)中的**类范围**，以及第23章中的**函数****范围**和**命名空间范围。**

##### 冻结范围

在块内声明的标识符具有**块范围**，从标识符的声明开始，到封闭块的终止右大括号（`}`）结束。本地变量具有块范围，函数参数也是如此（即使它们声明在块的大括号之外）。任何块都可以包含变量声明。当块嵌套，并且外部块中的标识符与内部块中的标识符具有相同的名称时，外部块中的标识符将被“隐藏”，直到内部块终止。内块“看到”自己的局部变量的值，而不是包包块相同命名变量的值。

意外地对内部块中的标识符使用相同的名称，而内部块用于外部块中的标识符，而实际上，您希望外部块中的标识符在内部块期间处于活动状态，这通常是一个逻辑错误。避免在内部作用域中隐藏名称的变量名。大多数编译器都会警告你这一点。

局部变量也可以被宣布为`**static**`。此类变量也有块范围，但与其他局部变量不同，当函数返回调用方时，`static`局部变量会保留其值。下次调用函数时，静态局部变量包含函数上次完成执行时的值。以下语句声明`static`局部变量`count`，并初始化为1：

```
静态int count{1}；
```

默认情况下，所有数字类型的`static`局部变量都初始化为零。以下语句声明静态局部变量`count`并将其初始化为`0`：

```
静态int计数；
```

非基本类型变量的默认初始化取决于类型——例如，`string`的默认值是空字符串（“”）。我们将在后面的章节中详细介绍默认初始化。

##### 全局命名空间范围

在任何函数或类之外声明的标识符具有**全局命名空间范围**。这种标识符在源代码文件中声明后对所有函数都“已知”。函数定义、放置在函数之外的函数原型、类定义和全局变量都具有全局命名空间范围。**全局变量**是通过将变量声明放置在任何类或函数定义之外来创建的。这些变量在整个程序的执行过程中都保留了它们的值。

将变量声明为全局变量而不是局变量允许在不需要访问该变量的函数意外或恶意修改它时发生意外副作用。除了真正的全局资源，如`cin`和`cout`，你应该避免全局变量。这是**最小特权原则**的一个例子，这是良好软件工程的基础。它指出，代码应该*只*获得完成指定任务所需的特权和访问权限，但不应更多。这方面的一个例子是局部变量的范围，当不需要时，它不应该可见。当调用函数时，会创建一个局部变量，该函数在执行时使用，然后在函数返回时消失。最小特权原则通过防止代码意外（或恶意）修改不应访问的变量值，使您的程序更健壮。

一般来说，变量应该在需要访问的最窄范围内声明。仅在特定函数中使用的变量应声明为该函数中的局部变量，而不是全局变量。

##### 范围演示

[图5.7](ch05.xhtml#fig5_7)显示了全局变量、局部变量和`static`局部变量的范围问题。我们显示程序的一部分及其相应的输出，以供讨论。第10行声明并初始化全局变量`x`到1。此全局变量隐藏在任何声明名为`x`的变量的块（或函数）中。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig07)

```
1 // 图05_07.cpp
2 // 范围界定示例。
3 #include <iostream>4使用命名空间std；5
6 void useLocal(); // 函数原型
7 void useStaticLocal(); // 函数原型
8 void useGlobal(); // 函数原型
9
10 int x{1}; // 全局变量
11
```

**图。5.7** 范围界定示例。

##### 功能`main`

`main`行13显示全局变量`x`的值。第15行将局部变量`x`初始化为5。第17行输出此变量，以显示全局`x`隐藏在`main`中。接下来，第19-23行在`main`定义了一个新块，其中另一个局部变量`x`初始化为`7`（第20行）。第22行输出此变量，以显示它在`main`和全局`x`的外块中隐藏`x`。当块退出时，值为`7`的变量`x`会自动销毁。接下来，第25行在`main`的外块中输出局部变量`x`，以显示它不再隐藏。

[点击此处查看代码图像](Images/ch05_images.xhtml#f0131-01a)

```
12 int main() {13 cout << "global x in main is " << x << endl;14
15 const int x{5}; // 本地变量到主
16
17 cout << "main's outer scope is " << x << endl;18
19 { // 块开始一个新的范围                                 
20 const int x{7}; // 在外部作用域和全局x中隐藏x
21                                                                     
22 cout << "main's inner scope is " << x << endl;
23 }24
25 cout << "main's outer scope is " << x << endl;26
全局x主要是1主外域中的局部x是5主要内范围中的局部x是7主外域中的局部x是5
```

为了演示其他范围，该程序定义了三个函数——`useLocal`、`useStaticLocal`和`useGlobal`——每个函数不接受参数，也不返回任何内容。`main`的其余部分（如下所示）在27-32行中调用每个函数两次。在执行函数`useLocal`、`useStaticLocal``useGlobal`后，程序再次在`main`中打印本地变量`x`，以表明没有一个函数调用修改`main`中的`x`值，因为函数都引用了其他作用域中的变量。

[点击此处查看代码图像](Images/ch05_images.xhtml#f0132-01)

```
27 useLocal(); // useLocal有本地x
28 useStaticLocal(); // useStaticLocal有静态本地x
29 useGlobal(); // useGlobal使用全局x
30 useLocal(); // useLocal重新初始化其本地x
31 useStaticLocal(); // 静态本地x保留其先前值
32 useGlobal(); // global x也保留了其先前值
33
34 cout << "\nlocal x in main is " << x << endl;35 }36
进入useLocal时，本地x为25退出使用本地x是26进入useStaticLocal时，本地静态x为50退出useStaticLocal时，本地静态x为51进入useGlobal时，global x是1退出useGlobal时global x是10进入useLocal时，本地x为25退出使用本地x是26进入useStaticLocal时，本地静态x为51退出时，本地静态x为52StaticLocal进入useGlobal时，global x是10退出使用Global时，global x是100主的本地x是5
```

##### 功能`useLocal`

函数`useLocal`初始化局部变量`x`到`25`（第39行）。当`main`用`useLocal`（第27行和第30行）时，函数打印变量`x`，对其进行增量，并在函数将程序控制权返回给调用方之前再次打印。每次程序调用此函数时，该函数都会重新创建本地变量`x`并将其重新初始化为25。

[点击此处查看代码图像](Images/ch05_images.xhtml#f0132-02)

```
37 // useLocal在每次调用期间重新初始化本地变量x
38 void useLocal() {39 int x{25}; // 每次调用 useLocal 时初始化
40
41 cout << "\nlocal x is " << x << " on entering useLocal" << endl;42++x；43 cout << "local x is " << x << " on exiting useLocal" << endl;44 }45
```

##### 功能`useStaticLocal`

函数`useStaticLocal`声明静态变量`x`并将其初始化为50。声明为静态的局部变量即使超出范围（即声明它们的函数不执行）也会保留其值。当`main`用中的第28行`useStaticLocal`时，该函数会打印其本地`x`，在函数将程序控制返回给调用者之前再次打印。在对此函数的下一次调用（第31行）中，`static`局部变量`x`包含值51。第50行的初始化仅在首次调用`useStaticLocal`时发生（第28行）。

[点击此处查看代码图像](Images/ch05_images.xhtml#f0133-02)

```
46 // useStaticLocal仅初始化静态局部变量x
47 // 首次调用函数；保存x的值
48 // 在调用此函数之间
49 void useStaticLocal() {50 static int x{50}; // 首次初始化 useStaticLocal 被称为
51
52 cout << "\nlocal static x is " << x << " on entering useStaticLocal"
53 << endl;54++x；55 cout << "local static x is " << x << " on exiting useStaticLocal"
56 << endl;57 }58
```

##### 功能`useGlobal`

函数`useGlobal`不声明任何变量。因此，当它引用变量`x`时，使用全局`x`（`main`10行）。当`main`用`useGlobal`（第29行）时，函数打印全局变量`x`，将其乘以10，并在函数返回给调用者之前再次打印。下次`main`调用`useGlobal`（第32行），全局变量的修改值为10。

[点击此处查看代码图像](Images/ch05_images.xhtml#f0133-03)

```
59 // useGlobal在每次调用期间修改全局变量x
60 void useGlobal() {61 cout << "\nglobal x is " << x << " on entering useGlobal" << endl;62 x *= 10；63 cout << "global x is " << x << " on exiting useGlobal" << endl;64 }
```

### 5.12 内联函数

从软件工程的角度来看，将程序作为一组函数实现是好的，但函数调用涉及执行时间开销。C++提供**内联函数**，以帮助减少函数调用开销。在函数定义中，将`**inline**`放在函数的返回类型之前，建议编译器在调用函数的每个地方（适当时）生成函数正文代码的副本，以避免函数调用。这通常会使程序变得更大。编译器可以忽略内联限定符。可重用`inline`函数通常放置在标题中，以便它们的定义可以在使用它们的每个源文件中内联。

If you change an `inline` function’s definition, you must recompile any code that calls that function. Though compilers can inline code for which you have not explicitly used `inline`, the ISO’s C++ Core Guidelines indicate that you should declare “small and time-critical” functions `inline`.[14](ch04.xhtml#ch0fn14) ISO also provides an extensive FAQ on the subtleties of using inline functions:

[14。](ch04.xhtml#rch0fn14)C++核心指南。2020年5月11日访问。`https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rf-inline`。

```
https://isocpp.org/wiki/faq/inline-functions
```

[图5.8](ch05.xhtml#fig5_8)使用`inline`函数`cube`（第9-11行）来计算立方体的体积。）

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig08)

```
1 // 图05_08.cpp
2 // 计算立方体体积的内联函数。
3 #include <iostream>m4使用命名空间std；5
6 // 内联函数立方体的定义。出现功能的定义
7 // 在调用函数之前，因此不需要函数原型。
8 // 函数定义的第一行也充当原型。
9内联双立方体（双面）{
10返回方*侧*侧；//计算立方体
11  }                                              
12
13 int main() {14 double sideValue; // 存储用户输入的值
15 cout << "输入立方体的侧长: ";16 cin >> sideValue; // 从用户读取值
17
18 // 计算侧值立方体并显示结果
19 回合 << "带侧面的立方体体积"
20 << sideValue << " is " << cube(sideValue) << endl;21 }
Enter the side length of your cube: 3.5
Volume of cube with side 3.5 is 42.875
```

**图。5.8** 计算立方体体积的`inline`函数。

### 5.13 参考和参考参数

![图片](Images/common01.jpg) PERF 在许多编程语言中，将参数传递给函数的两种方法是**传递值**和**传递引用**。当参数通过值传递时，参数值的副本将被生成并传递给调用的函数。对副本的更改不会影响调用者中原始变量的值。这可以防止意外副作用，这些副作用极大地阻碍了正确可靠的软件系统的开发。到目前为止，书中的每个论点都是有价值的。传递值的一个缺点是，如果传递一个大数据项，复制该数据可能需要相当多的执行时间和内存空间。

##### 参考参数

本节介绍引用参数——C++提供的两种方式中的第一个用于执行传递引用。[15](ch05.xhtml#ch0fn15)当变量通过引用传递时，调用者使被调用的函数能够直接访问调用者中的该变量并修改变量。

[15。](ch05.xhtml#rch0fn15)[第7章](ch07.xhtml#ch07)讨论了指针，这些指针启用了另一种形式的传递引用，其中函数调用的样式清楚地指示传递引用（以及修改调用者参数的潜力）。

![图片](Images/common01.jpg) 出于性能原因，PERF传递引用是好的，因为它可以消除复制大量数据的传递价值开销。但路过引用可能会削弱安全性——调用的功能可能会损坏调用者的数据。

![图片](Images/common02.jpg) 安全性 在本节示例之后，我们将展示如何实现传递引用的性能优势，同时实现保护呼叫者数据免受损坏的软件工程优势。

**引用参数**是函数调用中相应参数的别名。要指示函数参数是通过引用传递的，只需通过安培数（`&`）在函数原型中遵循参数的类型；在函数头中列出参数的类型时使用相同的约定。例如，参数声明

```
int&号码
```

当从右到左阅读时，发音为“`number`是对`int`的引用”。一如既往，函数原型和标头必须一致。

在函数调用中，只需按名称提及变量，即可通过引用传递。在被调用函数的主体中，引用参数（例如`number`）是指调用者中的原始变量，该变量可以直接由被调用的函数修改。

##### 按值和引用传递参数

[图5.9](ch05.xhtml#fig5_9)将传递值和传递引用与参考参数进行了比较。对函数`squareByValue`和函数`square-ByReference`调用中参数的“样式”是相同的——这两个变量在函数调用中都只是用名称提及的。编译器检查函数原型和定义，以确定是使用传递值还是传递引用。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig09)

```
1 // 图05_09.cpp
2 // 按值和引用传递参数。
3 #include <iostream>4使用命名空间std；5
6 int squareByValue(int x); // 函数原型（用于值传递）
7 void squareByReference(int& z); // 函数原型（用于参考通行证）
8
9 int main() {10 const int x{2}; // 使用squareByValue将值为平方
11 int z{4}; // 使用squareByReference将值为平方
12
13 // 演示 squareByValue
14 cout << "x = " << x << " before squareByValue\n";15 cout << "value returned by squareByValue: "
16        << squareByValue(x) << endl;
17 cout << "x = " << x << " after squareByValue\n" << endl;18
19 // 演示 squareByReference
20 cout << "z = " << z << " before squareByReference" << endl;21     squareByReference(z);
22 cout << "z = " << z << " after squareByReference" << endl;23  }
24
25 // squareByValue本身乘以数字，存储
26 // 生成数字并返回数字的新值
27 int squareByValue(int number) {
28返回编号*=编号；//调用者的参数未修改
29  }                                                            
30
31 // squareByReference将 numberRef 本身乘以并存储结果
32 // 在 numberRef 在函数主中引用的变量中
33 void squareByReference(int& numberRef) {
34 numberRef *= numberRef; // 修改了调用者的参数
35  }                                                       
x = 2 before squareByValue
Value returned by squareByValue: 4
x = 2 after squareByValue

z = 4 before squareByReference
z = 16 after squareByReference
```

**图。5.9** 按值和引用传递参数。

##### 作为函数中别名的引用

引用也可以用作函数中其他变量的别名（尽管它们通常与函数一起使用，如[图](ch05.xhtml#fig5_9)所示[）。5.9](ch05.xhtml#fig5_9)）。例如，代码

[点击此处查看代码图像](Images/ch05_images.xhtml#f0136-01)

```
int count{1}; // 声明整数变量计数
int& cRef{count}; // 将 cRef 创建为计数的别名++cRef; // 增量计数（使用其别名 cRef）
```

使用其别名`cRef`来增加变量`count`。引用变量必须在声明中初始化，不能作为别名重新分配给其他变量。从这个意义上说，引用是恒定的。对别名（即引用）执行的所有操作实际上都在原始变量上执行。别名只是原始变量的另一个名称。除非是对常量的引用（如下所述），否则引用的初始化器必须是*lvalue*——这可以出现在赋值的左侧，如变量名。引用可能不会用常量或*rvalue*表达式初始化，也就是说，某些东西可能会出现在赋值的右侧，例如计算结果。

##### `const`参考资料

要指定不应允许引用参数修改调用方中的相应参数，请将`**const**`限定符放在参数声明中的类型名称之前。例如，考虑adisplayName函数：

[点击此处查看代码图像](Images/ch05_images.xhtml#f0137-01)

```
void displayName(std::string name) {std::cout << name << std::endl;}
```

当调用时，它会收到其`string`参数的副本。由于`string`对象可能很大，因此此复制操作可能会降低应用程序的性能。因此，`string`对象（以及一般的对象）应该通过引用传递给函数。

此外，`displayName`函数不需要修改其参数，因此根据最小特权原则，我们会将参数声明为

```
const std::string& name
```

![图片](Images/common01.jpg) 佩里夫![图片](Images/common02.jpg)安全性 从右到左读取，`name`参数是对`string`常量的引用。我们通过引用传递`string`的性能。此外，`displayName`将参数视为常量，因此`displayName`无法修改调用方中的值——因此我们获得传递值的安全性。

##### 返回对本地变量的引用

函数可以返回对局部变量的引用，但这可能很危险。当返回对本地非`static`变量的引用时，引用指的是函数终止时丢弃的变量。尝试访问此类变量会产生未定义的行为，通常会崩溃程序或损坏数据。[16](ch05.xhtml#ch0fn16)对未定义变量的引用称为**悬垂引用**。这是一个逻辑错误，编译器通常会发出警告。软件工程团队通常有策略要求，在部署代码之前，它必须在没有警告的情况下编译。

[16。](ch05.xhtml#rch0fn16)C++核心指南。2020年5月11日访问。`https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rf-dangle`。

### 5.14 默认参数

程序通常为特定参数反复调用具有相同参数值的函数。在这种情况下，您可以指定此类参数具有**默认参数**，即要传递给该参数的默认值。当程序在函数调用中省略具有默认参数的参数参数时，编译器会重写函数调用，插入该参数的默认值。

##### `boxVolume`带有默认参数的函数

[图5.10](ch05.xhtml#fig5_10)演示了使用默认参数来计算盒子的体积。`boxVolume`的函数原型（第7行）通过在每个参数的右侧放置`= 1`，指定所有三个参数的默认值为`1`。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig10)

```
1 // 图05_10.cpp
2 // 使用默认参数。
3 #include <iostream>4使用命名空间std；5
6 // 指定默认参数的函数原型
7 int boxVolume(int length = 1, int width = 1, int height = 1);
8
9 int main() {10 // 没有参数--对所有维度使用默认值
11 cout << "默认框卷是: " << boxVolume();12
13 // 指定长度；默认宽度和高度
14 cout << "\n\n长度为10,\n的盒子的体积"
15 << "宽度1和高度1是: " << boxVolume(10);16
17 // 指定长度和宽度；默认高度
18 发 << "\n\n长度为 10,\n" 的盒子的体积
19 << "宽度5和高度1是: " << boxVolume(10, 5);20
21 // 指定所有参数
22 cout << "\n\n长度为10,\n的盒子的体积"
23 << "宽度5和高度2是: " << boxVolume(10, 5, 2)
24        << endl;
25  }
26
27 // 函数框体积计算盒子的体积
28 int boxVolume(int length, int width, int height) {29返回长度*宽度*高度；30  }
The default box volume is: 1

The volume of a box with length 10,
width 1 and height 1 is: 10

The volume of a box with length 10,
width 5 and height 1 is: 50

The volume of a box with length 10,
width 5 and height 2 is: 100
```

**图。5.10** 使用默认参数。

对`boxVolume`的第一次调用（第11行）不指定参数，因此使用所有三个默认值1。第二个调用（第15行）仅传递`length`参数，因此对`width`和`height`参数使用默认值为1。第三个调用（第19行）仅传递`length`和`width`的参数，因此对`height`参数使用默认值为1。最后一次调用（第23行）传递`length`、`width`和`height`的参数，因此不使用默认值。显式传递给函数的任何参数都会从左到右分配给函数的参数。因此，当`boxVolume`收到一个参数时，函数将该参数的值分配给其`length`参数（即参数列表中最左边的参数）。当`boxVolume`收到两个参数时，函数会按顺序将这些参数的值分配给其`length`和`width`参数。最后，当`boxVolume`收到所有三个参数时，函数将这些参数的值分别分配给其`length`、`width`和`height`参数。

##### 关于默认参数的备注

默认参数必须是函数参数列表中最右边的（跟踪）参数。当调用具有两个或多个默认参数的函数时，如果省略的参数不是最右边的参数，则该参数右侧的所有参数也必须省略。默认参数必须在函数名称首次出现时指定——通常在函数原型中。如果由于函数定义也作为原型而被省略了函数原型，则应在函数标头中指定默认参数。默认值可以是任何表达式，包括常量、全局变量或函数调用。默认参数也可以与`inline`函数一起使用。使用默认参数可以简化函数调用的编写，但一些程序员认为显式指定所有参数更清晰。

### 5.15 统一范围解析操作员

C++提供了**一元****作用域解析运算符（**`**::**`**），**以便在同名本地变量在作用域中时访问全局变量。一元作用域解析运算符不能用于访问外部块中同名的本地变量。如果全局变量的名称与作用域中的局变量的名称不同，则可以在没有一元作用域解析运算符的情况下直接访问全局变量。

[图5.11](ch05.xhtml#fig5_11)显示了具有相同名称的局部和全局变量（第6行和第9行）的一元范围解析运算符。为了强调变量`number`的本地和全局版本是不同的，程序声明一个变量`int`，另一个变量为`double`。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig11)

```
1 // 图05_11.cpp
2 // 统一作用域解析运算符。
3 #include <iostream>4使用命名空间std；5
6 int number{7}; // 名为数字的全局变量
7
8 int main() {9个双数{10.5}; // 本地变量命名数字
10
11 // 显示局部和全局变量的值
12 cout << "数字的本地双值 = " << number
13 << "\nn数字的全局int值 = " << ::number << endl;14  }
Local double value of number = 10.5
Global int value of number = 7
```

**图。5.11** 统一范围解析操作员。

始终使用一元作用域解析运算符（`::`）来引用全局变量（即使与本地变量名称没有冲突）。这清楚地表明，您正在访问全局变量，而不是局部变量。它还通过降低名称与非全局变量冲突的风险使程序更容易修改，并消除了当局变量隐藏全局变量时可能发生的逻辑错误。避免在程序中将同名变量用于不同的目的。虽然这在各种情况下都是允许的，但它可能导致错误。

### 5.16 功能超载

C++允许定义几个同名的函数，只要它们具有不同的签名。这被称为**函数重载**。C++编译器通过检查调用中参数的数量、类型和顺序来选择要调用的正确函数。函数重载用于创建几个同名函数，这些函数执行类似任务，但对不同类型的数据执行类似任务。例如，数学库中的许多函数因不同的数字类型而过载——C++标准在第[5.3节](ch05.xhtml#ch05lev1sec3)中要求数学库函数的`float`、`double`和`long double`载版本。执行密切相关任务的重载函数可以使程序更清晰。

##### 重载的`square`函数

[图5.12](ch05.xhtml#fig5_12)使用过载的`square`函数来计算`int`的平方（第7-10行）和`double`的平方（第13-16行）。第19行通过传递字面值7来调用函数`square`的`int`版本。C++将整数字面值视为类型`int`。同样，第21行通过传递字面值`7.5`来调用函数`square`的`double`版本，C++将其视为`double`值。在每种情况下，编译器都会根据参数的类型选择要调用的正确函数。输出确认在每种情况下都调用了正确的函数。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig12)

```
1 // 图05_12.cpp
2 // 重载的正方形函数。
3 #include <iostream>4使用命名空间std；5
6 // int值的函数平方
7 int square(int x) {
8 cout << "整数平方 " << x << " 是 ";
9返回x * x；10  }
11
12 // 双值的函数平方
13 double square(double y) {
14 cout << "平方双 << y << " 是 ";
15返回y * y；16  }
17
18 int main() {19 cout << square(7); // 调用int 版本
20     cout << endl;
21 cout << square(7.5); // 调用双版本
22     cout << endl;
23  }
square of integer 7 is 49
square of double 7.5 is 56.25
```

**图。5.12** 重载的`square`函数。

##### 编译器如何区分重载函数

重载函数以其签名来区分。签名是函数名称及其参数类型的组合（按顺序）。**类型安全链接**确保调用适当的函数，并确保参数的类型符合参数的类型。为了启用类型安全链接，编译器内部用参数的类型对每个函数标识符进行编码——这个过程被称为**名称修饰**。这些编码因编译器而异，因此为给定平台创建可执行文件而链接的所有内容都必须使用该平台的同一编译器编译。[图5.13](ch05.xhtml#fig5_13)是用GNU C++.[17](ch05.xhtml#ch0fn17)编译的，我们没有像往常一样显示程序的执行输出，而是显示GNU C++用汇编语言生成的处理函数名。[18](ch05.xhtml#ch0fn18)

[17。](ch05.xhtml#rch0fn17)空体`main`函数确保如果我们编译此代码，我们不会收到链接器错误。

[18。](ch05.xhtml#rch0fn18)命令`g++ -S fig05_13.cpp`生成汇编语言文件`fig05_14.s`。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig13)

```
1 // 图05_13.cpp
2 // 名称修整，以启用类型安全链接。
3
4 // int值的函数平方
5 int square(int x) {6返回x * x；7  }
8
9 // 双值的函数平方
10 double square(double y) {11 返回 y * y；12  }
13
14 // 接收类型参数的函数
15 // int、float、char和int&
16 void nothing1(int a, float b, char c, int& d) { }17
18 // 接收类型参数的函数
19 // char、int、float&和double&
20 int nothing2(char a, int b, float& c, double& d) {21返回0；22  }
23
24 int main() { }
_Z6squarei
_Z6squared
_Z8nothing1ifcRi
_Z8nothing2ciRfRd
main
```

**图。5.13** 名称修整，以启用类型安全链接。

对于GNU C++，每个经过处理的名称（`main`除外）都以下划线（`_`）开头，后跟字母`Z`、数字和函数名。后面`Z`的数字指定了函数名称中有多少个字符。例如，函数`square`的名称中有6个字符，因此其修补名称前缀为`_Z6`。函数名之后是其参数列表的编码：

•对于接收`int`（第5行）的函数`square`，`i`代表`int`，如输出的第一行所示。

•对于接收`double`（第10行）的函数`square`，`d`表示`double`，如输出的第二行所示。

•对于函数 `nothing1`（第16行），`i`表示`int`，`f`表示`float`，`c`表示`char`，`Ri`表示`int&`（即对`int`的引用），如输出的第三行所示。

•对于函数 `nothing2`（第20行），`c`代表一个`char`，`i`代表一个`int`，`Rf`代表表示一个`float&`，`Rd`代表一个`double&`。

编译器通过参数列表来区分两个`square`函数——一个为`int`指定`i`，另一个为`double``d`。函数的返回类型没有在修手名称中指定。重载函数可以有不同的返回类型，但如果它们有，它们也必须具有不同的参数列表。函数名修饰是特定于编译器的。例如，Visual C++为第5行的平方函数生成名称`square@@YAHH@Z`GNU C++编译器没有处理`main`的名字，但一些编译器会这样做。例如，Visual C++使用`_main`。

使用相同的参数列表和不同的返回类型创建重载函数是一个编译错误。编译器仅使用参数列表来区分重载函数。这些函数不需要具有相同数量的参数。

省略默认参数的函数可能会与另一个重载函数相同；这是一个编译错误。例如，当尝试在传递无参数的调用中使用该函数名称时，拥有一个同时包含不接受参数的函数和包含所有默认参数的同名函数的程序会导致编译错误。编译器无法明确确定要选择哪个版本的函数。

##### 超载的操作员

在第14[章](ch14.xhtml#ch14)中，我们讨论了如何重载运算符，以定义它们应该如何对用户定义的数据类型的对象进行操作。（事实上，到目前为止，我们一直在使用许多重载运算符，包括流插入`<<`和流提取`>>`运算符。对于所有基本类型，这些都超载。我们在第14[章](ch14.xhtml#ch14)中谈到了重载`<<`和`>>`以能够处理用户定义类型的对象的更多信息。）

### 5.17 功能模板

重载函数通常用于执行涉及不同数据类型不同程序逻辑的类似操作。如果每种数据类型的程序逻辑和操作相同，则可以使用**函数模板**更紧凑、更方便地执行重载。您编写单个函数模板定义。给定调用此函数时提供的参数类型，C++会自动生成单独的**函数模板专业化，**以适当处理每种类型的调用。因此，定义单个函数模板本质上定义了整个重载函数家族。

##### `maximum`功能模板

[图5.14](ch05.xhtml#fig5_14)定义了一个`maximum`函数模板，该模板确定了三个值中最大的一个。所有函数模板定义都以`**template**`**关键字**（第3行）开头，然后是以角括号（`<`和`>`）括起来的**模板参数列表**。模板参数列表中的每个参数前面都有关键字`**typename**`或关键字`class`（它们是上下文中的同义词）。**类型参数**是基本类型或用户定义类型的占位符。这些占位符（在这种情况下是`T`）用于指定函数参数的类型（第4行），指定函数的返回类型（第4行），并在函数定义正文中声明变量（第5行）。函数模板像任何其他函数一样定义，但使用类型参数作为实际数据类型的占位符。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig14)

```
1 // 图5.14：maxm.h
2 // 函数模板最大标头。
3个模板<typename T> //或模板<class T>
4  T maximum(T value1, T value2, T value3) {
5 T maximumValue{value1}; // 假设value1是最大值
6
7 // 确定 value2 是否大于 maximumValue
8 if (value2 > maximumValue) {9        maximumValue = value2;
10     }
11
12 // 确定值3是否大于最大值
13 if (value3 > maximumValue) {14        maximumValue = value3;
15     }
16
17 返回最大值；18  }
```

**图。5.14** 函数模板`maximum`标头。

此函数模板声明单个类型参数`T`（第3行）为按函数`maximum`测试的数据类型的占位符。在特定模板定义的模板参数列表中，类型参数的名称必须是唯一的。当编译器在程序源代码中遇到对`maximum`的调用时，编译器在整个模板定义中将`maximum`调用中的参数类型替换为`T`，创建一个完整的函数模板专业化，该专业化确定指定类型的最多三个值。值必须具有相同的类型，因为我们在本示例中只使用一个类型参数。然后编译新创建的函数——模板是代码生成的一种手段。我们将[在第16章](ch16.xhtml#ch16)中使用需要多个类型参数的C++标准库模板。

##### 使用函数模板`maximum`

[图5.15](ch05.xhtml#fig5_15)使用`maximum`函数模板分别确定三个`int`值、三个`double`值和三个`char`值中最大的值（第15、24和33行）。由于每个调用都使用不同类型的参数，因此编译器“幕后”为每个参数创建一个单独的函数定义——一个期望三个`int`值，一个期望三个`double`值，一个期望三个`char`值。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig15)

```
1 // 图05_15.cpp
2 // 函数模板最大测试程序。
3 #include <iostream>4 #include "maximum.h" // 包括函数模板最大的定义
5使用命名空间std；6
7 int main() {8 // 用int值演示最大值
9 cout << "输入三个整数值: ";10 int int1，int2，int3；11     cin >> int1 >> int2 >> int3;
12
13 // 调用最大值的int版本
14 cout << "最大整数值为: "
15        << maximum(int1, int2, int3);
16
17 // 用双值演示最大值
18 cout << "\n\n输入三个双值: ";19双1，双2，双3；20     cin >> double1 >> double2 >> double3;
21
22 // 调用最大值的双重版本
23 cout << "最大双值是: "
24        << maximum(double1, double2, double3);
25
26 // 用字符值演示最大值
27 cout << "\n\n输入三个字符: ";28 char char1，char2，char3；29     cin >> char1 >> char2 >> char3;
30
31 // 调用最大值的字符版本
32 cout << "最大字符值为: "
33        << maximum(char1, char2, char3) << endl;
34 }
Input three integer values: 1 2 3
The maximum integer value is: 3

Input three double values: 3.3 2.2 1.1
The maximum double value is: 3.3

Input three characters: A C B
The maximum character value is: C
```

**图。5.15** 函数模板`maximum`测试程序。

##### `maximum`字体功能模板专业化`int`

为类型`int`创建的函数模板专业化将`T`的每次出现替换为`int`，如下所示：

[点击此处查看代码图像](Images/ch05_images.xhtml#f0145-01)

```
int maximum(int value1, int value2, int value3) {int maximumValue{value1}; // 假设 value1 是最大值

   //确定value2是否大于maxinValue
   if (value2 > maximumValue) {maximumValue = value2;}//确定value3是否大于maxValue
   如果 (value3 > maximumValue) {maximumValue = value3；}返回最大值；}
```

### 5.18 递归

对于某些问题，让函数调用自己是有用的。**递归函数**是直接或间接（通过另一个函数）调用自己的函数。本节和下一节介绍递归的简单示例。高级计算机科学课程详细讨论了递归。

##### 递归概念

我们首先从概念上考虑递归，然后检查包含递归函数的程序。递归问题解决方法有几个共同点。调用递归函数来解决问题。该函数只知道如何解决最简单的情况或所谓的**基本情况。**如果使用基本情况调用函数，则函数只需返回一个结果。如果函数被调用时存在更复杂的问题，它通常会将问题分为两个概念部分——一个函数知道怎么做，另一个部分不知道怎么做。为了使递归可行，后一个部分必须类似于原始问题，但是一个稍微简单或更小的版本。这个新问题看起来像原始问题，因此函数调用自己的副本来处理较小的问题——这被称为**递归调用**，也称为**递归步骤**。递归步骤通常包括关键字`return`，因为它的结果将与函数知道如何解决的问题部分相结合，以形成传递给原始调用者（可能是`main`的结果。

省略基本情况或错误地写入递归步骤，使其不会在基格上收敛会导致无限递归错误，通常会导致堆栈溢出。这类似于迭代（非递归）解中的无限循环问题。意外地通过另一个函数直接或间接调用非递归函数本身也会导致无限递归。

当对函数的原始调用仍然“打开”时，递归步骤会执行，即它尚未完成执行。递归步骤可以导致更多这样的递归调用，因为函数不断将调用函数的每个新子问题划分为两个概念部分。为了使递归最终终止，每次函数使用原始问题的略简单版本调用自己时，这个越来越小的问题序列最终必须在基本情况下收敛。此时，函数识别基本情况，并将结果返回到函数的上一个副本。然后，一系列返回随之而来，直到原始调用最终将最终结果返回给`main`。[19与](ch05.xhtml#ch0fn19)我们到目前为止一直使用的问题解决方式相比，这听起来相当异国情调。作为这些概念的一个例子，让我们编写一个递归程序来执行一个流行的数学计算。

[19。](ch05.xhtml#rch0fn19)C++标准文档指出，不应在程序中调用`main`（第6.9.3.1节）或递归调用main（第7.6.1.2节）。它的唯一目的是成为程序执行的起点。

##### 派系

非负整数*n*的阶乘，写*n*！（发音为“*n*阶乘”）是产品

*n* `·` (*n* – 1) `·` (*n* – 2) · … · 1

和1！等于1和0！定义为1。例如，5！是乘积5·4·3·2·1，等于120。

##### 迭代因子

大于或等于0的整数的阶乘数可以通过使用以下`for`**迭代**（非递归）计算：

[点击此处查看代码图像](Images/ch05_images.xhtml#f0146-01)

```
int factorial{1}；for (int counter{number}; counter >= 1; --counter) {阶乘*=计数器；}
```

##### 递归因子

通过观察以下代数关系，得出阶乘函数的递归定义：

*n*！= *n*·（*n*-1）！

例如，5！明显等于5*4！如以下所示：

5！= 5 · 4 · 3 · 2 · 1
5！= 5 · (4 · 3 · 2 · 1)
5！= 5 · (4!)

##### 评估5！

5的评估！如下图所示，该图说明了递归调用的连续如何持续到1！被评估为1，终止递归。图表的（b）部分显示了从每个递归调用者返回的值，直到计算并返回最终值。

![图片](Images/05unfig01.jpg)

##### 使用递归`factorial`函数计算阶乘

[图5.16](ch05.xhtml#fig5_16)使用递归来计算和打印整数0-10的阶乘。递归函数`factorial`（第18-25行）首先确定终止条件`number <= 1`（即基本情况；第19行）是否为真。如果`number`小于或等于1，`factorial`函数返回1（第20行），则无需进一步递归，该函数终止。如果`number`大于1，第23行将问题表示为`number`的乘积，并递归调用`factorial`来评估`number - 1`的阶乘，这是一个比原始计算`factorial(number)`略简单的问题。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig16)

```
1 // 图05_16.cpp
2 //递归函数阶乘。
3 #include <iostream>4 #include <iomanip>5使用命名空间std；6
7长阶乘（长数）；//函数原型
8
9 int main() {10 // 计算0到10的阶乘
11 for (int counter{0}; counter <= 10; ++counter) {12 cout << setw(2) << counter << "!= " << factorial(counter)
13           << endl;
14     }
15  }
16
17 //函数阶乘的递归定义   
18长阶乘（长数）{
19 if (number <= 1) { // 测试基本情况     
20 返回 1; // 基本案例：0！= 1和1！= 1
21     }                                            
22 else { //递归步骤                     
23个退货编号*阶乘（编号-1）；
24     }                                            
25  }                                               
0! = 1
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
6! = 720
7! = 5040
8! = 40320
9! = 362880
10! = 3628800
```

**图。5.16**递归函数`factorial`。

##### 要素价值快速增长

函数`factorial`接收类型为`long`的参数，并返回type `long`的结果。通常，一个`long`存储在至少四个字节（32位）中；这样的变量可以保持一个值在-2,147,483,647至2,147,483,647的范围内。不幸的是，函数`factorial`产生大值的速度如此之快，以至于类型`long`无法帮助我们在达到`long`值的最大值之前计算许多阶乘值。对于较大的整数值，我们可以使用`long long`（[第3.11节](ch03.xhtml#ch03lev1sec11)）或表示任意大小整数的类（例如我们在[第3.12节](ch03.xhtml#ch03lev1sec12)中引入的开源`BigNumber`类）。

### 5.19 使用递归的示例：斐波那契系列

斐波那契系列

0，1，1，2，3，5，8，13，21，...

以0和1开头，并具有每个后续斐波那契数都是前两个斐波那契数之和的性质。

该系列发生在自然界中，特别是描述了螺旋的一种形式。连续斐波那契数的比率收敛于1.618的常数值......这个数字经常出现在自然界中，被称为**黄金比例**或**黄金平均值。**人类往往发现黄金平均值在美学上令人愉悦。建筑师通常设计长度和宽度与黄金平均值成比例的窗户、房间和建筑物。明信片通常采用黄金平均长度/宽度比。对“自然界中的斐波那契”的网络搜索揭示了许多有趣的例子，包括花瓣、贝壳、螺旋星系、飓风等。

##### 递归斐波那契定义

斐波那契级数可以递归定义如下：

斐波那契（0）=0
斐波那契（1）=1
斐波那契(*n*) =斐波那契(*n* – 1) + 斐波那契(*n* – 2)

[图](ch05.xhtml#fig5_17)的程序[。5.17](ch05.xhtml#fig5_17)使用函数斐波那契递归计算第*n个*斐`fibonacci`数。斐波那契数往往会很快变大，尽管比阶乘速度慢。[图5.17](ch05.xhtml#fig5_17)显示了程序的执行，该程序显示了几个数字的斐波那契值。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig17)

```
1 // 图05_17.cpp
2 // 递归函数斐波那契。
3 #include <iostream>4使用命名空间std；5
6长斐波那契（长数）；//函数原型
7
8 int main() {9 // 计算0到10的斐波那契值
10 for（int counter{0}；counter <= 10；++counter）11 cout << "fibonacci(" << counter << ") = "
12           << fibonacci(counter) << endl;
13
14 // 显示更高的斐波那契值
15 cout << "\nfibonacci(20) = " << fibonacci(20) << endl;16 cout << "fibonacci(30) = " << fibonacci(30) << endl;17 cout << "fibonacci(35) = " << fibonacci(35) << endl;18  }
19
20 // 递归函数斐波那契
21长斐波那契（长数）{22 if ((0 == number) || (1 == number)) { // 基本案例
23个返回号码；24     }
25 else { //递归步骤
26返回斐波那契（编号-1）+斐波那契（编号-2）；
27     }
28  }
fibonacci(0) = 0
fibonacci(1) = 1
fibonacci(2) = 1
fibonacci(3) = 2
fibonacci(4) = 3
fibonacci(5) = 5
fibonacci(6) = 8
fibonacci(7) = 13
fibonacci(8) = 21
fibonacci(9) = 34
fibonacci(10) = 55

fibonacci(20) = 6765
fibonacci(30) = 832040
fibonacci(35) = 9227465
```

**图。5.17** `fibonacci`递归函数。

该应用程序从计算和显示整数0-10的斐波那契值的循环开始，然后是三次调用来计算整数20、30和35的斐波那契值（第15-17行）。`main`对`fibonacci`的调用（第12行和第15-17行）不是递归调用，但`fibonacci`第26行的调用是递归调用。每次程序调用`fibonacci`（第21-28行），该函数都会立即测试基本情况，以确定`number`等于`0`还是`1`（第22行）。如果这是真的，第23行返回`number`。有趣的是，如果`number`大于1，递归步骤（第26行）会生成两个递归调用，每个调用的问题都比原始调用`fibonacci`略小。

##### 评估`fibonacci(3)`

下图显示了`fibonacci`如何评估`fibonacci(3)`的功能。这个数字提出了一些关于C++编译器评估运算符操作数顺序的有趣问题。这是与运算符应用于其操作数的顺序不同的问题，即由运算符优先级和分组规则规定的顺序。下图显示，评估`fibonacci(3)`会导致两个递归调用，即`fibonacci(2)`和`fibonacci(1)`。这些电话按什么顺序拨打？

![图片](Images/05unfig02.jpg)

##### 操作物评估顺序

大多数程序员只是假设操作数是从左到右计算的，在某些编程语言中就是这种情况。C++没有指定计算许多运算符（包括`+`）的操作数的顺序。因此，您不得对这些调用的执行顺序做出任何假设。事实上，这些调用可以先执行`fibonacci(2)`，然后执行`fibonacci(1)`，或`fibonacci(1)`，然后执行`fibonacci(2)`。在这个程序和大多数其他程序中，最终结果会是一样的。然而，在某些程序中，操作数的计算可能会产生**副作用**（数据值的变化），这可能会影响表达式的最终结果。

##### 指定评估顺序的运算符

在C++17之前，C++只指定了运算符`&&`、`||`、逗号（`,`）和`?:`的操作数的求值顺序。前三个是二进制运算符，其两个操作数保证从左到右计算。最后一个运算符是C++唯一的三元运算符——其最左的操作数总是首先计算；如果它计算为true，中间操作数接下来计算，最后一个操作数被忽略；如果最左边的操作数计算为false，第三个操作数接下来计算，中间操作数被忽略。

17 从C++17开始，C++现在还指定了其他各种运算符的操作数的求值顺序。对于运算符点（`.`），`[]`（[第6章](ch06.xhtml#ch06)）、`->`（[第7章](ch07.xhtml#ch07)）、括号（函数调用）、`<<`、`>>`和`->*`，编译器从左到右计算操作数。对于函数调用的括号，这意味着编译器在参数之前计算函数名。编译器从右到左评估赋值运算符的操作数。

编写依赖于其他运算符操作数评估顺序的程序可能会导致逻辑错误。对于其他运算符，为了确保副作用按正确的顺序应用，请将复杂的表达式分解为单独的语句。回想一下`&&`和`||`运营商使用短路评估。如果应始终计算具有副作用的表达式，则将具有副作用的表达式放在`&&`或`||`运算符的右侧是一个逻辑错误。

##### 指数复杂性

关于递归程序，例如我们在这里用于生成斐波那契数的程序，请注意。函数`fibonacci`中的每个递归级别对函数调用的数量都有双倍的影响；即计算第*n个*斐波那契数所需的递归调用数量为2*n*。这很快就失控了。计算第20个斐波那契号码需要220个或大约100万个电话，计算第30个斐波那契号码需要230个或大约10亿个电话，以此类推。计算机科学家称之为**指数复杂度**。随着*n*变得越来越大，这种性质的问题甚至会让世界上最强大的计算机感到谦卑。一般的复杂性问题，特别是指数复杂性，在通常称为算法的高级计算机科学课程中进行了详细讨论。避免使用斐波那契式递归程序，这些程序会导致呼叫的指数“爆炸”。

### 5.20递归与迭代

在前两节中，我们研究了两个递归函数，这两个函数也可以用简单的迭代程序实现。本节比较这两种方法，并讨论为什么在特定情况下您可以选择一种方法而不是另一种方法。

•迭代和递归都基于控制语句：迭代使用迭代语句；递归使用选择语句。

•迭代和递归都涉及迭代：迭代显式使用迭代语句；递归通过重复的函数调用实现迭代。

•迭代和递归都涉及终止测试：当循环继续条件失败时，迭代终止；当基本情况被识别时，递归终止。

•反控迭代和递归逐渐接近终止：迭代修改计数器，直到计数器假设一个值，使循环继续条件失败；递归产生原始问题的更简单版本，直到到达基本情况。

•迭代和递归都可以无限发生：如果循环继续测试永远不会变为假，则迭代会发生无限循环；如果递归步骤没有以在基本情况下收敛的方式在每次递归调用期间减少问题，则会发生无限递归。

##### 迭代阶乘实现

为了说明迭代和递归之间的区别，让我们研究阶乘问题的迭代解决方案（[图5.18](ch05.xhtml#fig5_18)）。第22-24行使用迭代语句，而不是递归解的选择语句（[图](ch05.xhtml#fig5_16)19-24行[）。5.16](ch05.xhtml#fig5_16)）。这两种解决方案都使用终止测试。在递归解中，第19行（[图5.16](ch05.xhtml#fig5_16)）对基本案例进行测试。在迭代解决方案中，第22行（[图5.18](ch05.xhtml#fig5_18)）测试循环继续条件——如果测试失败，循环终止。最后，迭代解决方案没有生成原始问题的更简单版本，而是使用一个经过修改的计数器，直到循环继续条件变成false。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig18)

```
1 // 图05_18.cpp
2 // 迭代函数阶乘。
3 #include <iostream>4 #include <iomanip>5使用命名空间std；6
7个无符号长阶乘（int number）；//函数原型
8
9 int main() {10 // 计算0到10的阶乘
11 for (int counter{0}; counter <= 10; ++counter) {12 cout << setw(2) << counter << "!= " << factorial(counter)
13           << endl;
14 }15 }16
17 // 迭代函数阶乘
18个无符号长阶乘（int数）{19个未签名的长结果{1}；20
21 // 迭代阶乘计算
22 for (int i{number}; i >= 1; --i) {
23        result *= i;                   
24     }                                 
25
26个返回结果；27  }
0! = 1
1! = 1
2! = 2
3! = 6
4! = 24
5! = 120
6! = 720
7! = 5040
8! = 40320
9! = 362880
10! = 3628800
```

**图。5.18** 迭代函数`factorial`。

##### 递归的否定值

递归有负数。它反复调用函数调用的机制，从而调用开销。这在处理器时间和内存空间方面都可能很昂贵。每个递归调用都会导致创建另一个函数变量的副本；这可能会消耗大量内存。迭代通常发生在函数中，因此省略了重复函数调用和额外内存分配的开销。那么，为什么要选择递归呢？

##### 何时选择递归与迭代

![图片](Images/common01.jpg) PERF 任何可以递归解决的问题也可以迭代（非递归）解决。当递归方法更自然地反映问题并导致一个更容易理解和调试的程序时，通常会选择递归方法。选择递归解的另一个原因是，当递归解是递归解时，迭代解可能不明显。如果可能，请避免在性能情况下使用递归。递归通话需要时间并消耗额外的内存。

### 17 5.21 C++17和C++20：`[[nodiscard]]`属性

一些函数返回您不应该忽视的值。例如，[第2.7节](ch02.xhtml#ch02lev1sec7)引入了`empty``string`成员函数。当您想知道`string`是否为空时，您不仅必须调用`empty`，还必须在条件下检查其返回值，例如：

[点击此处查看代码图像](Images/ch05_images.xhtml#f0154-01e)

```
if (s.empty()) {//做点什么，因为字符串s是空的}
```

从C++17开始，`string`的`empty`函数使用`**[[nodiscard]]**`**属性**[20](ch05.xhtml#ch0fn20)声明，以告诉编译器在调用者不使用返回值时发出警告。自C++17以来，许多C++标准库功能都通过`[[nodiscard]]`进行了增强，因此编译器可以帮助您编写正确的代码。

[20。](ch05.xhtml#rch0fn20)ISO/IEC C++20标准文档第9.12.8节。`https://wg21.link/n4849`。

您也可以在自己的函数定义上使用此属性。[图5.19](ch05.xhtml#fig5_19)显示了用`[[nodiscard]]`声明的`cube`函数，您将该函数放在返回类型之前——通常单独放在一行（第4行）。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig19)

```
1 // 图05_19.cpp
2 // C++17 [[nodiscard]]属性。
3
4  [[nodiscard]]
5 int cube(int x) {6返回x * x * x；7  }
8
9 int main() {10立方体（10）；//生成编译器警告
11  }
```

**图。5.19** C++17 `[[nodiscard]]`属性。

第10行调用`cube`，但不使用返回的值。当您编译此程序时，我们的首选编译器会发出以下警告：

• Microsoft Visual C++：`"discarding return value of function with 'nodis-card' attribute"`

• Xcode中的Clang：`"Ignoring return value of function declared with 'nodis-card' attribute`

• GNU C++：`"ignoring return value of 'int cube(int)', declared with attribute nodiscard"`

然而，这些只是警告，所以程序仍然编译和运行。

##### 20 C++20的`[[nodiscard("with reason")]]`属性

C++17的`[[nodiscard]]`属性的一个问题是，它没有提供任何见解，说明为什么您不应该忽略给定函数的返回值。因此，在C++20中，您现在可以包含一条消息[21](ch05.xhtml#ch0fn21)，该消息将作为编译器警告的一部分显示，如：

[21.](ch05.xhtml#rch0fn21)在撰写本文时，此功能尚未实现。

[点击此处查看代码图像](Images/ch05_images.xhtml#f0154-01f)

```
[[nodiscard("深入了解为什么不应忽略返回值")]]
```

### 5.22 Lnfylun Lhqtomh Wjtz Qarcv：Qjwazkrplm xzz Xndmwwqhlz

毫无疑问，您已经注意到，本章的最后目标项目符号、章节大纲中的最后一节名称、第[5.1节](ch05.xhtml#ch05lev1sec1)的最后一句话以及上面的章节标题看起来都像胡言乱语。这些不是错误！在本节中，我们继续我们的对象-自然呈现。您将使用您创建的实现**Vignère密钥密码**的已存在的类的对象方便地加密和解密消息。[22](ch05.xhtml#ch0fn22)

`https://en.wikipedia.org/wiki/Vigen%C3%A8re_cipher`。

在之前的对象自然部分中，您创建了内置C++标准库类`string`的对象和开源库中的类对象。有时，您将使用组织或团队成员构建的类进行内部使用或特定项目。对于这个例子，我们写了自己的类，名为`Cipher`（在标题`"cipher.h"`中），并提供给您。在第10[章](ch10.xhtml#ch10)课程简介中，您将开始构建自己的自定义类。

##### 密码学

![图片](Images/common02.jpg) 安全密码学已经使用了数千年[23,24](ch05.xhtml#ch0fn23)，在当今互联的世界中至关重要。每天，在幕后使用密码学，以确保基于互联网的通信是私密和安全的。例如，大多数网站现在使用HTTPS协议来加密和解密您的网络交互。

`https://en.wikipedia.org/wiki/Cryptography#History_of_cryptography_and_cryptanalysis`。

`https://www.binance.vision/security/history-of-cryptography`。

##### 凯撒密码

朱利叶斯·凯撒使用一个简单的**替换密码**来加密军事通信。[25](ch05.xhtml#ch0fn25)他的技术——后来被称为**凯撒密码**——用字母表中前面的三个字母替换通信中的每个字母。因此，A替换为D，B替换为E，C替换为F，...X替换为A，Y替换为B，Z替换为C。因此，纯文本

```
凯撒密码
```

`https://en.wikipedia.org/wiki/Caesar_cipher`。

将被加密为

```
Fdhvdu Flskhu
```

加密文本被称为**密文**。

要想玩凯撒密码和许多其他密码技术的有趣方式，请查看网站：

```
https://cryptii.com/pipes/caesar-cipher
```

这是开源`cryptii`项目的在线实现：

```
https://github.com/cryptii/cryptii
```

##### Vignère Cipher

像凯撒密码这样的简单替换密码相对容易解密。例如，字母“e”是英语中最常用的字母。因此，您可以研究密文，并极有可能假设最频繁出现的角色可能是“e”。

在本例中，您将使用Vignère密码，这是一种密钥替换密码。Vignère密码使用26个凯撒密码实现——字母表中的每个字母一个。Vignère密码使用纯文本和密钥中的字母来查找各种凯撒密码中的替换字符。您可以阅读有关实施的更多信息，请

```
https://zh.wikipedia.org/wiki/Vigen%C3%A8re_cipher
```

对于这个密码，密钥必须由字母组成。与密码一样，密钥不应该是容易猜测的。在这个例子中，我们使用了11个随机选择的字符

```
XMWUJBVYHXZ
```

您可以在密钥中使用的字符数量没有限制。但是，解密密文的人必须知道最初用于创建密文的秘密密钥。[26 ](ch05.xhtml#ch0fn26)大概，您会提前提供——可能是在面对面的会议上。

[26。](ch05.xhtml#rch0fn26)有许多网站提供Vignère密码解码器，这些解码器试图在没有原始密钥的情况下解密密密文。我们尝试了几次，但没有一个恢复我们的原始文本。

##### 使用我们的`Cipher`类

对于[图](ch05.xhtml#fig5_20)中的例子[。5.20](ch05.xhtml#fig5_20)，您将使用我们的类`Cipher`，它实现了Vigenère密码。本章`ch05`示例文件夹中的标题`"cipher.h"`”（第3行）定义了该类。您无需读取和理解类的代码即可使用其加密和解密功能。与我们所有其他“自然对象”案例研究一样，您只需创建`Cipher`类对象，并调用其`encrypt``decrypt`成员函数来分别加密和解密文本。在后面的一章中，我们将介绍类`Cipher`的实现。

[点击此处查看代码图像](Images/ch05_images.xhtml#aa05fig20)

```
1 // 图15_20.cpp
2 // 使用Vigenère密码加密和解密文本。
3 #include "cipher.h"
4 #include <iostream>5 #include <string>6使用命名空间std；7
8 int main() {9     string plainText;
10 cout << "输入文本进行加密:\n";11     getline(cin, plainText);
12
13     string secretKey;
14 cout << "\n输入密钥:\n";15     getline(cin, secretKey);
16
17     Cipher cipher;
18
19 // 使用 secretKey 加密 plainText
20     string cipherText{cipher.encrypt(plainText, secretKey)};
21 cout << "\nEncrypted:\n " << cipherText << endl;22
23 // 解密密码文本
24 出局 << "\n解密:\n "
25        << cipher.decrypt(cipherText, secretKey) << endl;
26
27 // 解密用户输入的密文
28 cout << "\n输入密文进行破译:\n";29     getline(cin, cipherText);
30 出局 << "\n解密:\n "
31        << cipher.decrypt(cipherText, secretKey) << endl;
32  }
Enter the text to encrypt:
Welcome to Modern C++ application development with C++20!

Enter the secret key:
XMWUJBVYHXZ

Encrypted:
   Tqhwxnz rv Jnaqnh L++ bknsfbxfeiw eztlinmyahc xdro Z++20!

Decrypted:
   Welcome to Modern C++ application development with C++20!

Enter the ciphertext to decipher:
Lnfylun Lhqtomh Wjtz Qarcv: Qjwazkrplm xzz Xndmwwqhlz

Decrypted:
   Objects Natural Case Study: Encryption and Decryption
```

**图。5.20** 使用Vigenère密码加密和解密文本。

##### 类`Cipher`的成员函数

该类提供了两个关键成员函数：

•成员函数`encrypt`接收代表要加密的纯文本和密钥的`string`，使用Vigenère密码加密文本，然后返回包含密文的`string`。

•成员函数`decrypt`接收表示要解密的密文的`string`，反向Vigenère密码解密文本，然后返回包含纯文本的`string`。

该程序首先要求您输入要加密的文本和密钥。第17行创建`Cipher`对象。第20-21行加密您输入的文本并显示加密文本。然后，第24-25行解密文本，以显示您输入的纯文本字符串。

虽然本章中的最后一个目标项目符号，第[5.1节](ch05.xhtml#ch05lev1sec1)的最后一句和本节的标题看起来像胡言乱语，但它们是我们用`Cipher`类和密钥创建的每个密文

```
XMWUJBVYHXZ
```

第28-29行提示并输入现有密文，然后第30-31行解密密文并显示我们加密的原始纯文本。

### 5.23总结

在本章中，我们介绍了函数概念，包括函数原型、函数签名、函数头和函数体。我们概述了C++20、C++17和C++11中添加的数学库函数以及新的数学函数和常量。

您了解了参数强制——将参数强制到函数的参数声明指定的适当类型。我们概述了C++标准库的标题。我们演示了如何使用函数`rand`和`srand`生成可用于模拟的随机数，然后介绍了C++11生成更安全的随机数的非确定性功能。我们引入了C++14的数字分隔符，以获得更可读的大数字文字。我们定义了带有作用域`enum`的常量集，`using enum`声明引入了C++20。

您了解了变量的范围。我们讨论了将参数传递给函数的两种方法——传递值和传递引用。我们展示了如何实现内联函数和接收默认参数的函数。您了解到，重载函数具有相同的名称，但签名不同。这些函数可用于使用不同类型或不同数量的参数执行相同或相似的任务。我们演示了使用函数模板来方便地生成超载函数家族。然后，您研究了递归，其中函数调用自己来解决问题。

我们介绍了C++17的`[[nodiscard]]`属性，用于指示不应忽略函数的返回值，并讨论了C++20的`[[nodiscard]]`增强功能，以指定不应忽略返回值的原因。最后，我们的对象自然案例研究引入了用于加密和解密文本的密钥替换密码。

在第6[章](ch06.xhtml#ch06)中，您将学习如何维护数组和面向对象`vector`中的数据列表和表。您将看到一个更优雅的基于数组的骰子滚动应用程序实现。