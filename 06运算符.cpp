#include <iostream>
using namespace std;

int main() {

	//�Ӽ��˳�
	int a = 0;
	int b = 0;
	
	cout << "����������a��b��ֵ" << endl;
	cin >> a>>b;
	cout << "a+b=" << (a + b) << endl;
	cout << "a-b=" << (a  -  b) << endl;
	cout << "a*b=" << (a  *  b) << endl;
	cout << "a/b=" << (a  /  b) << endl;

	//ȡģ���ࣩ���� ������
	cout << "a%b=" << (a % b) << endl;

	//�����ݼ�����
	int c = 2;
	int d = ++c;
	cout << "ǰ��d=" << d << endl;
	int e = 2;
	int f = e++;
	cout << "����f=" << f << endl;

	//��ֵ�����
	a += 2;
	cout << "a=" << a << endl;
	a -= 2;
	cout << "a=" << a <<endl;
	a *= 2;
	cout << "a=" << a << endl;
	a /= 2;
	cout << "a=" << a << endl;

	//�Ƚ������ ���ڱ��ʽ�ıȽϣ�����һ����ֵ���ֵ
	cout << "a==b:" << (a == b) << endl;
	cout << "a!=b:" << (a != b) << endl;
	cout << "a<b:" << (a < b) << endl;
	cout << "a>b:" << (a > b) << endl;

	//�߼������
	int g = 2;
	int h = 0;
	//��C++�г���0��Ϊ��
	cout << "!g=" << !g << endl;
	cout << "!!g=" << !!g << endl;
	cout << "h&&g=" << (h&&g) << endl;
	cout << "h||g=" << (h||g) << endl;







}