#include <iostream>
using namespace std;

//�ṹ��Ķ����ʹ��
//�﷨��struct �ṹ����{ �ṹ���Ա�б� }��

struct Student
{
	//��Ա�����б�
	string name;
	int age;
	int score;
}stu3;

struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu2;
};

//ֵ����
void printStu2(Student stu2) {
	cout << "������" << stu2.name << " ���䣺" << stu2.age << " ������" << stu2.score << endl;
}
//��ַ���ݣ����������βθ�Ϊָ�룬���Խ�ʡ�ڴ�ռ䣬���Ҳ��Ḵ���µĸ���
void printStu3(const Student *p) {
	//p->age = 80;ָ��ǰ����const��һ�����޸Ĳ����ͻᱨ�����Է�ֹ�����
	//�������Ƚ�ʡ���ڴ�ռ䣬�ֱ�֤�����ݵİ�ȫ
	cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;
}

int main()
{
//ͨ���ṹ�崴�������ķ�ʽ�����֣�
//struct �ṹ���� ������
//	struct �ṹ���� ������ = { ��Ա1ֵ �� ��Ա2ֵ�� }
//	����ṹ��ʱ˳�㴴������
	struct  Student stu1;
	stu1.name = "����";
	stu1.age = 18;
	stu1.score = 100;
	cout << "������" << stu1.name << " ���䣺" << stu1.age << " ������" << stu1.score << endl;

	struct Student stu2 = {"����",16,80};
	cout << "������" << stu2.name << " ���䣺" << stu2.age << " ������" << stu2.score << endl;

	stu3.name = "����";
	stu3.age = 24;
	stu3.score = 66;
	cout << "������" << stu3.name << " ���䣺" << stu3.age << " ������" << stu3.score << endl;

	//1������ṹ��ʱ�Ĺؼ�����struct������ʡ��

	//2�������ṹ�����ʱ���ؼ���struct����ʡ��

	//3���ṹ��������ò����� . ���ʳ�Ա

	//�ṹ������
	struct Student arr1[3] = { {"zhangsan",12,50}, {"lisi",13,51}, {"wangwu",14,52} };
	arr1[2].age = 16;

	for (int i = 0; i < 3; i++)
	{
		cout << "������" << arr1[i].name << " ���䣺" << arr1[i].age << " ������" << arr1[i].score << endl;
	}
	
	//�ṹ��ָ��
	struct Student* p1 = &stu1;
	p1->name = "����";//ָ��ͨ�� -> ���������Է��ʳ�Ա
	cout << p1->name << endl;
	cout << "������" << p1->name << " ���䣺" << p1->age << " ������" << p1->score << endl;

	//�ṹ��Ƕ��
	Teacher teacher1;
	teacher1.id = 1;
	teacher1.name = "����";
	teacher1.age = 43;
	teacher1.stu2.name = "С��";
	teacher1.stu2.age = 16;
	teacher1.stu2.score = 99;
	cout << "��ʦ ְ����ţ� " << teacher1.id << " ������ " << teacher1.name << " ���䣺 " << teacher1.age << endl;

	cout << "����ѧԱ ������ " << teacher1.stu2.name << " ���䣺" << teacher1.stu2.age << " ���Է����� " << teacher1.stu2.score << endl;


	//���ṹ����Ϊ��������
	printStu2(stu2);//ֵ����
	printStu3(&stu3);//��ַ����

}