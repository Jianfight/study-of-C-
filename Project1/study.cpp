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

//���������ε��������ʽ(���ú��׹�ʽ���������ε����)��A = ��s(s-a)(s-b)(s-c)��^(1/2),����a,b,c�������ε����ߣ�����Ϊʵ����s=(a+b+c)/2��
/*
#include<iostream> //������������������ͷ�ļ�
#include<cmath>
using namespace std;
int main()
{
	double a, b, c, s, area; //����˫���ȱ���

	cout << "Please input length of three edges:"<<endl; //������ʾ

	cout << "a ="; //����
	cin >> a;
	cout << "b =";
	cin >> b;
	cout << "c =";
	cin >> c;

	s = (a + b + c) / 2.0;
	area = sqrt(s * (s - a) * (s - b) * (s - c)); //�������

	cout << "The area ia:" << area <<endl; //��ӡ���

	system("pause");
	return 0;
}
*/

//����һ����λ���ķ�����
//�㷨���������η������λ��ʮλ����λ��ǧλ����λ���ֱ���abcde��ʾ����ʽ��(((a*10 + b)*10 + c)*10 + d) + e�����µ���λ������
/* 
#include<iostream>
using namespace std;
int main()
{
	int n,m = 0;
	int a, b;

	cout << "Please input a integer:";
	cin >> n;
	b = n; //����ԭʼ��������֣������ж��Ƿ�Ϊ������


	//int c, d, e;
	//a = n % 10; //�Ӹ�λ��ʼ�Ӻ���ǰ����ȡ�����е�ÿһλ��
	//b = n/10 % 10;
	//c = n/100 % 10;
	//d = n/1000 % 10;
	//e = n/10000 % 10;
	//m = (((a * 10 + b) * 10 + c) * 10 + d) * 10 + e;


	//���㷨�޸�Ϊ���Լ�������λ���ķ�����
	while (n != 0)
	{
		a = n % 10;
		n = n / 10;
		m = m * 10 + a;
	}

	if (b == m) {
		cout << "Palindrome number" <<endl;
	}
	else {
		cout << "The inversed number is:" << m <<endl;
	}

	system("pause");
	return 0;
}
*/

//���������
/*
#include<iostream>
using namespace std;
int main()
{
	char c; //������������ԭʼ����ĸ��
	char ec; //�����������ż��ܺ����ĸ��
	int k; //�������������ܳ�k

	cout << "Please input a lower character and k:" << endl; //������ʾ
	cout << "character:";
	cin >> c;
	cout << "k=";
	cin >> k;

	ec = ((c - 'a') + k) % 26 + 'a'; //���м�������
	cout << "Encrypted characters are��";
	cout << ec << endl;

	system("pause");
	return 0;
}
*/

//�Ƚϴ�С
/*
#include<iostream>
using namespace std;
int main()
{
	double a, b, c, max;
	cout << "������������С��ͬ�����֣�"<< endl;
	cin >> a;
	cin >> b;
	cin >> c;

	max = a;
	if (!(a>b&&a>c))
	{
		if (b > c)
			max = b;
		else
			max = c;
	}

	cout << "��������Ϊ��" << max << endl;
		
	system("pause");
	return 0;
}
*/

//�ɼ�ת��
/*
#include<iostream>
using namespace std;
int main()
{
	int old_grade;
	double new_grade;

	cout << "������ѧ���ĳɼ���";
	cin >> old_grade;

	// ���ǰ���10��Ϊһ���ȼ����Գɼ����л��֡�
	
	switch (old_grade/10)
	{
	case 10:
	case 9: new_grade = 5;
		break;
	case 8: new_grade =4;
		break;
	case 7: new_grade = 3;
		break;
	case 6: new_grade = 2;
		break;

	default: new_grade = 1;
	}
	
	// ���ǰ���5��Ϊһ���ȼ����Գɼ����л��֡�
	switch(old_grade/10)
	{
	case 10:
	case 9: new_grade = 5;
		break;
	case 8:
		if (old_grade%10 > 5)
		{
			new_grade = 4.5;
		}
		else
		{
			new_grade = 4;
		}
		break;
	case 7:
		if (old_grade%10 > 5)
		{
			new_grade = 3.5;
		}
		else
		{
			new_grade = 3;
		}
		break;
	case 6:
		if (old_grade%10 > 5)
		{
			new_grade = 2.5;
		}
		else
		{
			new_grade = 2;
		}
		break;
	
	default: new_grade = 1;
	}

	cout << "�óɼ��ĵȼ�Ϊ��" << new_grade << endl;

	system("pause");
	return 0;
}
*/

