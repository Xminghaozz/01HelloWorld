#include "swap.h"

//函数的调用
//功能：使用定义好的函数
//
//语法 : 函数名(参数)
//
//值传递
//就是函数调用时将参数值传给形参
//值传递时，如果形参发生变化，并不会影响到实参
//函数的常见样式
//无参无返、有参无返、无参有返、有参有返
//函数的声明
//作用：告诉编译器函数名称及如何调用函数。函数的实际主体可以单独定义。
//
//函数的声明可以有很多次，定义只能有一次。

//函数的分文件编写
//作用：让代码结构更加清晰
//
//函数分文件编写一般有4个步骤
//
//创建后缀名为.h的头文件
//创建后缀名为.cpp的源文件
//在头文件中写函数的声明
//在源文件中写函数的定义

//声明
int add(int num1, int num2);


int main() {

	int sum = add(2, 3);
	cout << sum << endl;
	swap(1, 2);

}

int add(int num1, int num2) {

	int sum = num1 + num2;
	return sum;

}

void swap(int a, int b) {
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << "\nb=" << b << endl;
}

