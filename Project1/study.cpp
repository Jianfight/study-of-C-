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
/*
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
*/

//�������ʹ�ã�����Բ�����
/*
#include<iostream>
using namespace std;
double areaofcircle(double r)
{
	double pi = 3.1415926;
	double area;

	area = pi * r * r;

	return area;
}

void main()
{
	double r, area;

	cout << "������Բ�İ뾶(��λΪcm)��"; cin >> r;

	area = areaofcircle(r);

	cout << endl << "��Բ�����Ϊ(��λΪƽ������)��" << area << endl;

	system("pause");
}
*/

//�������ʹ�ã���һ���ַ���ʾn��
/*
#include<iostream>
using namespace std;
void display_char(int n, char str)
{
	for (int i = 0; i < n; i++)
	{
		cout << str << endl;
	}
}

void main()
{
	char str;
	int n;

	cout << "��������Ҫ�ظ���ʾ���ַ���"; cin >> str;
	cout << endl << "�������ظ���ʾ�Ĵ�����"; cin >> n;

	display_char(n, str);

	system("pause");
}
*/

//�������ʹ�ã����ô���
/*
#include<iostream>
using namespace std;
void swap(int& x, int& y)
{
	int tmp;
	tmp = x; x = y; y = tmp;
}

void main()
{
	int a = 1, b = 2;
	cout << "Before exchange: a=" << a << ",b=" << b << endl;
	swap(a, b);
	cout << "After exchange: a=" << a << ",b=" << b << endl;

	system("pause");
}
*/

//�������ʹ�ã���������Ϊ��������
/*
#include<iostream>
#include<string>
using namespace std;
int fun(int B[], int n, int m)
{
	int s = 0;
	for (int i = n; i < n+m; i++)
	{
		s = s + B[i];
	}
	return s;
}

void main()
{
	int A[100];
	int n, m;   //���ڴ洢��������Ԫ�ص���ʼλ�úͲ�������Ԫ�صĸ���
	int sum=0;  //���ڴ洢�ۼӺ�

	cout << "������һά�����е�Ԫ�أ�Ԫ�ؼ�ʹ�ÿո����,����666��ʾֹͣ����" << endl;
	for (int i = 0; i < 100; i++)
	{
		int tem;
		cin >> tem;
		if (tem != 666)
		{
			//cout << int(tem);
			A[i] = tem;
			//cout << A[i];
		}
		else
		{
			break;
		}
	}

	cout << "��������Ҫ�ۼ���͵�Ԫ�ص���ʼλ�ã�";
	cin >> n;
	cout << endl << "��������Ҫ�����ۼӼ����Ԫ�صĸ�����";
	cin >> m;

	sum = fun(A, n, m);
	cout << endl << "�ۼӺ�Ϊ��" << sum << endl;

	system("pause");
}
*/

//�������ʹ�ã���ά����������������N�׷���ת��
/*
#include<iostream>
using namespace std;

//��������Ľ������Ծ������ת��
void transmat(double B[][10], int n)
{
	int i,j;
	double t;  //���ڴ洢��������
	//����ת�ô���
	for (i = 0; i < n-1; i++)
	{
		for (j = i; j < n; j++)
		{
			t = B[i][j];
			B[i][j] = B[j][i];
			B[j][i] = t;
		}
	}

}

void main()
{
	double A[10][10] = {{0,1,2,3,4,5,6,7,8,9},
					 {0,1,2,3,4,5,6,7,8,9},
					 {0,1,2,3,4,5,6,7,8,9},
					 {0,1,2,3,4,5,6,7,8,9},
					 {0,1,2,3,4,5,6,7,8,9},
					 {0,1,2,3,4,5,6,7,8,9},
					 {0,1,2,3,4,5,6,7,8,9},
					 {0,1,2,3,4,5,6,7,8,9},
					 {0,1,2,3,4,5,6,7,8,9},
					 {0,1,2,3,4,5,6,7,8,9},
					};

	int n;           //���ڴ洢��Ҫת�õľ���Ľ���
	int i, j;

#if 0
	cout << "�밴������һ��10X10�Ķ�ά����" << endl;
	for (i = 0; i < 10; i++)
	{
		for ( j = 0; j < 10; j++)
		{
			cin >> A[i][j];
		}
	}
#endif

	cout << "��������Ҫת�õĽ���n(n<10)��"; cin >> n;

	transmat(A, n);

	//ת�ú���ʾ
	for ( i = 0; i < 10; i++)
	{
		for ( j = 0; j < 10; j++)
		{
			cout << A[i][j] << '\t';
		}
		cout << endl;
	}

	system("pause");
}

*/

