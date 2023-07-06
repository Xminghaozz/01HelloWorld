#include <iostream>
using namespace std;

//数据类型存在的意义：给不同类型的变量分配合适的内存空间
//sizeof方法可以统计数据类型或者变量所占空间的大小
int main() {

	int a = 10;
	cout << "int类型的变量所占空间为" << sizeof(int) << "个字节" << endl;

	float b = 3.1234567f;
	double d1 = 1.123456789012345;
	char c = 'a';//字符型变量用单引号。单引号内只能有一个字符，不可以是字符串。
	cout << "double类型的变量所占空间为" << sizeof(d1) << "个字节" << endl;
	cout <<d1<< endl;
	cout << "float类型的变量所占空间为" << sizeof(b) << "个字节" << endl;
	cout << "char类型的变量所占空间为" << sizeof(c) << "个字节" << endl;

	c = 65;//可以直接用ASCII码给字符型变量赋值
	cout << c << endl;

	string e = "hello world";
	cout << e << endl;

	bool flag = false;
	cout << flag << endl;

	cout << _MSVC_LANG << endl;

	return 0;
}