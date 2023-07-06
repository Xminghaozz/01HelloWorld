#include <iostream>
using namespace std;

void swap(int* num1, int* num2);

void bubbleSort(int* arr1, int length)
{
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - i - 1; j++) 
		{
			if (arr1[j] < arr1[j + 1]) 
			{
				int temp = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = temp;

			}
		}
	}

}

void printArr(int arr1[], int length) {

	for (int i = 0; i < length ; i++) {
		cout << arr1[i] << endl;
	}
}

int main() {

	int a = 10;

	//指针定义语法：数据类型 *变量名；
	//int* p;
	// 赋值，指针指向变量a的地址
	//p = &a;
	int* p = &a;
	cout << "a的地址" << &a << endl;
	cout << "指针p指向的地址" << p << endl;

	//指针的使用,通过 * (解引用)操作指针变量指向的内存
	cout << "*p=" << *p << endl;
	//通过指针间接修改指向a的内存中的值
	*p = 100;
	cout << "*p=" << *p << "\na=" << a << endl;

	//指针所占的内存空间
	//64位操作系统指针都占8个字节，32位操作系统都占4个字节
	cout << *p << endl; //* 解引用
	cout << sizeof(p) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;

	//空指针：指针变量指向内存中编号为0的空间

	//	用途：初始化指针变量

	//	注意：空指针指向的内存是不可以访问的

	//指针变量p指向内存地址编号为0的空间
	int* p0 = NULL;

	//访问空指针报错 
	//内存编号0 ~255为系统占用内存，不允许用户访问
	//cout << *p0 << endl;


	//指针变量p指向内存地址编号为0x1100的空间
	int* p2 = (int*)0x1100;

	//访问野指针报错 ，在程序中要尽量避免这种情况
	// 空指针和野指针都不是我们自己申请的空间，因此不要访问
	//cout << *p2 << endl;

	//const修饰指针有三种情况

	//	const修饰指针 — 常量指针
	//	const修饰常量 — 指针常量
	//	const既修饰指针，又修饰常量
	int b1 = 10;
	int c = 20;
	const int *p3 = &b1;//常量指针，指针指向p3可以改，指针指向的值*p3不能改
	p3 = &c;
	cout << "*p3的值为" << *p3 <<endl;

	int* const p4 = &b1;//指针常量，指针指向p4不能改，指针指向的值*p4可以改
	*p4 = c;
	cout << "*p4的值为" << *p4 << endl;

	const int* const p5 = &b1;//const既修饰指针，又修饰常量，都不能改

	//利用指针遍历数组
	int arr[5] = { 1,2,3,4,5 };
	int *p6 = arr;//数组名arr就是数组的地址
	for (int i = 0; i < 5; i++) {
		cout << *p6 << endl;
		p6++;
	}

	//指针和函数
	int d = 5;
	int e = 10;
	swap(&d, &e);
	cout << "d=" << d << "\ne=" << e << endl;
	//总结：如果不想修改实参，就用值传递，如果想修改实参，就用地址传递

	int arr1[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int length = sizeof(arr1) / sizeof(int);
	bubbleSort(arr1, length);
	printArr(arr1, length);

	return 0;

}

void swap(int* num1, int* num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}