//�������ʹ�ã��ṹ�������Ϊ��������
/*
#include<iostream>
using namespace std;

struct student
{
	int stID;
	char name[20];
	int age;
};

void print(student s)
{
	cout << "ѧ�ţ�" << s.stID << endl;
	cout << "������" << s.name << endl;
	cout << "��ͣ�" << s.age << endl;
}

void main()
{
	struct student s = {101, "����", 27};

	print(s);

	system("pause");
}
*/

//�������
/*
#include<iostream>
using namespace std;

//�������
double maxofnumber(double a[], int n)
{
	double max = 0.000000000000001;

	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}

void main()
{
	double num[20]; //���ڴ洢�������ֵɸѡ������
	double max;    //���ڴ洢���ֵ

	int n=0;
	int m = 1; // ���ڼ�¼�Ƿ����ѭ������

	while (m)
	{
		cout << "������������ֵɸѡ������,��Ҫֹͣ���룬������666��" << endl;
		for (int i = 0; i < 20; i++)
		{
			double tem;
			cin >> tem;
			if (tem != 666.0)
			{
				num[i] = tem;
				n++;             //���ڴ洢��������Ԫ�صĸ���
			}
			else
			{
				break;
			}
		}

		max = maxofnumber(num, n);

		cout << "���ֵΪ��" << max << endl;

		cout << "�Ƿ�����һ�ֵ�ɸѡ����������1��ֹͣ����0����";
		cin >> m;
	}


	system("pause");
}
*/

//���ֲ��ҷ�
/*
#include<iostream>
using namespace std;

int Search(int a[], int n, int key)     //a������ұ�n���ұ��ȣ� key����ֵ��
{
	int low, high, mid;
	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key == a[mid])
		{
			return mid + 1;
		}
		else if (key > a[mid])
		{
			low = mid + 1;
		}
		else if (key < a[mid])
		{
			high = mid - 1;
		}
	}
	return -1;   //����-1��ʾ����ʧ�ܵı��

}

void main()
{
	int a[] = { 9, 15, 18, 21, 23, 29, 32, 36, 39, 43, 46, 50, 54 };
	int k, x;      //k���ڼ�¼����������ţ�x��Ŵ�����ֵ
	int changDu;   //���ڼ�������ĳ���
	char again = 'n';

	changDu = end(a) - begin(a);
	cout << "���鳤��Ϊ��" <<changDu << endl;
	do
	{
		cout << "��Ҫ���ҵ���Ϊ��"; cin >> x;
		k = Search(a, changDu, x);
		if (k >= 0)
		{
			cout << x << "�ǵ�" << k << "����" << endl;

		}
		else
		{
			cout << x << "���������У�" << endl;
		}
		cout << "������һ�����𣿣�y��n����"; cin >> again;

	} while (again != 'n');




	system("pause");
}

*/

