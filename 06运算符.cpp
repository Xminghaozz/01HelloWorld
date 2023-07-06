#include <iostream>
using namespace std;

int main() {

	//加减乘除
	int a = 0;
	int b = 0;
	
	cout << "请输入整数a、b的值" << endl;
	cin >> a>>b;
	cout << "a+b=" << (a + b) << endl;
	cout << "a-b=" << (a  -  b) << endl;
	cout << "a*b=" << (a  *  b) << endl;
	cout << "a/b=" << (a  /  b) << endl;

	//取模（余）运算 求余数
	cout << "a%b=" << (a % b) << endl;

	//递增递减运算
	int c = 2;
	int d = ++c;
	cout << "前置d=" << d << endl;
	int e = 2;
	int f = e++;
	cout << "后置f=" << f << endl;

	//赋值运算符
	a += 2;
	cout << "a=" << a << endl;
	a -= 2;
	cout << "a=" << a <<endl;
	a *= 2;
	cout << "a=" << a << endl;
	a /= 2;
	cout << "a=" << a << endl;

	//比较运算符 用于表达式的比较，返回一个真值或假值
	cout << "a==b:" << (a == b) << endl;
	cout << "a!=b:" << (a != b) << endl;
	cout << "a<b:" << (a < b) << endl;
	cout << "a>b:" << (a > b) << endl;

	//逻辑运算符
	int g = 2;
	int h = 0;
	//在C++中除了0都为真
	cout << "!g=" << !g << endl;
	cout << "!!g=" << !!g << endl;
	cout << "h&&g=" << (h&&g) << endl;
	cout << "h||g=" << (h||g) << endl;







}