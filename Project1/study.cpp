//hello word
/* 
#include<iostream>
using namespace std;
int main()
{
cout << "hello world "<< endl;
system("pause");
return 0;
}
*/

//���պؿ�
/*
#include<iostream>
using namespace std;
int main() {
	//�������,��һ���ʽΪ��char <�ַ�������>[<�ַ�����󳤶�>];
	char name_in[50], name_out[50];

	//������䣬cin����Կո�<Tab>����<�س���>��Ϊ�ָ�������������Щ���ţ�����Ϊһ�����ݵ���������ˣ���������Ϊ�������롣
	//cin >> name_in >> name_out;

	//��һ��������䣬�������<�س���>��Ϊ�ָ�������������Ϊ�������롣
	cin.getline(name_in, 50);
	cin.getline(name_out, 50);

	//������
	cout << "#######################################" << endl;
	cout << name_in << endl;
	cout << endl;
	cout << "Happy birthday to you!" << endl;
	cout << endl;
	cout << "     sincerely yours " << name_out << endl;
	cout << "#######################################" << endl;
	system("pause");
	return 0;
}
*/

//�ӷ�������
/*
#include<iostream>
using namespace std;
int main(){
int a, b, c; //��������
cin >> a >> b; //����ֵ
c = a + b; //������
cout << c << endl; //��ʾ������
system("pause");
return 0;
}
*/

//�����Ϣ����ʽ��sum = money(1+rate)^years,money��ʾ����rate��ʾ�����ʣ�years��ʾ������ޣ�sum��ʾ���ڵı�Ϣ
/*
#include<iostream>
#include<cmath> //��ѧ����������ͷ�ļ�cmath��
using namespace std;
int main() {
	double money, rate, years, sum;
	int panduan = 1; //Ϊѭ���ṩһ���ж�����

	while (panduan == 1)
	{
		cout << "�������";
		cin >> money;
		cout << endl << "���������ʣ�";
		cin >> rate;
		cout << endl << "������������";
		cin >> years;
		sum = money * pow((1 + rate), years); //pow(x,y)��C++�еĳ˷�����������x��y�η���ʹ�øú�������Ҫ����cmathͷ�ļ���
		cout << endl << "���ں�ı�Ϣ���Ϊ��" << sum << endl;

		cout << "�Ƿ�������㣨����������1��ֹͣ������0����";
		cin >> panduan; //�����ж�����ȷ���Ƿ��������
	}
	system("pause");
	return 0;
}
*/

//��������
/*
#include<iostream>
using namespace std;
int main()
{
//��ѯ����������ռ�ĸ��ֽ���
cout << "����������ռ���ֽ�����"<<sizeof(int)<<"\n"
<< "������������ռ���ֽ�����"<<sizeof(long) << "\n"
<< "�ַ���������ռ���ֽ�����"<<sizeof(char) << "\n"
<< "������������ռ���ֽ�����"<<sizeof(bool) << "\n"
<< "��������������ռ���ֽ�����"<<sizeof(float) << "\n"
<< "˫������������ռ���ֽ�����"<<sizeof(double) << endl;
cout << endl;
//ת���ַ���ʹ��
cout << 1 << "\t" << 2 << "\t" << 3 << endl;
cout << 4 << "\t" << 5 << "\t" << 6 << endl;
cout << 7 << "\t" << 8 << "\t" << 9 << endl;
system("pause");
return 0;
}
*/

//���������ʵ��
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
double a, b;

cout << "��������������"<<endl;
cin >> a >> b;

cout << "�������ĺ�Ϊ��" << a + b << endl;
cout << "�������Ĳ�Ϊ��" << a - b << endl;
cout << "�������Ļ�Ϊ��" << a * b << endl;
cout << "����������Ϊ��" << a / b << endl;
cout << "��һ����������Ϊ��" << a * a * a << endl;
cout << "��������������Ϊ��" << b * b * b << endl;
cout << "�Եڶ�������Ϊ��һ������ָ��Ϊ��" << pow(a,b) << endl;
cout << "��һ������10Ϊ�׵Ķ���Ϊ��" << log10(a) << endl;
system("pause");

return 1;
}
*/

//�����Ƿ�������
/*
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout << "��������ݣ�" ;
	cin >> year;

	bool f;
	f = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
	cout << "�����������Ϊ1���������������Ϊ0�����Ϊ��" << f << endl;

	system("pause");

	return 1;
}
*/