//�����ۼӺ�
/*
#include<iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cout << "������һ����������";
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		sum = sum + i;
	}

	cout << "������������ۼӺ�Ϊ��" << sum << endl;

	system("pause");
	return 0;
}
*/

//�˷���
/*
#include<iostream>
using namespace std;
int main()
{
	int i, j;
	for(i=1; i<=9; i++)
	{
		for(j=1; j<=i; j++)
		{
			cout << j << "*" << i << "=" << i*j << "\t";
		}
		cout << endl;
	}


	system("pause");
	return 0;
}
*/

//����eֵ
/*
#include<iostream>
using namespace std;
int main()
{
	double e=1.0, u=1.0;
	int n = 1;

	while (u >= 1.0E-7)
	{
		u = u/n;
		e = e + u;
		n = n + 1;
	}

	cout << "e = " << e << "(n=" << n << ")" << endl;
	system("pause");
	return 0;
}
*/

//����ʵ����n�η���
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x, n;

	while (1)
	{
		cout << "������x��n��ֵ��(����0 0��ֹ����)";
		cin >> x >> n;

		if (x==0 && n==0)
		{
			cout << "�������" << endl; break;
		}
		else if ((x<0&&n<=0)||(x<=0&&1/n!=int(1/n)))
			{
				cout << "......................�����������������......................." << endl;
				continue;
			}
		cout << x << "��" << n << "�η���Ϊ��" << pow(x, 1/n) << endl;
	}

	system("pause");
	return 0;
}

*/

//��һԪ���η���
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b, c;
	double delta;
	double x, x1, x2;

	while (1)
	{
		cout << "һԪ���η����������" << endl;
		cout << "������a��ֵ��"; cin >> a;
		cout << endl << "������b��ֵ��"; cin >> b;
		cout << endl << "������c��ֵ��"; cin >> c;

		if (a == 0 && b != 0) //��a����0��b������0��ʱ��
		{
			x = (-c) / b;
			cout << "��ʽΪһԪһ�η��̣����Ϊ��" << x << endl;
			break;
		}
		else if (a == 0 && b == 0) //��a����0��b����0��ʱ���������
		{
			cout << "...................................���������������������..............................";
			continue;
		}
		else if (a != 0 && b != 0) //������ֵ����һԪ���ζ���ʽ������ʱ
		{
			delta = b * b - 4 * a * c; //����delta��ֵ
			if (delta > 0.0) //��delta����0��ʱ��
			{
				x1 = (-b + sqrt(delta)) / (2 * a);
				x2 = (-b - sqrt(delta)) / (2 * a);
				cout << "��һ����Ϊ��" << x1 << endl;
				cout << "�ڶ�����Ϊ��" << x2 << endl;
				break;
			}
			else if (delta == 0.0) //��delta����0��ʱ��
			{
				cout << "������ͬΪ��" << (-b) / (2 * a) << endl;
				break;
			}
			else //��deltaС��0��ʱ��
			{
				delta = sqrt(-delta);    //�б�ʽ��ſ���
				x1 = (-b) / (2 * a);     //�õ�������ʵ��
				x2 = (delta / 2 * a);    //�õ��������鲿
				cout << "��һԪ���η��̵Ľ�Ϊ������"<< endl;
				cout << "��һ����Ϊ��" << x1 << "+" << x2 << "*j" << endl;
				cout << "�ڶ�����Ϊ��" << x1 << "-" << x2 << "*j" << endl;
				break;
			}
		}
	}

	system("pause");
	return 0;
}
*/

//�򵥼�����
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double num1, num2, result=0;
	char op;                          //��Ų�����

	cout << "���������������ʽ��";
	cin >> num1 >> op >> num2;
	switch(op)
	{
		case '+':result = num1 + num2;
			cout << "���ʽ�ļ�����Ϊ��" << result << endl;
			break;
		case '-' : result = num1 - num2;
			cout << "���ʽ�ļ�����Ϊ��" << result << endl;
			break;
		case '*': result = num1 * num2;
			cout << "���ʽ�ļ�����Ϊ��" << result << endl;
			break;
		case '/':
			if (fabs(num2) < 1.0e-8)  //fabs�����������ֵ�ĺ�����
			{
				cout << "����Ϊ0���������"<< endl;
			}
			else
			{
				result = num1 / num2;
				cout << "���ʽ�ļ�����Ϊ��" << result << endl;
			}
			break;
	}

	system("pause");
	return 0;
}
*/

