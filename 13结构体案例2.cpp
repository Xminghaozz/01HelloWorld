#include<iostream>
using namespace std;

struct Hero
{
	string name;
	int age;
	string categories;
};

void Sort(Hero sg[], int len) {
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (sg[j].age > sg[j + 1].age)
			{
				Hero temp = sg[j];
				sg[j] = sg[j + 1];
				sg[j + 1] = temp;
			}
		}
	}
}
int main()
{
	Hero sg[5] = {
		{"����",20,"��"},
		{"��ɼ",24,"ľ"},
		{"���",23,"ˮ"},
		{"����",18,"��"},
		{"����",22,"��"}, };
	int len = sizeof(sg) / sizeof(sg[0]);
	Sort(sg, len);
	for (int i = 0; i < len; i++) {
		cout << sg[i].name << sg[i].age << sg[i].categories << endl;
	}

}