#include <iostream>
using namespace std;

#define MAX 1000 //ͨѶ¼�������

//�����ϵ�˽ṹ��
struct Person {
	string m_Name;
	int m_Sex;//�Ա�1��   2Ů
	int m_Age;
	string m_Phone;
	string m_Addr;
};

//���ͨѶ¼�ṹ��
struct AddressBooks
{
	struct Person arr[MAX];

	int m_Size;//ͨѶ¼��ǰ����

};

//1�������ϵ��
void addPerson(AddressBooks* abs)
{
	if (abs->m_Size == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		cout << "��������ϵ������" << endl;
		cin >> abs->arr[abs->m_Size].m_Name;
		cout << "��������ϵ���Ա�:�� 1 \t Ů 2" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->arr[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "�����������������" << endl;
		}
	
		cout << "��������ϵ������" << endl;
		cin >> abs->arr[abs->m_Size].m_Age;
		cout << "��������ϵ�˵绰��" << endl;
		cin >> abs->arr[abs->m_Size].m_Phone;
		cout << "��������ϵ�˵�ַ" << endl;
		cin >> abs->arr[abs->m_Size].m_Addr;
		abs->m_Size++;

		cout << "�����ϵ�˳ɹ�" << endl;
		system("pause"); //�����������
		system("cls");//����
	}
}

//2����ʾ��ϵ��
void printPersonInfo(AddressBooks abs[]) {
	if (abs->m_Size > 0)
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "��ϵ��" << i+1 << "\t";
			cout << "������" << abs->arr[i].m_Name << "\t";
			cout <<"�Ա�" << (abs->arr[i].m_Sex==1?"��":"Ů") << "\t";
			cout <<"���䣺" << abs->arr[i].m_Age << "\t";
			cout <<"�绰�ţ�" << abs->arr[i].m_Phone << "\t";
			cout <<"��ַ��" << abs->arr[i].m_Addr << endl;
		}
	}
	else
	{
		cout << "��ǰͨѶ¼û����ϵ��" << endl;
		system("pause"); //�����������
		system("cls");//����
	}
	system("pause"); //�����������
	system("cls");//����

}

//�����ϵ���Ƿ����
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

//3��ɾ����ϵ��
void deletePerson(AddressBooks abs[], int num)
{
	for (int i = num ;i < abs->m_Size; i++)
	{
		abs->arr[i] = abs->arr[i + 1];
	}
	abs->m_Size--;
	cout << "ɾ���ɹ�" << endl;
}

//4��������ϵ��
void getPerson(AddressBooks abs[], int num)
{
	cout << "��ϵ��" << num << "\t";
	cout << "������" << abs->arr[num].m_Name << "\t";
	cout << "�Ա�" << (abs->arr[num].m_Sex == 1 ? "��" : "Ů") << "\t";
	cout << "���䣺" << abs->arr[num].m_Age << "\t";
	cout << "�绰�ţ�" << abs->arr[num].m_Phone << "\t";
	cout << "��ַ��" << abs->arr[num].m_Addr << endl;
}

//5���޸���ϵ��
void updatePerson(AddressBooks abs[], int num)
{
	cout << "��������ϵ������" << endl;
	cin >> abs->arr[num].m_Name;
	cout << "��������ϵ���Ա�:�� 1 \t Ů 2" << endl;
	int sex = 0;
	while (true)
	{
		cin >> sex;
		if (sex == 1 || sex == 2) {
			abs->arr[num].m_Sex = sex;
			break;
		}
		cout << "�����������������" << endl;
	}

	cout << "��������ϵ������" << endl;
	cin >> abs->arr[num].m_Age;
	cout << "��������ϵ�˵绰��" << endl;
	cin >> abs->arr[num].m_Phone;
	cout << "��������ϵ�˵�ַ" << endl;
	cin >> abs->arr[num].m_Addr;
	cout << "�޸���ϵ�˳ɹ�" << endl;
}

//6�������ϵ��
void clearPerson(AddressBooks abs[])
{
	abs->m_Size = 0;
	cout << "ͨѶ¼�����" << endl;
	system("pause");
	system("cls");
}
//�˵�����
void showMenu()
{
	cout << "************************" << endl;
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
	cout << "************************" << endl;
}

int main()
{
	AddressBooks abs;//����ͨѶ¼�ṹ�����
	abs.m_Size = 0;//��ʼ����ǰͨѶ¼��ϵ�˸���

	int select = 0;
	while (true)
	{
		showMenu();

		cin >> select;
		switch (select)
		{
		case 1: //�����ϵ��
			addPerson(&abs);//���õ�ַ���ݿ����޸�ʵ��
			break;
		case 2: //��ʾ��ϵ��
			printPersonInfo(&abs);
			break;
		case 3: //ɾ����ϵ��
		{
			cout << "��������ϵ������" << endl;
			string name;
			cin >> name;
			int flag = isExist(&abs, name);
			if (flag == -1)
			{
				cout << "���޴���"<<endl;
			}	
			else
			{
				cout << "�ҵ�����"<<endl;
				deletePerson(&abs, flag);
			}
			system("pause");
			system("cls");
			break;
		}
		case 4: //������ϵ��
		{
			cout << "��������ϵ������" << endl;
			string name;
			cin >> name;
			int flag = isExist(&abs, name);
			if (flag == -1)
			{
				cout << "���޴���" << endl;
			}
			else
			{
				cout << "�ҵ�����" << endl;
				getPerson(&abs, flag);
			}
			system("pause");
			system("cls");
			break;
		}
		case 5: //�޸���ϵ��
		{
			cout << "�������޸ĵ���ϵ������" << endl;
			string name;
			cin >> name;
			int flag = isExist(&abs, name);
			if (flag == -1)
			{
				cout << "���޴���" << endl;
			}
			else
			{
				cout << "�ҵ�����" << endl;
				updatePerson(&abs, flag);
			}
			system("pause");
			system("cls");
			break;
		}
		case 6: //�����ϵ��
			clearPerson(&abs);
			break;
		case 0: //�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	
	return 0;

}