//�ؾ����㷨������ʽ��ֵ
//�ؾ����㷨�����������Щ���������������Ա���������������Ķ���ʽ
// ���磺y=9x^4+9.3x^3+6.8x^2+3.5x-1  ==>  y=(((9x+9.3)x+6.8)x+3.5)x+(-1)
/*
#include<iostream>
using namespace std;

//�ؾ����㷨�����ʽ��ֵ
double qinJS(double aa[], int nn, double xx)  //aa[]�����Ÿ���ϵ����һά���飬nn��ʾ�������ĳ��ȣ�xx��ʾ�Ա�����ֵ
{
	double y = 0; //�����ۼӺͱ����������ֵ
	for (int i = nn - 1; i >= 0; i--)
	{
		cout << "��" << nn - i << "��ѭ����" << aa[i] << "+" << xx << "*" << y << endl;

		y = aa[i] + xx * y;  //��Ҫ��ѭ����

	}

	return y;
}

//������������qinJS����
void main()
{
	int n;  //���ڼ�¼����ʽ������
	double a[100], x, y; //���ڼ�¼����ʽ�����ϵ�������Ա�����ֵ���������ֵ

	//����
	cout << "����ʽ������Ϊ��"; cin >> n; //��������
	cout << endl << "x=:"; cin >> x; //�����Ա���
	for (int i = 0; i < n; i++)
	{
		cout << endl << "��" << i + 1 << "���ϵ��Ϊ��";  cin >> a[i];
	}

	//����
	y = qinJS(a, n, x);

	//���
	cout << "��x=" << x << "ʱ��f(x)=" << y << endl;

	system("pause");
}
*/

//ʹ�õݹ麯�����Ǹ������Ľ׳�
/*
#include<iostream>
using namespace std;

//����n�ĵݹ麯��
int jieCheng(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * jieCheng(n - 1);
	}
}

void main()
{
	int n;           //���ڴ�Ŵ���׳˵���
	int factorial;  //���ڴ�ż�������Ľ��

	//����
	cout << "����׳˵���Ϊ��"; cin >> n;

	//����
	factorial = jieCheng(n);

	//���
	cout << "���Ϊ��" << factorial << endl;

	system("pause");
}
*/

//ʹ�õݹ�˼������Hanoi������
//��A,B,C�������ӣ���A��������n����С��ͬ�Ľ��̣��������£�С�����ϣ�Ҫ��A�����ϵĽ����ƶ���C�����ϣ�ÿ��ֻ�ܰᶯһ������
//�ᶯ�����п��Խ����κ�һ��������ʱ��Ž��̣�����������������£�С�����ϵ�������
/*
#include<iostream>
using namespace std;

int s; //����һ��ȫ�ֱ������ڴ洢�ƶ��Ĵ���

//����move��һ�����Ӵ�x�ƶ�y
void move(char x, char y)
{
	cout << x << "--->" << y << endl;
	s++; //ͳ���ƶ��Ĵ���
}

//hanoi������
void hanoi(int n, char a, char b, char c)  //n�������ӵ�������a,b,c������������
{
	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b); //����c��n-1�����Ӵ�a�Ƶ�b
		move(a, c);
		hanoi(n - 1, b, a, c); //����a��n-1�����Ӵ�b�ƶ���c
	}
}

void main()
{
	int m;
	cout << "��������������"; cin >> m;
	cout << "�ƶ�" << m << "�����ӵĹ������£�" << endl;
	hanoi(m, 'A', 'B', 'C');
	cout << "һ���ƶ���" << s << "�Ρ�" << endl;
	system("pause");
}
*/
//��һ����ʾ��ϸ�ĺ�ŵ������㷨
/*
#include<iostream>
using namespace std;

//hanoi����
void hanoi(int n, int p1, int p2, int p3) //n����Բ�̵ĸ�����p1����ԭ׮��p2������׮��p3����Ŀ��׮
{
	void move(int, char, char);  //ǰ�޶��壬������
	if (n == 1)
	{
		move(n, p1, p3);
	}
	else
	{
		hanoi(n - 1, p1, p3, p2);  //��ԭ�е�Ŀ��׮��Ϊ����׮��ԭ�еĸ���׮��ΪĿ��׮
		move(n, p1, p3);           //����move������ɴ�Դ׮��Ŀ��׮���ƶ�
		hanoi(n - 1, p2, p1, p3);  //ԭ�еĸ���׮��ΪԴ׮��ԭ�е�Դ׮��Ϊ����׮��ԭ�е�Ŀ��׮����
	}

}
//�ƶ�����
void move(int n, char from, char to)
{
	cout << n << "���̴�" << from << "��" << to << endl;
}
//������
void main()
{
	int n;
	cout << "Բ�̵ĸ���Ϊ��";  cin >> n;
	hanoi(n, 'A', 'B', 'C');

	system("pause");
}
*/