//Ѱ��������
//�������Ķ��壺һ��nλ��������������ĸ�λ���ֵ�n�η��ĺͼ�������������������ͳƸ���Ϊ��������
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;            //��ʾ����λ��
	int start, end;   //��ʾnλ������ʼֵ����ֵֹ
	int m;             //���ֽ��λ�����������жϵ���
	int digit;        //ĳ����λ��ֵ
	int sum;          //��λ����n�η��ĺ�
	int i;            //ѭ�����������������

	cout << "��nλ��������������λ����";
	cin >> n;
	while (n>0)
	{
		start = pow(10, n - 1);      //nλ������ʼֵ
		end = pow(10, n) - 1;        //nλ������ֵֹ
		cout << n << "λ��������";
		for ( i = start; i <= end; i++)  //����ʼֵ����ֵֹ������
		{
			m = i;                      //��i��ֵ��m���ټ�������в���ı�i��ֵ
			sum = 0;

			while (m != 0)              //m��ʼΪ�������
			{
				digit = m % 10;                   //���λ�ȡm����λ������
				sum = sum + pow(digit, n);        //���������λ����n�η����ۼӺ�
				m = m / 10;
			}
			if (sum == i)
			{
				cout << i << "\t";
			}
		}

		cout << endl << "��nλ��������������λ����";
		cin >> n;
	}

	system("pause");
	return 0;
}
*/

//��������Сд��ĸת��Ϊ��д�ĳ���
/*
#include<iostream>
using namespace std;
int main()
{
	char str[10];
	int i = 0;

	cout << "������һ���ַ�������С��10��";
	cin >> str;

	while (str[i] != '\0')
	{
		str[i] = str[i] - 32;  //ASCII���д�д��ĸ��Сд��ĸ֮�����32
		i = i + 1;
	}

	cout << str << endl;
	system("pause");
	return 0;
}
*/

//��ά�����һά�����ת��
/*
#include<iostream>
using namespace std;
int main()
{
	const int m = 2, n = 3;  //const�ؼ��֣���ָ��һ������Լ������������ǿ��ʵʩ���Լ������֤�����εĶ��������������б��ֲ��䡣
	int a[m*n], b[m][n];
	int i, j, x = 1;

	for ( i	= 0; i < 6; i++, x++)
	{
		a[i] = x;
	}

	x = 1;
	for ( i = 0; i < 2; i++)
	{
		for ( j = 0; j < 3; j++, x++)
		{
			b[i][j] = x;
			cout << a[i * n + j] << "\t" << b[i][j] << endl; //i*n<����> + j,�Ƕ�ά�������кŶ�Ӧλ����һά�������ת���ķ�ʽ
		}
	}

	system("pause");
	return 0;
}
*/

//�·ݵ�Ӣ��ת��
/*
#include<iostream>
using namespace std;
int main()
{
	char month[12][10] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int m;

	cout << "�������·ݵ�������ʽ��";
	cin >> m;

	if (m>0&&m<13)
	{
		cout << endl << "���·ݶ�Ӧ��Ӣ����ʽ��" << month[m-1]; //m-1����Ϊ�������ʼλ��Ϊ0������λ��Ϊm-1��m���������������������ܳ���
	}
	else {
		cout << "���벻��ȷ" << endl;
	}

	system("pause");
	return 0;
}
*/

//����ͨѶ¼
/*
#include<iostream>
using namespace std;
int main()
{
	//�ṹ����
	const int numOfpeople = 3;
	struct telelist
	{
		char name[8];  //��ʹ�øýṹʱ�����������ַ����ĳ��ȳ����˹涨�ĳ��ȣ�����ִ���ʹ�����д洢����һ������������ַ�
		char sex[8];
		char photo1[13];
		char photo2[6];
	};
	struct telelist list1[numOfpeople];

	//���룺
	int i;
	for ( i = 0; i <= numOfpeople - 1; i++)
	{
		cout << "��������ϵ�˵���Ϣ" << endl;
		cout << "������"; cin >> list1[i].name;

		cout << endl << "�Ա�"; cin >> list1[i].sex;

		cout << endl << "�ֻ��ţ�"; cin >> list1[i].photo1;

		cout << endl << "�����ţ�"; cin >> list1[i].photo2;
	}

	//��ʾ
	for ( i = numOfpeople -1; i >= 0; i--)
	{
		cout << list1[i].name << "/" << list1[i].sex << "/" << list1[i].photo1 << "/" << list1[i].photo2 << endl;
	}

	cout << sizeof(list1) << endl;

	//����
	char findName[8];
	cout << "��������ϵ�˵�������"; cin >> findName;

	bool pipei=0;                    //���һ���Ƿ��ҵ���ϵ�˵ı�ʶ��������ʾͨѶ¼���Ƿ��и���ϵ��

	for ( i = 0; i <= numOfpeople -1; i++)
	{
		string exitName;
		exitName = list1[i].name;  //�޷����ṹ���еı�������ͨ����ֱ�ӽ��бȽϣ����һ���м���������ڱȽϡ�

		if (exitName == findName) //���ͨѶ¼���д��ˣ����������Ϣ��
		{
			pipei = 1;
			cout << endl << "���˵���ϢΪ��" << "������" << list1[i].name << "/�Ա�" << list1[i].sex << "/�ֻ��ţ�" << list1[i].photo1 << "/�����ţ�" << list1[i].photo2 << endl;
		}

	}

	if (!pipei) //���ͨѶ�����޴��ˣ�������ʾ
	{
		cout << "ͨѶ¼���޴���" << endl;
	}

	system("pause");
	return 0;
}
*/

