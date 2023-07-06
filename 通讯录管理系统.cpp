#include <iostream>
using namespace std;

#define MAX 1000 //通讯录最大人数

//设计联系人结构体
struct Person {
	string m_Name;
	int m_Sex;//性别1男   2女
	int m_Age;
	string m_Phone;
	string m_Addr;
};

//设计通讯录结构体
struct AddressBooks
{
	struct Person arr[MAX];

	int m_Size;//通讯录当前人数

};

//1、添加联系人
void addPerson(AddressBooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		cout << "请输入联系人姓名" << endl;
		cin >> abs->arr[abs->m_Size].m_Name;
		cout << "请输入联系人性别:男 1 \t 女 2" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->arr[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入错误，请重新输入" << endl;
		}
	
		cout << "请输入联系人年龄" << endl;
		cin >> abs->arr[abs->m_Size].m_Age;
		cout << "请输入联系人电话号" << endl;
		cin >> abs->arr[abs->m_Size].m_Phone;
		cout << "请输入联系人地址" << endl;
		cin >> abs->arr[abs->m_Size].m_Addr;
		abs->m_Size++;

		cout << "添加联系人成功" << endl;
		system("pause"); //按任意键继续
		system("cls");//清屏
	}
}

//2、显示联系人
void printPersonInfo(AddressBooks abs[]) {
	if (abs->m_Size > 0)
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "联系人" << i+1 << "\t";
			cout << "姓名：" << abs->arr[i].m_Name << "\t";
			cout <<"性别：" << (abs->arr[i].m_Sex==1?"男":"女") << "\t";
			cout <<"年龄：" << abs->arr[i].m_Age << "\t";
			cout <<"电话号：" << abs->arr[i].m_Phone << "\t";
			cout <<"地址：" << abs->arr[i].m_Addr << endl;
		}
	}
	else
	{
		cout << "当前通讯录没有联系人" << endl;
		system("pause"); //按任意键继续
		system("cls");//清屏
	}
	system("pause"); //按任意键继续
	system("cls");//清屏

}

//检测联系人是否存在
int isExist(AddressBooks abs[], string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->arr->m_Name == name)
		{
			return i;
		}
	
	}
	return -1;
}

//3、删除联系人
void deletePerson(AddressBooks abs[], int num)
{
	for (int i = num ;i < abs->m_Size; i++)
	{
		abs->arr[i] = abs->arr[i + 1];
	}
	abs->m_Size--;
	cout << "删除成功" << endl;
}

//4、查找联系人
void getPerson(AddressBooks abs[], int num)
{
	cout << "联系人" << num << "\t";
	cout << "姓名：" << abs->arr[num].m_Name << "\t";
	cout << "性别：" << (abs->arr[num].m_Sex == 1 ? "男" : "女") << "\t";
	cout << "年龄：" << abs->arr[num].m_Age << "\t";
	cout << "电话号：" << abs->arr[num].m_Phone << "\t";
	cout << "地址：" << abs->arr[num].m_Addr << endl;
}

//5、修改联系人
void updatePerson(AddressBooks abs[], int num)
{
	cout << "请输入联系人姓名" << endl;
	cin >> abs->arr[num].m_Name;
	cout << "请输入联系人性别:男 1 \t 女 2" << endl;
	int sex = 0;
	while (true)
	{
		cin >> sex;
		if (sex == 1 || sex == 2) {
			abs->arr[num].m_Sex = sex;
			break;
		}
		cout << "输入错误，请重新输入" << endl;
	}

	cout << "请输入联系人年龄" << endl;
	cin >> abs->arr[num].m_Age;
	cout << "请输入联系人电话号" << endl;
	cin >> abs->arr[num].m_Phone;
	cout << "请输入联系人地址" << endl;
	cin >> abs->arr[num].m_Addr;
	cout << "修改联系人成功" << endl;
}

//6、清空联系人
void clearPerson(AddressBooks abs[])
{
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}
//菜单界面
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
	cout << "************************" << endl;
}

int main()
{
	AddressBooks abs;//创建通讯录结构体变量
	abs.m_Size = 0;//初始化当前通讯录联系人个数

	int select = 0;
	while (true)
	{
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1: //添加联系人
			addPerson(&abs);//利用地址传递可以修改实参
			break;
		case 2: //显示联系人
			printPersonInfo(&abs);
			break;
		case 3: //删除联系人
		{
			cout << "请输入联系人姓名" << endl;
			string name;
			cin >> name;
			int flag = isExist(&abs, name);
			if (flag == -1)
			{
				cout << "查无此人"<<endl;
			}	
			else
			{
				cout << "找到此人"<<endl;
				deletePerson(&abs, flag);
			}
			system("pause");
			system("cls");
			break;
		}
		case 4: //查找联系人
		{
			cout << "请输入联系人姓名" << endl;
			string name;
			cin >> name;
			int flag = isExist(&abs, name);
			if (flag == -1)
			{
				cout << "查无此人" << endl;
			}
			else
			{
				cout << "找到此人" << endl;
				getPerson(&abs, flag);
			}
			system("pause");
			system("cls");
			break;
		}
		case 5: //修改联系人
		{
			cout << "请输入修改的联系人姓名" << endl;
			string name;
			cin >> name;
			int flag = isExist(&abs, name);
			if (flag == -1)
			{
				cout << "查无此人" << endl;
			}
			else
			{
				cout << "找到此人" << endl;
				updatePerson(&abs, flag);
			}
			system("pause");
			system("cls");
			break;
		}
		case 6: //清空联系人
			clearPerson(&abs);
			break;
		case 0: //退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	
	return 0;

}