//����������ʹ�ã���������ƽ��
/*
#include<iostream>
using namespace std;

//����������ƽ������Ϊһ����������
inline double pingFang(double a)
{
	return a * a;
}

void main()
{
	double x[100]; //����������
	int n=0;  //���ڴ洢�������ĸ���
	double sum = 0; //���ڴ洢��������ƽ����

	//����
	for (int i = 0; i < 100; i++)
	{
		int panduan = 0;

		cout << "������һϵ�����������ǽ��������ǵ�ƽ����(����0��ʾֹͣ����)��"; cin >> panduan;

		if (panduan != 0)
		{
			x[i] = panduan;
			n++;
		}
		else
		{
			break;
		}
	}

	//����
	for (int i = 0; i < n; i++)
	{
		sum = sum + pingFang(x[i]); //�������������������������ʽpingFangʱ������pingFang�������д������pingFang(),ͬʱ��ʵ�δ����β�
	}

	//���
	cout << "ƽ����Ϊ��" << sum << endl;


	system("pause");
}
*/

//�������أ���һ��������һ��˫�������ľ���ֵ�ĺ���
/*
#include<iostream>
using namespace std;

//���������������־���ֵ�ĺ���
int Abs(int a)
{
	return a >= 0 ? a : -a;
}
double Abs(double a)
{
	return a >= 0 ? a : -a;
}

void main()
{
	int a = -3;
	double b = 35.5;
	cout << Abs(a) << endl;
	cout << Abs(b) << endl;

	system("pause");
}
*/

//�ݹ����Fibonacci��쳲�����������
//Fibonacci���У�1��1��2��3��5��8��13��21��34��55��89..........,������ǰ����Ϊ1��1���������֮ǰ����֮��
/*
#include<iostream>
using namespace std;

//ʹ�õݹ�ķ�ʽ������쳲���������
long recursion(int n)  //�β�n�������������ţ����Զ��庯���ķ���ֵΪ������
{
	if (n == 1 || n == 2)
	{
		return 1L;     //
	}
	else
	{
		return recursion(n - 1) + recursion(n - 2);
	}
}

//ʹ��β�ݹ��д�����ٳ�������ʱ������
long fibonacci(long f1, long f2, int n) //f1��f2��ʾ֮ǰһ��Ͷ���,n��ʾ��ǰ������
{
	return n <= 1 ? f2 : fibonacci(f1 + f2, f1, n - 1);  //ͨ����������ķ���������ÿ�εݹ鶼�����ϴμ���״̬
}

void main()
{
	int n;

	cout << "��Fibonacci����ǰ�����1~36����";  cin >> n;

	for (int i = 1; i <= n; i++)
	{
		//cout << recursion(i) << '\t';
		cout << fibonacci(1, 1, i) << '\t';
	}

	system("pause");
}
*/

