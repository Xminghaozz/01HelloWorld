#include <iostream>
using namespace std;

//����ѧ���ṹ��
struct Student
{
	string name;
	int score;
};

//������ʦ�ṹ��
struct Teacher
{
	string tName;
	Student sArr[5];
};

//����ʦ��ѧ����ֵ
void allocateSpace(Teacher tArr[], int len) {
	string nameSpeed = "ABCDE";
	for (int i = 0; i < len ; i++)
	{
		tArr[i].tName = "Teacher_";
		tArr[i].tName += nameSpeed[i];
		cout << "������ѧ���ɼ���" << endl;
		for (int j = 0; j < 5; j++)
		{
			tArr[i].sArr[j].name = "Student_";
			tArr[i].sArr[j].name += nameSpeed[j];

			int score = 0;
			int random = rand() % 61 + 40;
			tArr[i].sArr[j].score = random;
		}
	}
}

void printInfo(Teacher tArr[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ������" << tArr[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ��������" << tArr[i].sArr[j].name << "����" << tArr[i].sArr[j].score << endl;
		}
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL));
	Teacher tArr[3];
	int len = sizeof(tArr) / sizeof(tArr[0]);
	allocateSpace(tArr, len);
	printInfo(tArr, len);

	return 0;
}