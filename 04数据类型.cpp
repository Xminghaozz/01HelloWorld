#include <iostream>
using namespace std;

//�������ʹ��ڵ����壺����ͬ���͵ı���������ʵ��ڴ�ռ�
//sizeof��������ͳ���������ͻ��߱�����ռ�ռ�Ĵ�С
int main() {

	int a = 10;
	cout << "int���͵ı�����ռ�ռ�Ϊ" << sizeof(int) << "���ֽ�" << endl;

	float b = 3.1234567f;
	double d1 = 1.123456789012345;
	char c = 'a';//�ַ��ͱ����õ����š���������ֻ����һ���ַ������������ַ�����
	cout << "double���͵ı�����ռ�ռ�Ϊ" << sizeof(d1) << "���ֽ�" << endl;
	cout <<d1<< endl;
	cout << "float���͵ı�����ռ�ռ�Ϊ" << sizeof(b) << "���ֽ�" << endl;
	cout << "char���͵ı�����ռ�ռ�Ϊ" << sizeof(c) << "���ֽ�" << endl;

	c = 65;//����ֱ����ASCII����ַ��ͱ�����ֵ
	cout << c << endl;

	string e = "hello world";
	cout << e << endl;

	bool flag = false;
	cout << flag << endl;

	cout << _MSVC_LANG << endl;

	return 0;
}