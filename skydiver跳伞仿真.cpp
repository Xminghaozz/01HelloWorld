//跳伞运动员动态模型
//不使用降落伞

#include <stdio.h>
#include <cstdlib>
using namespace std;

#define h			0.01//仿真步长
#define g			9.81//重力加速度
#define Rho		1.225//大气密度
#define S			1.0//表面积
#define Cd		0.05//阻力系数
#define m			85.0//跳伞运动员质量(kg)

static float Az, Vz, Pz; //垂直加速度（m/s²），速度（m/s），位置（m）
static float Drag;		 //阻力（N）
static float t;				 //时间（s）

static void Integrate(float *y, float x);

static void Integrate(float* y, float x)//简单一阶欧拉公式
{
	*y = *y + x * h;
}

int main() {

	Vz = 0.0;//初始垂直加速度
	Pz = 3000.0;//初始高度
	t = 0.0;//起始时间

		do
		{
			printf("%8.2f %8.2f %8.2f\n", t, fabs(Vz), Pz); 
			t = t + h;
			Drag = 0.5 * Rho * Vz * Vz * S * Cd;
			Az = Drag / m - g;
			Integrate(&Vz, Az);
			Integrate(&Pz, Vz);

		} while (Pz>= 0.0);

}