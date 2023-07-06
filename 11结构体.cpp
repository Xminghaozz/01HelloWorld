#include <iostream>
using namespace std;

//结构体的定义和使用
//语法：struct 结构体名{ 结构体成员列表 }；

struct Student
{
	//成员变量列表
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

//值传递
void printStu2(Student stu2) {
	cout << "姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << endl;
}
//地址传递，将函数的形参改为指针，可以节省内存空间，而且不会复制新的副本
void printStu3(const Student *p) {
	//p->age = 80;指针前加入const，一旦有修改操作就会报错，可以防止误操作
	//这样做既节省了内存空间，又保证了数据的安全
	cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}

int main()
{
//通过结构体创建变量的方式有三种：
//struct 结构体名 变量名
//	struct 结构体名 变量名 = { 成员1值 ， 成员2值… }
//	定义结构体时顺便创建变量
	struct  Student stu1;
	stu1.name = "张三";
	stu1.age = 18;
	stu1.score = 100;
	cout << "姓名：" << stu1.name << " 年龄：" << stu1.age << " 分数：" << stu1.score << endl;

	struct Student stu2 = {"李四",16,80};
	cout << "姓名：" << stu2.name << " 年龄：" << stu2.age << " 分数：" << stu2.score << endl;

	stu3.name = "王五";
	stu3.age = 24;
	stu3.score = 66;
	cout << "姓名：" << stu3.name << " 年龄：" << stu3.age << " 分数：" << stu3.score << endl;

	//1：定义结构体时的关键字是struct，不可省略

	//2：创建结构体变量时，关键字struct可以省略

	//3：结构体变量利用操作符 . 访问成员

	//结构体数组
	struct Student arr1[3] = { {"zhangsan",12,50}, {"lisi",13,51}, {"wangwu",14,52} };
	arr1[2].age = 16;

	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << arr1[i].name << " 年龄：" << arr1[i].age << " 分数：" << arr1[i].score << endl;
	}
	
	//结构体指针
	struct Student* p1 = &stu1;
	p1->name = "赵六";//指针通过 -> 操作符可以访问成员
	cout << p1->name << endl;
	cout << "姓名：" << p1->name << " 年龄：" << p1->age << " 分数：" << p1->score << endl;

	//结构体嵌套
	Teacher teacher1;
	teacher1.id = 1;
	teacher1.name = "老王";
	teacher1.age = 43;
	teacher1.stu2.name = "小明";
	teacher1.stu2.age = 16;
	teacher1.stu2.score = 99;
	cout << "教师 职工编号： " << teacher1.id << " 姓名： " << teacher1.name << " 年龄： " << teacher1.age << endl;

	cout << "辅导学员 姓名： " << teacher1.stu2.name << " 年龄：" << teacher1.stu2.age << " 考试分数： " << teacher1.stu2.score << endl;


	//将结构体作为函数参数
	printStu2(stu2);//值传递
	printStu3(&stu3);//地址传递

}