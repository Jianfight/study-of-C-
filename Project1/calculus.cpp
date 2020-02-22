//指针：梯形法计算定积分
//如果把函数的指针作为函数的形参，那么所定义的参数就是另一个函数，采用这种方式可以设计通用性更好的函数
#include<iostream>
#include<cmath>
using namespace std;

//在自定义函数中使用指向函数的指针作为参数来引入被积函数，形成梯形法求解定积分的通用程序

//编写几个被积函数
double sinx(double x)
{
	return sin(x);
}

double e_sqrx(double x)
{
	return exp(-x * x);
}

double x_sqrx(double x)
{
	return 2 * x / (1 + x * x);
}

//梯形法求解定积分函数
double integral(double a, double b, double (*fun)(double), int n)    //a代表下区间，b代表上区间，第三个形参为指向被积函数的指针，n代表对于区间的等分数
{
	double h = (b - a) / n;                      //计算每个区间的长度
	double sum = ((*fun)(a) + (*fun)(b)) / 2;   //调用被积函数计算起始与终止位置的y值

	for (int i = 1; i < n; i++)
	{
		sum += (*fun)(a + i * h);     //a+i*h是表示通过下区间值和区间的长度，计算x1、x2、x3、..........
	}

	sum = sum * h;     //计算定积分的值
	return sum;
}

//主函数
void amain() //amain是为了防止与平时学习文件中的main函数冲突
{
	double s = integral(0, 3.1415926 / 2, sinx, 1000);   //计算0到Π/2之间，等分数为1000时，sinx的定积分
	cout << "函数sin(x)在[0,PI/2]区间的定积分=" << s << endl;

	s = integral(0, 1, e_sqrx, 1000);     //e的-x^2在0到1区间，等分数为1000时的定积分
	cout << "函数e的（负x平方）次方在[0,1]区间的定积分=" << s << endl;

	s = integral(-1, 5, x_sqrx, 1000);    //
	cout << "函数2*x/(1+x*x)在[-1,5]区间的定积分=" << s << endl;

	system("pause");

	//该函数也可以将各个定积分的输入值改写为用户手动输入。
}