//ʹ�õݹ�ķ�����ɶ��ֲ���
/*
#include<iostream>
using namespace std;

//�ݹ�ʽ�Ķ��ֲ��Һ���
int find(int a[], int i, int j, double x)  //a[]������˳���ŷŵ����飬i������ʼλ�ã�j������ֹλ�ã�x��������ҵ�����
{
	int n, m, k;
	n = j - i + 1;

	if (n == 0)
	{
		return -1;
	}
	else
	{
		m = (i + j) / 2;
		if (x == a[m])
		{
			return m +1;
		}
		else if (x < a[m])
		{
			k = find(a, i, m - 1, x);
			return k;
		}
		else if (x > a[m])
		{
			k = find(a, m + 1, j, x);
			return k;
		}
	}
}

void main()
{
	int a[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 }; //һά����
	int n = 10;                                         //��¼����ĳ���
	int x;                                              //���ڴ�Ŵ����ҵ�����
	char p = 'y';                                       //���ڼ�¼�Ƿ��������



	while (p == 'y')
	{
		cout << "��������Ҫ���ҵ����ݣ�";
		cin >> x;

		int f = find(a, 0, n - 1, x);
		if (f != -1)
		{
			cout << f << endl;
		}
		else
		{
			cout << "�б���û�и����ݡ�" << endl;
		}

		cout << "�Ƿ����Ѱ����һ��������y/n��"; cin >> p;
	}


	system("pause");
}
*/

//�������أ�������
/*
#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

const int COL = 20;

//��������
void sort(double& a, double& b)   //ʹ�����ô��ݣ�ֱ���޸�ʵ�ε�ֵ
{
	if (a>b)
	{
		double tmp=a;
		a = b;
		b = tmp;
	}
}
//��������
void sort(double& a, double& b, double& c)
{
	sort(a, b);
	sort(a, c);
	sort(b, c);
}
//��������
void sort(double& a, double& b, double& c, double& d)
{
	sort(a, b, c);
	sort(a, d);
	sort(b, c, d);
}
//ʵ�����������ѡ������
void sort(double a[], int n)  //ʹ��������Ϊ�βΣ��ڵ���ʱֱ���޸�ʵ�Σ�n��ʾ����ĳ���
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			sort(a[j], a[j + 1]);
		}
	}
}
//���ַ����Ƚ�
int mystrcmp(char s1[], char s2[])
{
	int i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return s1[i] - s2[i];
}
//���ַ����Ƚ�������
void sort(char s1[], char s2[])
{
	//���ö��ַ����ȽϺ���ִ�ж��ַ�������
	if (mystrcmp(s1, s2) > 0)
	{
		char tmp[20];
		strcmp(tmp, s1);
		strcmp(s1, s2);
		strcmp(s2, tmp);
	}
}

void sort(char a[][COL], int n)
{
	//���ö���������ִ�д���������
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			sort(a[j], a[j + 1]);
		}
	}
}

void main()
{
	//2����3����4��ʵ������
	double a = 22.8, b = 115, c = 33.2, d = -10.9;
	sort(c, d);
	cout << c << " " << d << endl;
	sort(b, c, d);
	cout << b << " " << c << " " << d << endl;
	sort(a, b, c, d);
	cout << a << " " << b << " " << c << " " << d << endl;

	//ʵ����������
	double v[] = { 18, 9.3, 3.5, 5.6, 10, 8, 9, 10.5, 29, 20.9, 8.6, -5.4, -3, -1, 19 };
	sort(v, 15);
	for (int i = 0; i < 15; i++)
	{
		if (i == 0)
		{
			cout << v[i];
		}
		else
		{
			cout << " " << v[i];
		}
	}
	cout << endl;

	system("pause");
}
*/

//ָ��ͱ����Ĺ�ϵ
/*
#include<iostream>
using namespace std;
void main()
{
	int a = 5, * pta = &a;
	*pta = a + 8;
	cout << a << "," << pta << "," << *pta << endl; //*pta��ʾpta��ָ��ı���������a��

	system("pause");
}
*/

