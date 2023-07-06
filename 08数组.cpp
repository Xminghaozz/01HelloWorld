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
	/*cout << "数组占用内存空间大小为" << sizeof(arr3) << endl;
	cout << "数组的首地址为" << arr3 << endl;
	cout << "数组第一个元素的地址为" << &arr3[0] << endl;*/
	int arr4[5] = { 100, 200, 150, 300, 268 };
	int weight = 0;
	/*for (int i = 0; i < 5; i++) {
		if (arr4[i] > weight) {
			weight = arr4[i];
		}
	}*/
	//cout << "最重的体重为" << weight << endl;
	//数组元素逆置
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
	//cout << "二维数组所占的内存空间为" << sizeof(score) << endl;
	//cout << "二维数组第一行占用的内存空间" << sizeof(score[0]) << endl;
	//cout << "二维数组的地址为" << score << "\n二维数组首行地址为" << score[0] << "\n二维数组首地址为" << score <<endl;
	//for (int i = 0; i < 3; i++) {
	// int temp = 0;
	//	for (int j = 0; j < 3; j++) {
	//		temp = score[i][j];
	//	}
	// cout<<temp;
	//}


}