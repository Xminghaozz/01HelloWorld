#include <iostream>
using namespace std;

//C++֧�ֵ����ֻ����ĳ������нṹ��˳��ṹ��ѡ��ṹ��ѭ���ṹ
int main() {

	int score = 0;
	cout << "������߿��ɼ�" << endl;
	cin >> score;
	cout << "�߿��ɼ�Ϊ��" << score << endl;

	if (score > 600) {
		cout << "��һ��" << endl;
		if (score > 650) {
			cout << "���廪" << endl;
		}
		else
		{
			cout << "�ϱ���" << endl;
		}
	}
	else if(score>500)
	{
		cout << "�ϳɶ���Ϣ���̴�ѧ" << endl;
	}
	else
	{
		cout << "��ר��" << endl;
	}

	int a = 200;
	int b = 100;
	int c = 0;
	c = a > b ? a : b;//��Ŀ����������a>b��name��a��ֵ����c����֮��b��ֵ����C
	cout << "c=" << c << endl;
	//��C++����Ŀ��������ص�ֵ��һ�������������Լ�����ֵ
	(a > b ? a : b) = 300;
	cout << "a=" << a << endl;

		//�����Ӱ���� 
		//10 ~ 9   ����   
		// 8 ~ 7   �ǳ���
		// 6 ~ 5   һ��
		// 5������ ��Ƭ

		int score1 = 0;
		cout << "�����Ӱ���" << endl;
		cin >> score1;

		switch (score1)
		{
		case 10:
		case 9:
			cout << "����" << endl;
			break;
		case 8:
			cout << "�ǳ���" << endl;
			break;
		case 7:
		case 6:
			cout << "һ��" << endl;
			break;
		default:
			cout << "��Ƭ" << endl;
			break;
		}

	//if��switch������
	//switchȱ�㣺ֻ���ж������ͻ����ַ��ͣ���������һ������
	//switch�ŵ㣺�ṹ������Ч�ʸ�

		//whileѭ���ṹ
		int num = rand() % 100;
		cout << "num=" << num << endl;
		int put = 0;
		cout << "��²������num��ֵ" << endl;
		while ((cin>>put))
		{
			if (put > num) {
				cout << "�´���" << endl;
			}

			else if (put < num) {
				cout << "��С��" << endl;
			}

			else break;
		}

		//��>0��<1000��ˮ�ɻ���
		int wgf = 100;
		cout << "ˮ�ɻ�����" ;
		do
		{
			int wgf1 = wgf / 100;
			int wgf2 = (wgf - wgf1 * 100) / 10;
			int wgf3 = wgf - wgf1*100 - wgf2 * 10;
			int wgf4 = wgf1 * wgf1 * wgf1 + wgf2 * wgf2 * wgf2 + wgf3 * wgf3 * wgf3;
			if (wgf == wgf4) {
				cout << wgf << "��" ;
			}
			wgf++;
		} while (wgf < 1000);
		cout << endl;

		//��1-100��7�ı��������߸�λ��ʮλ����7������
		int desk = 1;
		for (desk = 1; desk < 101; desk++) {
			if ((desk % 7) == 0) {
				cout << desk << "��";
			}
			else if ((desk%10)==7)
			{
				cout << desk << "��";
			}
			else if (desk / 10 == 7) {
				cout << desk << "��";
			}
		}
		cout << endl;

		//��ӡ�˷��ھ���
		for (int i = 1; i < 10; i++) {
			cout << endl;
			for (int j = 1; j < i + 1; j++) {
				cout << j << "*" << i << "=" << i * j << " ";
			}
		}

		cout << endl;
		for (int k = 1; k < 100; k++) {
			if (k % 2 == 0) {
				continue;
			}
			cout << k<<" ";
		}
		cout << endl;

		cout << "1" << endl;

		goto FLAG;

		cout << "2" << endl;
		cout << "3" << endl;
		cout << "4" << endl;

	FLAG:

		cout << "5" << endl;
}