//ָ��ͺ����Ĺ�ϵ:ָ�봫��
/*
#include<iostream>
using namespace std;
void swap(int* xp, int* yp)  //�β�Ϊָ�����
{
	int a;
	a = *xp;     //�ڽ���ʱͨ����ӷ���������ܹ���ʵ�α������в���
	*xp = *yp;
	*yp = a;
}

void main()
{
	int a = 5, b = 9;

	cout << a << "   " << b << endl;

	swap(&a, &b);        //ʵ��Ϊ�����ĵ�ַ

	cout << endl << a << "   " << b << endl;
	system("pause");
}
*/

//����ָ��������غ����еĶ��ֵ
//����һ��һά����Ԫ�ص�ƽ��ֵ�����ܴ��������е����ֵ����Сֵ
/*
#include<iostream>
using namespace std;

double faver(int s[], int n, int* max, int* min)  //s-һά���飬n-������Ԫ�صĸ�����max-ָ�����ֵ��min-ָ����Сֵ
{
	double sum=s[0];      //�����������Ԫ�غ͵ı�������Ϊ˫�����ͣ���ô�õ��Ľ����ʧȥС��λ���������弰��ʼ��
	*max = *min = s[0];

	for (int i = 1; i < n; i++)
	{
		sum = sum + s[i];
		if (*max < s[i]) *max = s[i];
		if (*min > s[i]) *min = s[i];
	}
	return sum / n;
}

void main()
{
	int a[5] = { 80,89,90,95,100 }, max, min;
	double aver;   //���ڴ洢ƽ��ֵ

	aver = faver(a, 5, &max, &min);
	cout << "��������ƽ��ֵΪ��" << aver << "  " << "���ֵΪ��" << max << "  " << "��СֵΪ��" << min << endl;

	system("pause");
}
*/

//����ָ��ĺ���
/*
#include<iostream>
using namespace std;

//�����ַ�ָ��ĺ���,
char* noblank(char* str)
{
	while (*str == ' ') str++;  //���Ϊ���ַ�����ָ������
	return str;
}

void main()
{
	char* s1 = "    using namespace std;", *s2;

	s2 = noblank(s1);

	cout << s1 << endl;
	cout << s2 << endl;

	system("pause");
}
*/

//ָ������ָ�����
/*
#include<iostream>
#include<cmath>
using namespace std;

//����ָ��double�ͺ�����ָ��������ú�����һ��double�Ͳ�����
void main()
{
	double (*pf)(double);  //pf��һ��ָ�����������ָ�Ķ�����һ���������ú�����һ��˫�����͵��βΣ��䷵��ֵҲ��˫�����͡�
					  //������һ��ָ������ָ��֮�����ǿ���ͨ����ָ��ָ��һ������ĺ�����
	pf = sqrt;             //pf ָ��һ��ƽ�������������������Ǻ����ĵ�ַ��Ҳ���Ǻ�����ָ�룩

	//ʹ��*pf���Ե��øú���
	cout << (*pf)(2.0) << endl;  //�������2��ֵ
	cout << sqrt(2.0) << endl; //��������ʽ���ǵȼ۵�


	system("pause");
}
*/

//ָ�룺����������
/*
#include<iostream>
using namespace std;

void swap(double*x, double*y)
{
	double tem; //��ʱ������ݵı���
	tem = *x;
	*x = *y;
	*y = tem;
}
void paixu(double* a, double* b, double* c)
{
	//double tem;  //��ʱ������ݵı���

	if (*a > *b)
	{
		swap(*a, *b);
	}
	if (*a > * c)
	{
		swap(*a, *c);
	}
	if (*b > * c)
	{
		swap(*b, *c);
	}
}
void main()
{
	double a, b, c;

	cout << "��������������" << endl;
	cout << "a="; cin >> a;
	cout << endl << "b="; cin >> b;
	cout << endl << "c="; cin >> c;

	paixu(&a, &b, &c);  //ʹ��ָ�봫�ݣ��������β�ʱӦ�ø�����ǰ���ȡַ�����

	cout << "��������С����Ϊ��" << endl;
	cout << a << " " << b << " " << c << endl;
	system("pause");
}
*/

