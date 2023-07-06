#include <iostream>
using namespace std;

//常量的定义方式
//#define宏常量	
//const 修饰的变量 都不可以再修改常量的值

#define Day 7
int main(){

	cout << "一周有" << Day << "天" << endl;

	const int month = 12;

	cout << "一年有" << month << "个月" << endl;

	return 0;
}
