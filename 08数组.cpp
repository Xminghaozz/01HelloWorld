#include <iostream>
using namespace std;

int main() {

	int arr1[2];
	arr1[0] = 0;
	arr1[1] = 1;
	//cout << arr1[0];
	//cout << arr1[1];
	int arr2[2] = { 1, 2 };
	//cout << arr2[0] << arr2[1];
	int arr3[] = { 1, 2, 3, 4, 5 };
	/*for (int i = 0; i < 5; i++) {
		cout << arr3[i] << endl;
	}*/
	/*cout << "����ռ���ڴ�ռ��СΪ" << sizeof(arr3) << endl;
	cout << "������׵�ַΪ" << arr3 << endl;
	cout << "�����һ��Ԫ�صĵ�ַΪ" << &arr3[0] << endl;*/
	int arr4[5] = { 100, 200, 150, 300, 268 };
	int weight = 0;
	/*for (int i = 0; i < 5; i++) {
		if (arr4[i] > weight) {
			weight = arr4[i];
		}
	}*/
	//cout << "���ص�����Ϊ" << weight << endl;
	//����Ԫ������
	//int temp = 0;
	//int start = 0;
	//int end = sizeof(arr4)/sizeof(arr4[0]) - 1;
	//while (start < end) {
	//	temp = arr4[end];
	//	arr4[end] = arr4[start];
	//	arr4[start] = temp;
	//	start++;
	//	end--;
	//}
	//cout << arr4[0] << arr4[2] << arr4[4];

	/*for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5 - i - 1; j++) {
			if (arr4[j] < arr4[j+1]) {
				int temp = arr4[j];
				arr4[j] = arr4[j+1];
				arr4[j+1] = temp;
			}
		}
	}
	cout << arr4[0] << arr4[4] << endl;*/
	int score[3][3] = { {60,50,40},{10,20,30},{70,80,90} };
	//cout << "��ά������ռ���ڴ�ռ�Ϊ" << sizeof(score) << endl;
	//cout << "��ά�����һ��ռ�õ��ڴ�ռ�" << sizeof(score[0]) << endl;
	//cout << "��ά����ĵ�ַΪ" << score << "\n��ά�������е�ַΪ" << score[0] << "\n��ά�����׵�ַΪ" << score <<endl;
	//for (int i = 0; i < 3; i++) {
	// int temp = 0;
	//	for (int j = 0; j < 3; j++) {
	//		temp = score[i][j];
	//	}
	// cout<<temp;
	//}


}