//��ɫ�����
//�ڴ����к졢�ơ�����3����ɫ��С�����ÿ�δӿڴ���ȡ��3�ֲ�ͬ��ɫ��С�򣬱�д���򣬴�ӡ��ÿ����ϡ�
/*
#include<iostream>
using namespace std;
int main()
{
	enum color{red, yellow, blue};
	int temp, i, j, t;                      //i�������Ϊ�ǵ�һ��ȡ������С�����ɫ��j�������Ϊ�ǵڶ���ȡ������С�����ɫ
	for ( i = red; i <= yellow; i++)
	{
		for ( j = i+1; j <= blue; j++)
		{
			for ( t = 0; t < 2; t++)
			{
				switch (t)
				{
				case 0: temp = i; break;
				case 1: temp = j; break;
				}
				switch ((enum color)temp)
				{
				case red: cout << "red" << "\t"; break;
				case yellow:cout << "yellow" << "\t"; break;
				case blue: cout << "blue" << "\t"; break;
				}
			}
			cout << "\n";
		}
	}


	system("pause");
	return 0;
}
*/

//ð������
/*
#include<iostream>
using namespace std;
int main()
{
	double a[100];  //����������������Ϊ100��

	int N;          //�û��������ֵ�����
	int i, j;

	cout << "��������Ҫ�������ֵ�������";  cin >> N;

	//��������
	for ( i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	//������ ����
	for ( i = 0; i < N-1; i++)
	{
		for ( j = 0; j < N-1-i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp;          //��ʱ����
				temp = a[j];        //����
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	//�������ʾ
	for ( i = 0; i < N; i++)
	{
		cout << a[i] << "\t";
	}

	cout << endl;
	system("pause");
	return 0;
}
*/

//������Ϣͳ��
/*
#include<iostream>
using namespace std;
int main()
{
	const int n = 100;           //����һ��������ȷ���ַ����Ĵ�С
	char str[n];
	int len=0;                   //��ʾ�ַ����ĳ���
	int capital=0;               //��ʾ��д��ĸ�ĸ���
	int smalletter=0;            //��ʾСд��ĸ�ĸ���
	int digit=0;                 //��ʾ���ֵĸ���
	int others=0;                //��ʾ������ĸ����

	//��������
	cout << "������һ���ַ���" << endl;
	cin.getline(str, n);          //getline ֻ���س�����Ϊ����Ľ�����

	//ͳ��
	int i = 0;
	while (str[i] != '\0')
	{
		len++;
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			capital++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			smalletter++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			digit++;
		}
		else
		{
			others++;
		}
		i++;
	}

	//��ʾ
	cout << "�ö��ַ����ܳ���Ϊ��" << len << "�а�����д��ĸ��" << capital << "����" << "����Сд��ĸ��" << smalletter << "����" << "�������֣�"
		<< digit << "����" << "���������ַ���" << others << "����" << endl;


	system("pause");
	return 0;
}
*/

//string  �ַ������ʹ��
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
	//���岢��ʼ���ַ�������text1
	string text1 = "Heavy rains are pushing water levels beyond the limit.";
	string text2, text3;

	int k;

	text2 = "Sluice gates at Three Gorges Dam opened to discharge water.";

	text3 = text1 + text2;   //�������ַ����ϲ�Ϊһ���ַ�����
	k = text3.find("Heavy");    //���ַ���text3�в���Heavy������ʣ��ҵ��ˣ�����H���ڵ��ַ�����λ�á�
	text3.erase(k, sizeof("Heavy") - 1); //sizeof��ȡ�����ַ����ĳ��Ȱ���������'\0'���ʶ���ȥ1��erase��Ա��������������һ����ʾ��ʼλ�ã���һ����ʾ���ȡ�
	text3.insert(k, "Strong");

	cout << text3 << endl;

	system("pause");
	return 0;
}
*/