//ָ�룺ȥ���ַ����ײ��Ŀո�
/*
#include<iostream>
using namespace std;

//ȥ���ַ����ײ��Ŀո�
char* ltrim(char s[])
{
	int k, j;
	k = 0;
	while (s[k] == ' ')
	{
		k++;
	}
	j = k;
	while (s[j] != '\0')
	{
		s[j - k] = s[j];   //ÿ���ַ�ǰ��kλ
		j++;
	}
	s[j - k] = '\0';  //����ַ��Ľ�����
	return &s[0];     //�����ַ����ĵ�һ���ַ��ĵ�ַ�����׵�ַ
}
void main()
{
	char str[100];
	cout << "������ͷ�������ո���ַ�����";
	cin.getline(str, 99);

	cout << "ȥ�ո�ǰ-|" << str << "|" << endl;
	//ltrim(str);                                       //��������ȥ���ո���Զ��庯��û�з���ֵ�����Բ���ֱ�ӽ���д��������ʽ�С���д�ɷ���ָ��ĺ�����
	cout << "ȥ�ո��-|" << ltrim(str) << "|" << endl;

	system("pause");
}
*/

//ָ�룺����Բ���ܳ������
/*
#include<iostream>
using namespace std;

//����Բ��������ܳ�
void jiSuan(double radius, double* perimeter, double* area)
{
	double pi = 3.1415926;
	*perimeter = 2 * pi * (radius);
	*area = pi * (radius) * (radius);
}

//��д��ָ����ָ�����ʽ
//�����ܳ�
double Length(double r)
{
	return 2 * 3.1415926 * r;
}
//�������
double Area(double r)
{
	return 3.1415926 * r * r;
}
//ָ������ָ��
double Function(double (*f)(double), double x)
{
	return (*f)(x);
}

void main()
{
	double radius, per, area;

	//����
	cout << "������Բ�İ뾶��";   cin >> radius;   cout << endl;

	//����
	//jiSuan(radius, &per, &area);
	per = Function(Length, radius);  //��д��ָ������ָ��
	area = Function(Area, radius);

	//���
	cout << "��Բ���ܳ�Ϊ��" << per << "  " << "��Բ�����Ϊ��" << area << endl;


	system("pause");
}
*/

//ָ�룺���η����㶨����
//����Ѻ�����ָ����Ϊ�������βΣ���ô������Ĳ���������һ���������������ַ�ʽ�������ͨ���Ը��õĺ���
/*
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
	double sum = ((*fun)(a) + (*fun)(b)) / 2;   //���ñ�������������ʼ����ֹλ�õ�yֵ��

	for (int i = 1; i < n; i++)
	{
		sum += (*fun)(a + i * h);     //a+i*h�Ǳ�ʾͨ��������ֵ������ĳ��ȣ�����x1��x2��x3��..........
	}

	sum = sum * h;     //���㶨���ֵ�ֵ
	return sum;
}

//������
void main()
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
*/


//ָ�룺һά������ָ��
/*
#include<iostream>
using namespace std;

void main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, * p = a, i;
	i = 3;

	cout << *p << endl;
	p++;                      //ָ�������������ָ��ı��������йأ�pָ��int�ͣ���int�ͱ���Ϊ4���ֽڳ��ȣ����ԣ�p+1�൱��p+4��

	cout << *p << endl;


	system("pause");
}
*/

//ָ�룺ָ��Ĺ�ϵ����
/*
#include<iostream>
using namespace std;

void main()
{
	double x[5] = { 1, 2, 3.5, 4, 5.7 }, * p;

	for (p=x; p < x+5; p++)     //x+5������Ҳ����ָ�룬x+5���Կ�����һ��ָ�볣������������&x[5]��p < x+5������һ��ָ��Ĺ�ϵ����
	{
		cout << *p << "\t";
	}
	cout << endl;

	system("pause");
}
*/

