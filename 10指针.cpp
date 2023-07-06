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

	//ָ�붨���﷨���������� *��������
	//int* p;
	// ��ֵ��ָ��ָ�����a�ĵ�ַ
	//p = &a;
	int* p = &a;
	cout << "a�ĵ�ַ" << &a << endl;
	cout << "ָ��pָ��ĵ�ַ" << p << endl;

	//ָ���ʹ��,ͨ�� * (������)����ָ�����ָ����ڴ�
	cout << "*p=" << *p << endl;
	//ͨ��ָ�����޸�ָ��a���ڴ��е�ֵ
	*p = 100;
	cout << "*p=" << *p << "\na=" << a << endl;

	//ָ����ռ���ڴ�ռ�
	//64λ����ϵͳָ�붼ռ8���ֽڣ�32λ����ϵͳ��ռ4���ֽ�
	cout << *p << endl; //* ������
	cout << sizeof(p) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;

	//��ָ�룺ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�

	//	��;����ʼ��ָ�����

	//	ע�⣺��ָ��ָ����ڴ��ǲ����Է��ʵ�

	//ָ�����pָ���ڴ��ַ���Ϊ0�Ŀռ�
	int* p0 = NULL;

	//���ʿ�ָ�뱨�� 
	//�ڴ���0 ~255Ϊϵͳռ���ڴ棬�������û�����
	//cout << *p0 << endl;


	//ָ�����pָ���ڴ��ַ���Ϊ0x1100�Ŀռ�
	int* p2 = (int*)0x1100;

	//����Ұָ�뱨�� ���ڳ�����Ҫ���������������
	// ��ָ���Ұָ�붼���������Լ�����Ŀռ䣬��˲�Ҫ����
	//cout << *p2 << endl;

	//const����ָ�����������

	//	const����ָ�� �� ����ָ��
	//	const���γ��� �� ָ�볣��
	//	const������ָ�룬�����γ���
	int b1 = 10;
	int c = 20;
	const int *p3 = &b1;//����ָ�룬ָ��ָ��p3���Ըģ�ָ��ָ���ֵ*p3���ܸ�
	p3 = &c;
	cout << "*p3��ֵΪ" << *p3 <<endl;

	int* const p4 = &b1;//ָ�볣����ָ��ָ��p4���ܸģ�ָ��ָ���ֵ*p4���Ը�
	*p4 = c;
	cout << "*p4��ֵΪ" << *p4 << endl;

	const int* const p5 = &b1;//const������ָ�룬�����γ����������ܸ�

	//����ָ���������
	int arr[5] = { 1,2,3,4,5 };
	int *p6 = arr;//������arr��������ĵ�ַ
	for (int i = 0; i < 5; i++) {
		cout << *p6 << endl;
		p6++;
	}

	//ָ��ͺ���
	int d = 5;
	int e = 10;
	swap(&d, &e);
	cout << "d=" << d << "\ne=" << e << endl;
	//�ܽ᣺��������޸�ʵ�Σ�����ֵ���ݣ�������޸�ʵ�Σ����õ�ַ����

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