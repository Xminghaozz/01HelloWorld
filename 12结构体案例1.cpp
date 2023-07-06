#include <iostream>
using namespace std;

//定义学生结构体
struct Student
{
	string name;
	int score;
};

//定义老师结构体
struct Teacher
{
	string tName;
	Student sArr[5];
};

//给老师和学生赋值
void allocateSpace(Teacher tArr[], int len) {
	string nameSpeed = "ABCDE";
	for (int i = 0; i < len ; i++)
	{
		tArr[i].tName = "Teacher_";
		tArr[i].tName += nameSpeed[i];
		cout << "请输入学生成绩：" << endl;
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
		cout << "老师的姓名" << tArr[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生的姓名" << tArr[i].sArr[j].name << "分数" << tArr[i].sArr[j].score << endl;
		}
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	Teacher tArr[3];
	int len = sizeof(tArr) / sizeof(tArr[0]);
	allocateSpace(tArr, len);
	printInfo(tArr, len);

	return 0;
}