//����ĳ˷�
/*
#include<iostream>
using namespace std;
int main()
{
	const int M = 20, N = 20, K = 20;
	double A[M][N], B[N][K], C[M][K];  //�൱�ڹ涨�˾�������ά��
	int M1, N1, N2, K1;                //�����ʵ��ά��
	int i, j, k;

	//��һ�����������
	cout << "�������һ�������ά��MN" << endl;
	cin >> M1 >> N1;
	cout << "�밴�������һ�������Ԫ��" << endl;
	for ( i = 0; i < M1; i++)
	{
		for ( j = 0; j < N1; j++)
		{
			cin >> A[i][j];
		}
	}

	//�ڶ������������
	cout << "������ڶ��������ά��NK" << endl;
	cin >> N2 >> K1;
	cout << "�밴������ڶ��������Ԫ��" << endl;
	for (i = 0; i < N2; i++)
	{
		for (j = 0; j < K1; j++)
		{
			cin >> B[i][j];
		}
	}

	if (N1 == N2)       //�жϾ�֤�Ƿ������
	{
		for (i = 0; i < M1; i++)  //�������˽�������
		{
			for ( j = 0; j < K1; j++)
			{
				C[i][j] = 0;
				for ( k = 0; k < N1; k++)
				{
					C[i][j] = C[i][j] + A[i][k] * B[k][j];
				}
			}
		}

		//��ʾ������
		for ( i = 0; i < M1; i++)
		{
			for ( j = 0; j < K1; j++)
			{
				cout << C[i][j] << "\t";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "��һ�������������ڶ��������������ƥ�䣬�޷����о���ĳ˷����㡣";
	}


	system("pause");
	return 0;
}
*/

//ȡ���ַ���
/*
#include<iostream>
using namespace std;
int main()
{
	//string inputStr;
	char str[101];
	char saveStr[101];
	int k, l;
	int len;  //���ڼ�¼�ַ����ĳ���

	cout << "������һ���ַ���";
	cin.getline(str,100);

	//���������ַ����ĳ���
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	cout << endl << "�������ȡ����ʼλ�ã�"; cin >> k;
	cout << endl << "�������ȡ�ĳ��ȣ�"; cin >> l;

	while(k!=0 && l!=0)
	{
		int j = 0;
		for (int i = k - 1; i < k + l - 1; i++)
		{
			saveStr[j] = str[i];
			j++;
		}
		saveStr[j] = '\0';                         //���ַ����Ľ�β��־���޸ñ�־��֤���䲻��һ���������ַ���
		cout << "��ȡ�����ַ���Ϊ��" <<saveStr << endl;
		cout << endl << "�������ȡ����ʼλ�ã�"; cin >> k;
		cout << endl << "�������ȡ�ĳ��ȣ�"; cin >> l;
	}

	system("pause");
	return 0;
}
*/

//��Ƶͳ��
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

//����һ���ֵ�ṹ��
struct WordList
{
	char word[20];  //�洢����
	int freq;       //ͳ��ʹ�ô���
};

int main()
{
	WordList list[1000];  //�ṹ������
	int N = 0;   //ʵ�ʵ�����

	int i, j, k;

	char tmp[20];

	//������ͳ��
	cout << "������һϵ��Ӣ�ﵥ�ʣ���xyz��ʾ�������" << endl;
	cin >> tmp;

	while (strcmp(tmp, "xyz"))
	{
		for (i = 0; i < N; i++)
		{
			if (strcmp(list[i].word, tmp) == 0) //�������ĵ����Ѿ����ڣ�����ִ�����1
			{
				list[i].freq++;
				break;
			}
		}

		if (i >= N)    //�������ĵ���Ϊ�µ��ʣ������ֵ��н��м�¼
		{
			strcpy(list[i].word, tmp);
			list[i].freq = 1;
			N++;
		}
		cin >> tmp;
	}

	//�Դʵ��������,ʹ��ѡ������
	for ( i = 0; i < N-1; i++)
	{
		k = i;
		for ( j = i+1; j < N; j++)
		{
			if (strcmp(list[j].word, list[k].word) < 0)
			{
				k = j;
			}
		}
		if (k != i)
		{
			WordList tmp;
			tmp = list[i];
			list[i] = list[k];
			list[k] = tmp;
		}
	}

	//������
	cout << "��Ƶͳ�ƽ�����£�" << endl;
	for (i = 0; i < N; i++)
	{
		cout << list[i].word << '\t' << list[i].freq << endl;
	}

	system("pause");
	return 0;
}
