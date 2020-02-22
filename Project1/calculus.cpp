//ָ�룺���η����㶨����
//����Ѻ�����ָ����Ϊ�������βΣ���ô������Ĳ���������һ���������������ַ�ʽ�������ͨ���Ը��õĺ���
#include<iostream>
#include<cmath>
using namespace std;

//���Զ��庯����ʹ��ָ������ָ����Ϊ���������뱻���������γ����η���ⶨ���ֵ�ͨ�ó���

//��д������������
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

//���η���ⶨ���ֺ���
double integral(double a, double b, double (*fun)(double), int n)    //a���������䣬b���������䣬�������β�Ϊָ�򱻻�������ָ�룬n�����������ĵȷ���
{
	double h = (b - a) / n;                      //����ÿ������ĳ���
	double sum = ((*fun)(a) + (*fun)(b)) / 2;   //���ñ�������������ʼ����ֹλ�õ�yֵ

	for (int i = 1; i < n; i++)
	{
		sum += (*fun)(a + i * h);     //a+i*h�Ǳ�ʾͨ��������ֵ������ĳ��ȣ�����x1��x2��x3��..........
	}

	sum = sum * h;     //���㶨���ֵ�ֵ
	return sum;
}

//������
void amain() //amain��Ϊ�˷�ֹ��ƽʱѧϰ�ļ��е�main������ͻ
{
	double s = integral(0, 3.1415926 / 2, sinx, 1000);   //����0����/2֮�䣬�ȷ���Ϊ1000ʱ��sinx�Ķ�����
	cout << "����sin(x)��[0,PI/2]����Ķ�����=" << s << endl;

	s = integral(0, 1, e_sqrx, 1000);     //e��-x^2��0��1���䣬�ȷ���Ϊ1000ʱ�Ķ�����
	cout << "����e�ģ���xƽ�����η���[0,1]����Ķ�����=" << s << endl;

	s = integral(-1, 5, x_sqrx, 1000);    //
	cout << "����2*x/(1+x*x)��[-1,5]����Ķ�����=" << s << endl;

	system("pause");

	//�ú���Ҳ���Խ����������ֵ�����ֵ��дΪ�û��ֶ����롣
}