//ָ�룺ʹ������Ԫ�ز�ͬ�ı�ʾ��ʽ�������Ԫ�ص�ֵ
/*
#include<iostream>
using namespace std;

void main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, * p = a, i;

	//�±귨
	for (i=0; i < 10; i++)
	{
		cout << "�±귨��" << a[i] << "\t" << p[i] << endl;
	}

	//ָ�뷨
	for (i = 0; i < 10; i++)
	{
		cout << "ָ�뷨��" << *(a + i) << "\t" << *(p + i) << endl;
	}

	system("pause");
}
*/

//ָ�룺��ά�����ָ��
/*
#include<iostream>
using namespace std;

void main()
{
	int a[3][4], i, j;
	int* p, max = a[0][0];

	//��������
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout << "����������������Ҫ12������"; cin >> a[i][j];
		}
	}

	//��������Ѱ�����ֵ
	for (p = &a[0][0]; p < &a[0][0] + 12; p++)   //ʹ�õ�ַ����ʽ������������Ƕ��ѭ���ķ�ʽ����Ϊ��֪����Ĵ�С���ʿ���ʹ�ø÷���
	{
		if (*p > max) max = *p;
	}

	cout << "�����е����ֵΪ��" << max << endl;

	system("pause");
}
*/

//ָ�룺ָ�����M��Ԫ�ص�һά����ָ��
/*
#include<iostream>
using namespace std;

void main()
{
	int a[3][4] = { {1, 3, 5, 7}, {2, 4, 6, 8}, {1, 2, 3, 4} }, (*p)[4];    //p��ָ�����4��Ԫ�صģ�һά�����ָ�������p��һ����ָ�����

#if 0 //����һ
	for (p = a; p < a + 3; p++)
	{
		cout << p << endl;  //����е�ַ
		//cout << *p << endl; //
		for (int j = 0; j < 4; j++)   //�����ͱ���j�����Ƹ����в�ͬ����Ԫ��
		{
			cout << *(*p + j) << "\t";  //p��һ����ָ�룬��ֵΪ0�е��е�ַ��p++��pָ����һ�У�*p�������0��Ԫ�صĵ�ַ��*p+jΪ����j��Ԫ�صĵ�ַ��*(*p+j)��ʾ��ַ��Ӧ������
		}
		cout << endl;
	}
#endif

	//������
	for (p = a; p < a + 3; p++)
	{
		for (int* q = *p; q < *p + 4; q++)  //
		{
			cout << *q << "\t";
		}
		cout << endl;
	}

	system("pause");
}
*/

//ָ�룺�ַ���ָ��
#include<iostream>
using namespace std;

char* strchr(char* str, char c)   //�βΣ�����һ���ַ�����c����Ҫ�����ҵ��ַ�
//�㷨����str�ĵ�һ���ַ����𣬲鵽�ַ���ͷ��ظ��ַ��ĵ�ַ;�鲻���򷵻ؿ�ֵNULL��
{
	while (*str != '\0')
	{
		if (*str == c) return str;     //����ҵ��˱����ҵ��ַ������ظ��ַ��ĵ�ַ
		str++;
	}
	return NULL;   //������Һ�û�и��ַ����򷵻ؿա�
}

//��д���ַ����в���ĳ�ַ��ĺ���
void main()
{
	char* str = "abcdefghij";
	char* p;
	p = strchr(str, 'g');
	if (p == NULL) cout << "�ַ������޸��ַ���" << endl;
	else
		cout << "���ַ��ڴ��е�λ���ǣ���ʼλ��Ϊ0����" << p - str << endl;     //p - str,p�д洢���Ǳ������ַ����ַ����еĵ�ַ��str�д洢�����ַ������׵�ַ��������ַ�������ĵó�������ַ��Ĳ�ֵ����Ϊ�ַ�ֻռһ���ֽڹ������ֵΪ���ַ����ַ����е�������

	system("pause");
}


