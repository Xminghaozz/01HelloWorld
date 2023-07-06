#include <iostream>
using namespace std;

//C++支持的三种基本的程序运行结构：顺序结构、选择结构、循环结构
int main() {

	int score = 0;
	cout << "请输入高考成绩" << endl;
	cin >> score;
	cout << "高考成绩为：" << score << endl;

	if (score > 600) {
		cout << "上一本" << endl;
		if (score > 650) {
			cout << "上清华" << endl;
		}
		else
		{
			cout << "上北大" << endl;
		}
	}
	else if(score>500)
	{
		cout << "上成都信息工程大学" << endl;
	}
	else
	{
		cout << "上专科" << endl;
	}

	int a = 200;
	int b = 100;
	int c = 0;
	c = a > b ? a : b;//三目运算符，如果a>b，name将a的值赋给c，反之将b的值赋给C
	cout << "c=" << c << endl;
	//在C++中三目运算符返回的值是一个变量，还可以继续赋值
	(a > b ? a : b) = 300;
	cout << "a=" << a << endl;

		//请给电影评分 
		//10 ~ 9   经典   
		// 8 ~ 7   非常好
		// 6 ~ 5   一般
		// 5分以下 烂片

		int score1 = 0;
		cout << "请给电影打分" << endl;
		cin >> score1;

		switch (score1)
		{
		case 10:
		case 9:
			cout << "经典" << endl;
			break;
		case 8:
			cout << "非常好" << endl;
			break;
		case 7:
		case 6:
			cout << "一般" << endl;
			break;
		default:
			cout << "烂片" << endl;
			break;
		}

	//if和switch的区别？
	//switch缺点：只能判断是整型或者字符型，不可以是一个区间
	//switch优点：结构清晰，效率高

		//while循环结构
		int num = rand() % 100;
		cout << "num=" << num << endl;
		int put = 0;
		cout << "请猜测随机数num的值" << endl;
		while ((cin>>put))
		{
			if (put > num) {
				cout << "猜大了" << endl;
			}

			else if (put < num) {
				cout << "猜小了" << endl;
			}

			else break;
		}

		//求>0且<1000的水仙花数
		int wgf = 100;
		cout << "水仙花数：" ;
		do
		{
			int wgf1 = wgf / 100;
			int wgf2 = (wgf - wgf1 * 100) / 10;
			int wgf3 = wgf - wgf1*100 - wgf2 * 10;
			int wgf4 = wgf1 * wgf1 * wgf1 + wgf2 * wgf2 * wgf2 + wgf3 * wgf3 * wgf3;
			if (wgf == wgf4) {
				cout << wgf << "、" ;
			}
			wgf++;
		} while (wgf < 1000);
		cout << endl;

		//求1-100中7的倍数，或者个位和十位含有7的数字
		int desk = 1;
		for (desk = 1; desk < 101; desk++) {
			if ((desk % 7) == 0) {
				cout << desk << "、";
			}
			else if ((desk%10)==7)
			{
				cout << desk << "、";
			}
			else if (desk / 10 == 7) {
				cout << desk << "、";
			}
		}
		cout << endl;

		//打印乘法口诀表
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