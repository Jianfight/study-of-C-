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
//�㷨ԭ������һ�򣬰��겻���İ�������
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
/*
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
*/

//ָ�룺���·���ֵת��Ϊ��Ӧ��Ӣ������
/*
#include<iostream>
using namespace std;

char* month_name(int n)
{
	static char* month[] =    //static��ʾ��ָ������Ϊ��̬����̬���飬�����������ͷſռ�
	{
		"lllegal month",    //�·�ֵ����
		"January",          //һ��
		"February",         //����
		"March",            //����
		"April",            //����
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	return (n >= 1 && n <= 12) ? month[n] : month[0];   //�����ַ�����ָ��
}

void main()
{
	int n;

	cout << "�������·�����";  cin >> n;
	cout << n << "-" << month_name(n) << endl;

	system("pause");
}
*/

//ָ�룺�ṹ����ָ��
/*
#include<iostream>
using namespace std;

void main()
{
	//�������ڽṹ����
	struct Date
	{
		int year;
		int month;
		int day;
	};


	Date d = { 2015, 4, 8 }, * p = &d;   //�������ڽṹ������ָ�����

	//��һ���������
	cout << (*p).year << "-" << (*p).month << "-" << (*p).day << endl;

	//�ڶ����������
	cout << p->year << "-" << p->month << "-" << p->day << endl;

	system("pause");
}
*/

//ָ�룺��̬���飬��̬���뵥����������̬��������
/*
#include<iostream>
using namespace std;

void main()
{
	double* p;

	p = new double;   //��̬����һ��˫�����͵������������������׵�ַ�����ָ��p�С�

	*p = 100.0;
	//double *p = new double(100.0);      //�ۺϳ�һ��������ʽ

	cout << p << "-��" << *p << endl;

	//��̬�������飬��̬������80���ַ�������
	char* str;
	str = new char[1];
	//*str = 'a';
	//cout << str;

	//��̬����n��Ԫ�ص�һά��������
	int n, * pint;

	cout << "������nֵ��";
	cin >> n;               //��������n

	pint = new int[n];     //��̬����n��Ԫ�ص�һά���飬����ɹ��Ļ�ָ��ָ���������׵�ַ�����벻�ɹ���ϵforͳ������һ����ָ�롣

	if (p == NULL)
	{
		cout << "�ռ�����ʧ�ܣ�";
	}

	cout << "������n������";
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];      //p[i]�ȼ���*(p+i)
	}

	system("pause");
}
*/

//ָ�룺��̬����ʵ��
/*
#include<iostream>
using namespace std;

//����һ����̬�������뺯��
void input(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "��" << i + 1 << "����Ϊ��";
		cin >> *p;   //��������
		cout << endl;
		p++;         //��¼һ�����ݺ�ָ��ָ����һ���ڴ�ռ�
	}
}

//�������е����ֵ
int findmax(int* p, int n)
{
	int max, i;
	int* q;   //���ڱ����׵�ַ

	q = p;
	max = *q;
	q++;

	for (i = 1; i < n; i++)
	{
		if (max < *q) max = *q;
		q++;                      //�Ա����ָ����һ����ַ��������һ�����ıȽ�
	}

	return max;
}


int main()
{
	int* p, n;
	cout << "������n��ֵ��";
	cin >> n;

	p = new int[n];
	if (p == NULL)     //�жϿռ������Ƿ�ɹ�
	{
		cout << "�ռ�����ʧ�ܣ�";
		return 1;
	}
	else
	{
		input(p, n);              //����Ԫ��
		cout << "�������ݵ����ֵΪ��" << findmax(p, n) << endl;    //�����ֵ
		delete[]p;                //�ͷ����뵽���ڴ�ռ�
	}

	system("pause");
	return 0;
}
*/

//ָ��ʵ������������
/*
#include<iostream>
using namespace std;

//�������е�Ԫ�ص���λ��
void invert(double* x, int n)
{
	double* i, * j, t;

	i = x;
	j = x + n - 1;

	while (i < j)
	{
		t = *i;
		*i = *j;
		*j = t;

		i++;
		j--;
	}
}
void main()
{
	int n;    //���ڼ��㶯̬����ĳ���
	cout << "����������ĳ��ȣ�";  cin >> n;
	cout << endl;

	double* a = new double[n];    //���붯̬����

#if 0
	if (p == NULL)     //�жϿռ������Ƿ�ɹ�
	{
		cout << "�ռ�����ʧ�ܣ�";
		//return 1;
	}
#endif

	cout << a << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "��" << i + 1 << "��Ԫ��Ϊ��"; cin >> a[i];  //���ʹ���±����ʽ�������е�Ԫ�ظ�ֵ���Ͳ�����������ɺ�ָ��ص������鿪ͷ
		cout << endl;
		//cout << a << endl;    //�������
		//cout << "��" << i + 1 << "��Ԫ��Ϊ��"; cin >> *a;  //ʹ��ָ�����ʽΪ����Ԫ�ظ�ֵ���ڸ�ֵ��������Ҫ��ָ��ص�������Ŀ�ͷ
		//a++;
	}

	//a = a - n;            //��̬����������󽫣�ָ���ĩβָ��ͷ�������ȡ����
	//cout << a << endl;

	invert(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << "��" << i + 1 << "��Ԫ��Ϊ��" << a[i] << endl;
		//a++;
	}

	delete[]a;       //�ͷŶ�̬����

	system("pause");
}
*/

//ָ��ʵ�����ַ�������
//�Զ������ַ����Ŀ����������ַ����ıȽϺ���
/*
#define _CRT_SECURE_NO_WARNINGS     //ʹ��strcpy����ʱ���ܻ���ְ�ȫ�Դ������ʾ��ʹ�ø�������֤���������
#include<iostream>
#include<cstring>

using namespace std;
//�Զ����ַ�����������
void mystrcpy(char* s1, char* s2)
{
	while (*s2 != 0)
		*s1++ = *s2++;   //���ַ���s2�е��ַ����Ƶ�s1�С�
	*s1 = '\0';          //�ڸ��ƽ����󣬸�s1�ִ�����ַ���������
}
//�Զ����ַ����ȽϺ���
int mystrcmp(char* s1, char* s2)    //�ַ����ȽϺ������书���ǽ����ַ����ӵ�һ���ַ���ʼ�Ƚϣ������ȱȽ���һ�����������ȣ����������Ƚ��ַ��Ĳ�ֵ
{
	while (*s1 == *s2 && *s1 != 0 && *s2 != 0)
	{
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

//�Զ��庯��sort���ַ�������
void sort(char (*a)[10], int n)   //*aָ���ַ���ά������У�n�����ַ���ά���������
{
	int i, j;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			 if (mystrcmp(a[i], a[j]) > 0)   //��ά�ַ������У�ÿһ�д洢��һ���ַ����������һ�е��ַ�������ǰһ�е��ַ������򽻻�����
			{
				char t[10];
				mystrcpy(t, a[i]);
				mystrcpy(a[i], a[j]);
				mystrcpy(a[j], t);
			}
		}
	}
}

void main()
{
	//����
	//char a[][10] = { "zhang", "wang", "wen", "xu", "li", "zhou" };  //�ַ���ά�������ڴ洢�ַ�����������ַ����������Ϊ10
	int n;
	cout << "�������ַ����ĸ�����";   cin >> n;

	//����һ����ά���ַ�����
	char(*a)[10] = new char[n][10];
	//��������
	for (int i = 0; i < n; i++)
	{
		cout << "��" << i + 1 << "���ַ���Ϊ��(�ַ����ĳ��Ȳ�Ҫ����10)";
		cin >> a[i];
	}

	//����ǰ���
	cout << "����ǰΪ��";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;

	//����
	sort(a, n);

	//���
	cout << "�����Ϊ��";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;

	//�ͷŶ�̬����
	delete[]a;

	system("pause");
}
*/

//ָ��ʵ����������IP��ַת��Ϊ���ʮ����
//�Զ�����8λ�Ķ�����ת��Ϊʮ���Ƶĺ���
/*
#include<iostream>
using namespace std;
//�Զ����麯������鴮���Ƿ���1��0����ַ�
bool check(char* a)
{
	int i;
	for (i = 0; i < 32; i++)
	{
		if (a[i] != '1' && a[i] != '0')
		{
			return false;   //�����0����1������ַ�������false
		}
	}
	return true;
}

//�Զ���ת����������8λ��������ת��Ϊʮ������
int trans(char* str)
{
	int n = 0, i;
	for (i = 0; i < 8; i++)
	{
		if (str[i] == '1')
		{
			n = n * 2 + 1;
		}
		else
		{
			n = n * 2;
		}
	}
	return n;
}

void main()
{
	char IP[33];
	char d = 'y';   //�����ж��Ƿ����ת��

	do
	{
		cout << "������32λ������IP��ַ��"; cin >> IP;

		if (strlen(IP) != 32)  //��Ч�Լ���
		{
			cout << "IP��ַ�ĳ���ӦΪ32λ��" << endl;  //11001010011101010011101001100100
		}
		else
			if (!check(IP))   //��Ч�Լ���
			{
				cout << "������0/1������ַ�������ȷIP��ַ��" << endl;
			}


			else
			{
				cout << "IP��ַ��Ӧ�ĵ��ʮ����д����" << endl;
				cout << trans(IP) << '.' << trans(IP + 8) << '.' << trans(IP + 16) << '.' << trans(IP + 24) << endl;  //ʵ����ÿ8λIP��ַ���׵�ַ������ֵΪʮ����IP
			}


		cout << "�Ƿ��������ת������y/n��";  cin >> d;
	} while (d == 'y');

	system("pause");
}

*/

//�ࣺ���壬ʹ��
/*
#include<iostream>
#include<windows.h>

using namespace std;

class Clock  //����һ���ӱ���
{
private:   //���ݳ�Աһ��Ϊ˽�г�Ա
	int Hour;    //Сʱ����
	int Minute;  //��������
	int Seccond; //������
	float Price;  //�۸�����

public:    //������Աһ��Ϊ���г�Ա
	void Set(int h, int m, int s, float p);   //����ʱ�����
	void Run();                               //�ӱ���ת����
	void Report_Time();                       //��ʱ�������
	void Show_Time() { cout << Hour << ":" << Minute << ":" << Seccond; }; //��ʾʱ�����,��������ֱ�Ӷ��庯����Ա
};

//�����ⲿ�����Ա����,�����޸�4�����ݳ�Ա��ֵ�ĺ���
void Clock::Set(int h, int m, int s, float p)
{
	Hour = h >= 0 && h <= 24 ? h:0;         //�ڸ�ֵ֮ǰ�Ƚ�����Ч�Լ���
	Minute = m >= 0 && m <= 60? m:0;
	Seccond = s >= 0 && m <= 60 ? m : 0;
	Price = p;
}

//�����ⲿ�����Ա������ģ�������ӱ����к���
void Clock::Run()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		Seccond++;
		if (Seccond == 60)
		{
			Seccond = 0;
			Minute++;
			if (Minute == 60)
			{
				Minute = 0;
				Hour++;
				if (Hour == 24) Hour = 0;
			}
		}
		//cout << "\r";    //�����У����ص�ǰ�е���λ,֮��֮������Ӷ���ո���Ϊ�˽���ǰ����ʾ�����ڸǴ���
		cout << endl;
		Sleep(1000);                //������ͣ������
		Show_Time();
	}
}

//���ⶨ���Ա���������㱨ʱ
void Clock :: Report_Time()
{
	cout << endl;
	// Show_Time();
	if (Minute == 0 && Seccond == 0)
	{
		for (int i = 0; i < Hour; i++)
		{
			cout << "\007";    //���Ƽ�����ķ��������壬"/007"�ü�����ķ���������һ�Ρ�
			Sleep(1000);
		}
	}
}

void main()
{
	//����������
	Clock XJTU_Big_Ben;   //�������������������Ҳ���Գ�����������������

	XJTU_Big_Ben.Set(0, 0, 0, 1000);
	cout << "�ӱ����õ�ʱ�䣺\n";
	//XJTU_Big_Ben.Show_Time();
	XJTU_Big_Ben.Report_Time();
	XJTU_Big_Ben.Run();
	cout << endl;
	system("pause");

	XJTU_Big_Ben.Set(5, 59, 50, 9000);
	cout << "\n�ӱ����õ�ʱ�䣺\n";
	XJTU_Big_Ben.Run();
	XJTU_Big_Ben.Report_Time();

	cout << endl;
	XJTU_Big_Ben.Show_Time();
	cout << endl;

	//���������֮��Ĵ���
	Clock Omiga;
	cout << "��ʾOmiga��ʱ�䣺";
	Omiga = XJTU_Big_Ben;
	Omiga.Show_Time();
	cout << endl;

	system("pause");
}
*/

//�ࣺ˽�С������뱣��
/*
#include<iostream>
using namespace std;

//������һ��������
class Fraction
{
protected:
	int a;  //���ӿ��Զ���Ϊ������Ա
	int b;                        //��ĸӦ�ö���Ϊ˽�г�Ա�򱣻���Ա����ֹ��ĸΪ0

private:
	//int b;                        //��ĸӦ�ö���Ϊ˽�г�Ա����ֹ��ĸΪ0
	int divisor(int p, int q);    //�����Լ������ʵ�ú����ŵ��������ͳ�Ա�ж�����

public:
	void Set(int aa, int bb);   //���÷��ӷ�ĸ
	void show();                //��ʾ����
	Fraction add(Fraction u);   //��һ������

};

//���÷��ӡ���ĸ
void Fraction::Set(int aa, int bb)
{
	a = aa;
	if (bb != 0)       //��ĸ��Ч�Լ���
	{
		b = bb;
	}
	else
	{
		a = 0;
		b = 1;
	}
	//cout << a << "/" << b << endl;
}

//��ʾ����
void Fraction::show()
{
	cout << a << "/" << b << endl;
}

//������ӣ���������u���ô���Ҫ��ϸ����ĥ�����ص����࣬����Ҳ��ͬ���һ��ʵ��
Fraction Fraction::add(Fraction u)
{
	int tmp;
	Fraction v;

#if 0
	v.a = a * u.b + b * u.a;   //�������
	v.b = b * u.b;              //�����ĸ

	tmp = divisor(v.a, v.b);   //������ӡ���ĸ�Ĺ�Լ��

	v.a = v.a / tmp;           //Լȥ��Լ��
	v.b = v.b / tmp;           //Լȥ��Լ��

	return v;                 //���ؽ��
#endif // 0

#if 1
	a = a * u.b + b * u.a;   //�������
	b = b * u.b;              //�����ĸ

	tmp = divisor(a, b);   //������ӡ���ĸ�Ĺ�Լ��

	a = a / tmp;           //Լȥ��Լ��
	b = b / tmp;           //Լȥ��Լ��

	return *this;                 //���ؽ��
#endif // 0 ʹ��thisָ��,�����ں������½���������ֱ���޸Ĳ��������������


}

//�������Լ��
int Fraction::divisor(int p, int q)
{
	int r;
	if (p < q)
	{
		int tmp;
		tmp = p;
		p = q;
		q = tmp;
	}
	r = p % q;
	while (r != 0)
	{
		p = q;
		q = r;
		r = p % q;
	}
	return q;
}


//�̳з����࣬����һ��ʵ����
class Real : public Fraction
{
public:
	void show_real()
	{
		cout << a << '/' << b << '=' << a / (double)b << endl;   //b�ڷ�������λ��˽�г�Ա�У��ڴ˴����ɷ��ʣ�Ӧ������䵽������Ա��
	}
};

//������
void main()
{
	Real f1, f2, f3;   //���������������
	int a, b, c, d;
	Fraction f4;       //���ڴ洢������ӵĽ��

	cout << "\n��ֱ��������������ķ������ĸ����ĸΪ0ʱ�˳�\n";

	cin >> a >> b;
	cin >> c >> d;

	f1.Set(a, b);
	f2.Set(c, d);

	cout << "��һ������f1Ϊ��";
	f1.show_real();
	cout << "�ڶ�������f2Ϊ��";
	f2.show_real();

	f4 = f1.add(f2);   //����Fraction��ķ�����ӹ���
	cout << "��������ӵĽ��f4Ϊ��";
	f4.show();

	cout << "��ʾ��������Ķ���f1���۲����Ƿ����仯��";
	f1.show_real();

	system("pause");
}
*/

//�ࣺ���������ƣ�ʹ�ü̳еķ�ʽ�������ࣩ
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<time.h>       //ȡ��ϵͳ��������Ҫ��Ӹ�ͷ�ļ�
using namespace std;

#if 0
//����һ��ʱ��ṹ��
struct tm
{
	int tm_year;
	int tm_mon;
	int tm_mday;
};
#endif
//����һ��������
class Date
{
private:
	int year, month, day;   //���洢�����յı���˽�л�

	//ȡ��ϵͳ������
	void SetSystemDate();


public:
	//����һ����ʼ�������յĺ���
	void init(int y, int m, int d);

	//�����ո�ʽ��ʾ
	void  print_ymd() { cout << year << '.' << month << '.' << day <<endl; }

	//�������ʽ��ʾ
	void print_mdn() { cout << month << '.' << day << '.' << year <<endl; }

	//ȡ�����
	int get_year() {return year; }

	//ȡ���·�
	int get_month() { return month; }

	//ȡ������
	int get_day() { return day; }

	//�ж��Ƿ�Ϊ����
	bool IsLeapYear();
};

//���ⶨ��ȡ��ϵͳ������
void Date::SetSystemDate()
{
	//ȡ��ϵͳ����
	tm* gm;                     //tm��ʱ�䣨��������ʱ���룩�ṹ��,�������time.hͷ�ļ���
	time_t t = time(NULL);      //time_t�ǳ����ͣ�t��ʾ��������������ĳһʱ�������ڵ���������
	gm = gmtime(&t);            //gmtime()�����Ǹ��ݻ�ȡ�������������������Ǹ�ʱ�������ھ����˶����꣬�����һ�����־����˶��ٸ��£�����������־����˶�����

	year = 1900 + gm->tm_year;
	month = gm->tm_mon + 1;      //֮�����ڼ����·ݵ�ʱ���1������Ϊ���Ǹ�����������������������Ѿ���ȥ�˶��ٸ��£���ȥ���º����ڵ������1
	day = gm->tm_mday;
}

//���ⶨ�����ڳ�ʼ������
void Date::init(int y, int m, int d)
{
	//�ٳ�ʼ�������������ú�����Ӧ�Ƚ��кϷ��Լ��飬���������ֵ
	if(y >= 1000 && y <=9999 )
		year = y;
	else
	{
		SetSystemDate();  //�����������ڸ�ʽ����������ϵͳ��ǰ������
		return;
	}

	if(m >= 1 && m <= 12)
		month = m;
	else
	{
		SetSystemDate();  //�����������ڸ�ʽ����������ϵͳ��ǰ������
		return;
	}

	if(d >= 1 && d <= 31)
		day = d;
	else
	{
		SetSystemDate();  //�����������ڸ�ʽ����������ϵͳ��ǰ������
		return;
	}
}

//���ⶨ���ж����꺯��
//�㷨ԭ������һ�򣬰��겻���İ�������
bool Date::IsLeapYear()
{
	if ((((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

//������
void main()
{
	Date date1;          //����һ�����ڶ��󣬵�δ��ʼ��
	date1.print_ymd();  //��ʾδ��ʼ�����ݵ����
	system("pause");

	date1.init(2008, 3, 28);  //��ʼ�����ݳ�Ա
	date1.print_ymd();
	system("pause");

	Date date2;
	date2.init(2006, 13, 28); //��ʼ��һ����������������
	date2.print_mdn();        //����������ʾ����
	system("pause");

	if (date1.IsLeapYear())     //�����ж����꺯��
	{
		cout << date1.get_year() << "������" << endl;
	}
	else
	{
		cout << date1.get_year() << "��������" << endl;
	}
	system("pause");

}


//�ࣺ����ʱ����̳������˼��(��̽)
//���������Ѿ������һ�������࣬���������������һ��ʱ���࣬�ٸ����������࣬ʹ�ü̳еķ�������������ʱ����
class Time  //����һ���ӱ���
{
private:   //���ݳ�Աһ��Ϊ˽�г�Ա
	int Hour;    //Сʱ����
	int Minute;  //��������
	int Second; //������


public:    //������Աһ��Ϊ���г�Ա
	void init_time(int h, int m, int s);   //����ʱ�����
	void Show_Time() { cout << Hour << ":" << Minute << ":" << Second; }; //��ʾʱ�����,��������ֱ�Ӷ��庯����Ա

	int get_hour() { return Hour; }
	int get_minute() { return Minute; }
	int get_second() { return Second; }
};

//�����ⲿ�����Ա����,�����޸�4�����ݳ�Ա��ֵ�ĺ���
void Time::init_time(int h, int m, int s)
{
	Hour = h >= 0 && h <= 24 ? h : 0;         //�ڸ�ֵ֮ǰ�Ƚ�����Ч�Լ���
	Minute = m >= 0 && m <= 60 ? m : 0;
	Second = s >= 0 && m <= 60 ? m : 0;
}


//ͨ���̳е���ʽ����������ʱ����
class DateTime :public Date, Time
{

public:
	void init_datetime(int y, int m, int d, int h, int mi, int s) { init(y, m, d); init_time(h, mi, s); }  //ͨ���̳еķ�ʽ�����������еĳ�ʼ��������������ĳ�ʼ������
	void show_datetime() { print_ymd(); Show_Time(); }     //ͨ���̳еķ�ʽ�����������е���ʾ���������������ʾ����

};

#if 0
//��������ʱ�����������
void main()
{
	DateTime wj;

	wj.init_datetime(2020, 2, 28, 18, 3, 50);
	wj.show_datetime();

	cout << endl;
	system("pause");
}
#endif
*/

//�ࣺ����������
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<Windows.h>
#pragma comment (lib, "winmm.lib")  //��Ϊ���ڵ���mciSendStringA����ʱ����ʾ�޷������ⲿ���������������winmm.lib

using namespace std;

class automobile
{
private:

	char type[20];             //�����ͺ�
	char color[20];            //������ɫ
	float price;               //�����۸�
	int carry_weight;          //������
	int carry_custome;         //�ؿ���

public:

	void set_data(char* t, char* c, float pri, int cw, int cc);   //��ʼ�����޸����ݳ�Ա
	void movecar(int l, int k);                                 //����ˮƽ�˶�k��
	void horming(int num);                                      //��������
	void downcar(int l);                                        //������ֱ�����˶�
	void play_mp3(char* ps);                                    //��������
	char* show_type() { return type; }                          //ȡ�������ͺ�

};

//���ⶨ���ʼ������
void automobile::set_data(char* t, char* c, float pri, int cw, int cc)
{
	strcpy(type, t);
	strcpy(color, c);
	price = pri;
	carry_weight = cw;
	carry_custome = cc;
}

//���ⶨ��ˮƽ�˶�����
void automobile::movecar(int l, int k)
{
	cout << "\n" << type << "ˮƽֱ���˶���" << endl;
	for (int i = 0; i < l; i++)
	{
		cout << ' ' << "O-O";
		Sleep(1000 / k);
		cout << "\b\b\b";
	}
}

//���ⶨ�崹ֱ�½��˶�����
void automobile::downcar(int l)
{
	//��ֱ�½��˶�
	cout << "\n" << type << "��ֱ�½��˶���" << endl;
	for (int i = 0; i < l; i++)
	{
		cout << "O-O";
		Sleep(500);
		cout << "\b\b\b" << "   ";
		cout << endl;
	}
}

//���ⶨ�����Ѻ���
void automobile::horming(int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << type;
		cout << "\007" << "  di....." << endl;
		Sleep(1000);
	}
}

//���ⶨ�岥�����ֺ���
void automobile::play_mp3(char* ps)
{
	char str[100] = "play ";
	strcat(str, ps);                       //�������ַ�����������
	cout << str;
	mciSendStringA(str, NULL, 0, NULL);     //һ�����ź���,������window.hͷ�ļ���
	//

	char a;
	cin >> a;    //���������ַ���������
}

//������
void main()
{
	automobile nison;
	char tp[] = "yyide";
	char ys[] = "white";

	nison.set_data(tp, ys, 200000, 5, 3);  //�������ó�ʼ���ݺ���

	nison.horming(5);                      //�������Ѻ���

	nison.movecar(10, 3);                  //����ˮƽֱ���˶�
	nison.downcar(8);                      //���Դ�ֱ�½�����

	char mp[] = "c:\\ceshiyinyue.mp3";                 //�������ļ�.mp3�ŵ�C�̸�Ŀ¼��
	nison.play_mp3(mp);                     //���Բ���MP3����

	system("pause");
}
*/

//�ࣺԲ�����ƣ���һ������ʹ����һ���ඨ��ı�����
/*
s#include<iostream>
using namespace std;

//����
class Point
{
private:  //�����дprivate����Ĭ�����Ϊ˽�г�Ա

	double x;  //���õ��ƽ������ֵ
	double y;

public:
	//��������
	void InitPoint(double, double);

	//����������
	void Pring();

	//�õ�����
	double GetX() { return x; }
	double GetY() { return y; }
};

//Բ��
class Circle
{
private:
	
	//Բ�İ뾶
	double radius;

	//Բ��Բ��,��һ��������������һ����Ķ���
	Point Center;

public:
	//����Բ�������
	void InitCircle(double, Point);

	//�������
	double Area() { return 3.1415926 * radius * radius; }

	//���Բ����
	void Print();

	//�õ�Բ����
	double GetRadius() { return radius; }
	Point GetCenter() { return Center; }                     //���ص���һ�������

};

//���ⶨ����ຯ����Ա
void Point::InitPoint(double a, double b)
{
	x = a;
	y = b;
}
void Point::Pring()
{
	cout << '[' << x << ',' << y << ']';
}

//���ⶨ��Բ�ຯ����Ա
void Circle::InitCircle(double r, Point p)
{
	radius = (r > 0 ? r : 0);   //���һ�������Լ��飬����뾶Ϊ��������ô���뾶��ֵΪ0
	Center = p;
}
void Circle::Print()
{
	cout << "Center =";
	Center.Pring();                  //����center����point���һ�����󣬵�������������������
	cout << "; Radius = " << radius << endl;
}

//������
void main()
{
	Point p, center;

	p.InitPoint(30, 50);
	center.InitPoint(120, 80);

	Circle c;
	c.InitCircle(10, center);

	cout << "Point p:";
	p.Pring();             //���Ե����е���ʾ����
	cout << endl;

	cout << "Circle c:";             
	c.Print();               //����Բ���е���ʾ����

	cout << "The center of circle c:";
	c.GetCenter().Pring();                 //GetCenter�������ص���Point��Ķ��󣬸ö������ʹ��Point���еĺ�����
	
	cout << "\nThe area of circle c:" << c.Area() << endl;

	system("pause");
}
*/

//��ʵ����ѧ����Ϣ��(������Ķ�������)
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

//ѧ����Ϣ��Ķ���
class Info
{

private:

	int Id;                //ѧ��
	char Name[20];         //����
	double Programming;    //������ƿγ̳ɼ�
	double Network;        //����γ̳ɼ�
	double Database;       //���ݿ�ɼ�
	double Total;          //�ܷ�

public:

	//��ʼ������
	void Set_info(int id, char* name, double programming, double nerwork, double database);
	double Get_Pro() { return Programming; }           //���س�����Ƴɼ�
	double Get_Net() { return Network; }            //���ؼ��������γ̳ɼ�
	double Get_Dat() { return Database; }            //�������ݿ�ɼ�
	double Get_Tol() { return Total; }            //�����ܷ�
	void Show();                 //��ʾ����

};

//���ⶨ�庯��
void Info::Set_info(int id, char* name, double programming, double network, double database)
{
	Id = id;
	strcpy(Name, name);
	Programming = programming;
	Network = network;
	Database = database;
	Total = programming + network + database;
}
void Info::Show()
{
	cout << Id << "\t";
	cout << Name << "\t";
	cout << Programming << "\t";
	cout << Network << "\t";
	cout << Database << "\t";
	cout << Total << endl;
}

//����һ�������ܳɼ���ѧ����������ĺ���
void sort_of_total(Info student[], int count)
{
	int i = 0, j = 0;
	Info tmp;

	//ð������
	for (i=0; i < count; i = i+1)
	{
		for (j = count - 1; j > i; j = j - 1)
		{
			if (student[j].Get_Tol() > student[j-1].Get_Tol())
			{
				tmp = student[j];
				student[j] = student[j - 1];
				student[j - 1] = tmp;
			}
		}
	}
}

//����һ����ʾ�б���ĺ���
void show_of_headline()
{
	cout << "ѧ��" << "\t";
	cout << "����" << "\t";
	cout << "������Ƴɼ�" << "\t";
	cout << "���������ɼ�" << "\t";
	cout << "���ݿ�ɼ�" << "\t";
	cout << "�ܷ�" << endl;
}

//������
void main()
{
	//const int count = 5;       //���������ĳ�Ա��������Ϊ5����ʹ�ó�����ʽ������Ϊ�˷����޸�
	const int MAX_COUNT = 500;   //�������洢��ѧ������Ϊ500,��ʱһ��Ԥ������������ķ�ʽ��������һ���򵥵ķ���

	int i = 0, j = 0;           //��������ѭ������

	//������������ݱ���
	int id;
	char name[20];
	double programming, network, database;

	Info student[MAX_COUNT], tmp;

	int count;               //����һ�������洢ʵ�ʵ�ѧ������
	cout << "������ѧ��������";
	cin >> count;
	while (count > MAX_COUNT)
	{
		cout << "ѧ���������ܳ���" << MAX_COUNT << "�ˣ����������룺";
		cin >> count;
	}

	cout << "������ѧ���ĳɼ���Ϣ" << endl;
	cout << "ѧ�� ���� ������Ƴɼ� ���������ɼ� ���ݿ�ɼ�" << endl;

	//��������
	for (i = 0; i < count; i++)
	{
		cin >> id >> name >> programming >> network >> database;
		student[i].Set_info(id, name, programming, network, database);
	}

	//�����ܳɼ���ѧ������һ������
	sort_of_total(student, count);

	//������ʾ
	cout << "���ָܷߵ��������£�" << endl;

	//���������ͷ������
	show_of_headline();

	for (i = 0; i < count; i++)
	{
		student[i].Show();
	}

	//��ʾÿ�ųɼ�������85�ֵ�ѧ������
	cout << "ÿ�Ƴɼ�������85�ֵ�ѧ��" << endl;
	show_of_headline();

	for (i = 0; i < count; i++)
	{
		if (student[i].Get_Pro() > 85 && student[i].Get_Net() > 85 && student[i].Get_Dat() > 85)
		{
			student[i].Show();
		}
	}

	system("pause");
}
*/

//�ࣺ���캯��
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<time.h>
using namespace std;

//Ϊ���������һ�����캯��
//����һ��������
class Date
{
private:
	int year, month, day;   //���洢�����յı���˽�л�

public:

	//�������Ĺ��캯��
	Date(int y = 1900, int m = 1, int d = 1)
	{
		year = y;
		month = m;
		day = d;
	}

	//ȡ��ϵͳ������
	void SetSystemDate();

	//����һ����ʼ�������յĺ���
	void init(int y, int m, int d);

	//�����ո�ʽ��ʾ
	void  print_ymd() { cout << year << '.' << month << '.' << day << endl; }

	//�������ʽ��ʾ
	void print_mdn() { cout << month << '.' << day << '.' << year << endl; }

	//ȡ�����
	int get_year() { return year; }

	//ȡ���·�
	int get_month() { return month; }

	//ȡ������
	int get_day() { return day; }

	//�ж��Ƿ�Ϊ����
	bool IsLeapYear();
};

//���ⶨ�����ڳ�ʼ������
void Date::init(int y, int m, int d)
{
	//�ٳ�ʼ�������������ú�����Ӧ�Ƚ��кϷ��Լ��飬���������ֵ
	if (y >= 1000 && y <= 9999)
		year = y;
	else
	{
		SetSystemDate();  //�����������ڸ�ʽ����������ϵͳ��ǰ������
		return;
	}

	if (m >= 1 && m <= 12)
		month = m;
	else
	{
		SetSystemDate();  //�����������ڸ�ʽ����������ϵͳ��ǰ������
		return;
	}

	if (d >= 1 && d <= 31)
		day = d;
	else
	{
		SetSystemDate();  //�����������ڸ�ʽ����������ϵͳ��ǰ������
		return;
	}
}

//���ⶨ��ȡ��ϵͳ������
void Date::SetSystemDate()
{
	//ȡ��ϵͳ����
	tm* gm;                     //tm��ʱ�䣨��������ʱ���룩�ṹ��,�������time.hͷ�ļ���
	time_t t = time(NULL);      //time_t�ǳ����ͣ�t��ʾ��������������ĳһʱ�������ڵ���������
	gm = gmtime(&t);            //gmtime()�����Ǹ��ݻ�ȡ�������������������Ǹ�ʱ�������ھ����˶����꣬�����һ�����־����˶��ٸ��£�����������־����˶�����

	year = 1900 + gm->tm_year;
	month = gm->tm_mon + 1;      //֮�����ڼ����·ݵ�ʱ���1������Ϊ���Ǹ�����������������������Ѿ���ȥ�˶��ٸ��£���ȥ���º����ڵ������1
	day = gm->tm_mday;
}

//���ⶨ���ж����꺯��
//�㷨ԭ������һ�򣬰��겻���İ�������
bool Date::IsLeapYear()
{
	if ((((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

//������
void main()
{
	Date date1;
	date1.print_ymd();
	date1.init(2008, 8, 23);
	date1.print_ymd();

	Date date2(2013, 6, 1);          //ֱ��ͨ�����캯������ʼ���˶���
	date2.print_ymd();

	system("pause");
}
*/

//�ࣺ���ع��캯��
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;
class Date
{
private:
	int year, month, day;

public:
	Date() :year(1900), month(1), day(1) //�޲ι��캯��
	{

	}

	Date(int yy, int mm = 1, int dd = 1);      //Ĭ�ϲ������캯��,������ݱ���û�и����ֵ

	Date(Date& d) :year(d.year), month(d.month), day(d.day) {};  //���ڶ���������캯��


	Date(char* ps);                                            //�ַ������ڹ��캯��

	void print_ymd();
};

//���ⶨ�庯��
void Date::print_ymd()
{
	cout << year << '-' << month << '-' << day << endl;
}
//�����ⶨ��Ĭ�ϲ������캯��
Date::Date(int yy, int mm, int dd) :year(1900), month(1), day(1)
{
	if (yy >= 1900 && yy <= 9999)
	{
		year = yy;
	}
	else
	{
		return;           //����������ݲ�������ʹ��ͷ����Ĭ��ֵΪ�����ʼ��
	}

	if (mm >= 1 && mm <= 12)
		month = mm;
	else
	{
		year = 1900;               //���������·ݲ���ȷ������ݻָ�Ĭ��ֵ���·ݣ��찴��Ĭ��ֵ��ֵ
		return;
	}

	if (dd >= 1 && dd <= 31)
		day = dd;
	else
	{
		year = 1900;
		month = 1;                //���������첻��ȷ������ݺ��·ݻָ�Ĭ��ֵ���찴Ĭ��ֵ��ֵ
		return;
	}
}
//�ַ������ڹ��캯��
Date::Date(char* ps) :year(1900), month(1), day(1)
{
	char py[5], pm[3], pd[3];
	strncpy(py, ps, 4);                  //�涨���ȵ��ַ���������������������Ĳ���ֵ��������Ӧ�������ַ�
	ps = ps + 5;

	strncpy(pm, ps, 2);
	ps = ps + 3;

	strncpy(pd, ps, 2);

	int yy = atoi(py), mm = atoi(pm), dd = atoi(pd);

	if (yy >= 1900 && yy <= 9999) year = yy; else return;

	if (mm >= 1 && mm <= 12)
		month = mm;
	else
	{
		year = 1900;
		return;
	}

	if (dd >= 1 && dd <= 31)
		day = dd;
	else
	{
		year = 1900;
		month = 1;                //���������첻��ȷ������ݺ��·ݻָ�Ĭ��ֵ���찴Ĭ��ֵ��ֵ
		return;
	}
}
//������
void main()
{
	Date date1;
	cout << "date1:";             //ʹ���޲ι��캯��
	date1.print_ymd();

	Date date2(2006);
	cout << "date2:";
	date2.print_ymd();

	Date date3(2006, 4);
	cout << "date3:";
	date3.print_ymd();

	Date date4(2006, 4, 8);
	cout << "date4:";
	date4.print_ymd();

	Date date5(2006, 14, 8);    //ʹ��һ��������·ݣ��۲�������
	cout << "date5:";
	date5.print_ymd();

	Date date6(date4);          //���ڶ���������캯��
	cout << "date6:";
	date6.print_ymd();

	Date date7("2008-08-08");   //ʹ���ַ������ڹ��캯��
	cout << "date7:";
	date7.print_ymd();


	system("pause");
}
*/

//�ࣺ��������
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;

//������
class Date
{
private:
	int year, month, day;

public:
	Date() :year(1900), month(1), day(1)         //�޲ι��캯��
	{

	};

	Date(int yy, int mm = 1, int dd = 1);      //Ĭ�ϲ������캯��,������ݱ���û�и����ֵ

	Date(Date& d) :year(d.year), month(d.month), day(d.day) {};  //���ڶ���������캯��


	Date(char* ps);                                            //�ַ������ڹ��캯��

	void print_ymd();

	~Date()  //������������
	{
		static int i = 1;

		cout << "�������ڶ���" << i << "\n";
		i++;
	};
};

//���ⶨ�庯��
void Date::print_ymd()
{
	cout << year << '-' << month << '-' << day << endl;
}
//�����ⶨ��Ĭ�ϲ������캯��
Date::Date(int yy, int mm, int dd) :year(1900), month(1), day(1)
{
	if (yy >= 1900 && yy <= 9999)
	{
		year = yy;
	}
	else
	{
		return;           //����������ݲ�������ʹ��ͷ����Ĭ��ֵΪ�����ʼ��
	}

	if (mm >= 1 && mm <= 12)
		month = mm;
	else
	{
		year = 1900;               //���������·ݲ���ȷ������ݻָ�Ĭ��ֵ���·ݣ��찴��Ĭ��ֵ��ֵ
		return;
	}

	if (dd >= 1 && dd <= 31)
		day = dd;
	else
	{
		year = 1900;
		month = 1;                //���������첻��ȷ������ݺ��·ݻָ�Ĭ��ֵ���찴Ĭ��ֵ��ֵ
		return;
	}
}
//�ַ������ڹ��캯��
Date::Date(char* ps) :year(1900), month(1), day(1)
{
	char py[5], pm[3], pd[3];
	strncpy(py, ps, 4);                  //�涨���ȵ��ַ���������������������Ĳ���ֵ��������Ӧ�������ַ�
	ps = ps + 5;

	strncpy(pm, ps, 2);
	ps = ps + 3;

	strncpy(pd, ps, 2);

	int yy = atoi(py), mm = atoi(pm), dd = atoi(pd);

	if (yy >= 1900 && yy <= 9999) year = yy; else return;

	if (mm >= 1 && mm <= 12)
		month = mm;
	else
	{
		year = 1900;
		return;
	}

	if (dd >= 1 && dd <= 31)
		day = dd;
	else
	{
		year = 1900;
		month = 1;                //���������첻��ȷ������ݺ��·ݻָ�Ĭ��ֵ���찴Ĭ��ֵ��ֵ
		return;
	}
}

//������
void main()
{

	{   //�������������һ�Դ����ţ��������������ͣǰ���������������������ʹ����������ʾ�������������Ӹô����ţ�����ͣ����������������������ٶ�̫����޷����۲쵽
		Date date1;
		cout << "date1:";             //ʹ���޲ι��캯��
		date1.print_ymd();

		Date date2(2006);
		cout << "date2:";
		date2.print_ymd();

		Date date3(2006, 4);
		cout << "date3:";
		date3.print_ymd();

		Date date4(2006, 4, 8);
		cout << "date4:";
		date4.print_ymd();

		Date date5(2006, 14, 8);    //ʹ��һ��������·ݣ��۲�������
		cout << "date5:";
		date5.print_ymd();

		Date date6(date4);          //���ڶ���������캯��
		cout << "date6:";
		date6.print_ymd();

		Date date7("2008-08-08");   //ʹ���ַ������ڹ��캯��
		cout << "date7:";
		date7.print_ymd();
	}


	system("pause");
}
*/

//��ʵ�����������뺯��
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class Robot
{
private:

	char name[20];   //����������
	char type[20];   //�������ͺ�

public:

	Robot()    //���캯��
	{
		strcpy(name, "XXXXXX");
		strcpy(type, "xxxxxx");
	}

	//����һ�����ú���
	void set(char n[], char t[])
	{
		strcpy(name, n);
		strcpy(type, t);
	}

	void out(int a);  //Ӣ����ÿ��λ��������ͬ�����Զ���out��������С��1000����

	void tran_int(int n);   //��1��1999999999�����������Ӣ�ľ���

	~Robot() {};    //��������
};

//��������ȫ���ַ�ָ�����飬��ȡ����ĵ���
//num1��Ϊ1��19���ճ���0�����Կ���ֱ����num1[n]���ã��õ�n��Ӧ�ĵ���
static char* num1[] =
{
	"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", "thirteen ",
	"fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "
};

//num10��Ϊ20-90���ճ���0��1�����Կ���ֱ����num10[n/10]���ã��õ�n��Ӧ����
static char* num10[] =
{
	"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "
};

//���ⶨ���С��1000�������뺯��
void Robot::out(int a)
{
	int b = a % 100;
	//����λ����Ϊ0�������λ����hundred������ʱʮλ��λ��Ϊ0������and
	if (a / 100 != 0)
	{
		cout << num1[a / 100] << "hundred ";
		if (b != 0)
			cout << " and ";
	}
	//������λ��20���ڣ�ֱ�ӵ���num1[n],���
	if (b < 20)
	{
		cout << num1[b];
	}
	//��b����20ʱ
	else
	{
		//�ȵ���num10,���ʮλ��
		cout << num10[b / 10];
		//��λ��Ϊ0ʱӦ�����λ��
		if (b % 10 != 0)
			cout << "\b-" << num1[b % 10];
	}
}

//�������뺯��
void Robot::tran_int(int n)
{
	if (n > 1999999999)
		cout << "dev c++ƽ̨�޷��������1999999999λ������" << endl;
	else
	{
		//��λ��λȡ�ߣ�����abcd�ĸ�������
		int a = n / 1000000000, b = (n % 1000000000) / 1000000, c = (n % 1000000) / 1000, d = n % 1000;
		//������0ʱ�����������millon��thousand
		if (a != 0)
		{
			out(a);
			cout << "billion ";
		}
		if (b != 0)
		{
			out(b);
			cout << "million ";
		}
		if (c != 0)
		{
			out(c);
			cout << "thousand ";
		}
		if (d != 0)
		{
			//����Ӣ���﷨���������λǰһ����and
			if (d < 100 && (a != 0 || b != 0 || c != 0))
				cout << " and ";
			out(d);
		}
	}
	cout << endl;
}

//������:���Ժ���
void main()
{
	int n;
	cout << "������n: ";
	cin >> n;
	cout << n << endl;

	Robot brown;
	brown.tran_int(n);

	system("pause");
}
*/

//��ʵ�����������루����������ʵ�����壩
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

//��������ȫ���ַ�ָ�����飬��ȡ����ĵ���
//num1��Ϊ1��19���ճ���0�����Կ���ֱ����num1[n]���ã��õ�n��Ӧ�ĵ���
static char* num1[] =
{
	"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", "thirteen ",
	"fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "
};

//num10��Ϊ20-90���ճ���0��1�����Կ���ֱ����num10[n/10]���ã��õ�n��Ӧ����
static char* num10[] =
{
	"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "
};

//�����������
class Robot
{
private:

	char name[20];   //����������
	char type[20];   //�������ͺ�

	//��ԭ�еĻ�������������޸�
	int num;        //�����������
	char* ps;        //ָ��Ӣ���ַ���

public:

	Robot()    //���캯��
	{
		strcpy(name, "XXXXXX");
		strcpy(type, "xxxxxx");

		//��ԭ�й��캯�������޸�
		num = 0;
		ps = new char[5];
		strcpy(ps, "zero");
	}

	//����һ������/�޸ĺ���
	void set(char n[], char t[], int m);

	char* out(int a);  //Ӣ����ÿ��λ��������ͬ�����Զ���out��������С��1000�����������������޸�Ϊ���ַ���ָ��

	char* tran_int(int n);   //��1��1999999999�����������Ӣ�ľ��ӡ������������޸�Ϊ���ַ���ָ��

	void print_num();       //���������������Ӣ�ľ���

	~Robot()
	{
		cout << "������" << strlen(ps) + 1 << "���ֽڿռ��ͷ��ջ�" << endl;
		delete[] ps;

	};    //�����������ͷŹ��캯����set�����ж�̬���������
};

//���ⶨ�����ú���
void Robot::set(char n[], char t[], int m)
{
	strcpy(name, n);
	strcpy(type, t);

	//��ԭ�е�����/�޸ĺ��������޸�
	if (num == m)  //�����������û�б�
		return;     //ֱ�Ӵ����ú�������
	else
	{
		num = m;
		delete[] ps; //ɾ�����е�Ӣ�ľ���
	}
	if (num > 0)
	{
		char* tp = tran_int(num);              //����һ���ַ���ָ�룬����ָ������
		ps = new char[strlen(tp) + 1];         //���¶�̬�����ַ�������
		strcpy(ps, tp);
		delete[] tp;                           //�ͷ���tran_int�ж�̬����Ŀռ�
	}
	else if (num == 0)
	{
		ps = new char[5];
		strcpy(ps, "zero");
	}
	else
	{
		ps = new char[13];
		strcpy(ps, "�������ܷ���");
	}
}

//���ⶨ���С��1000�������뺯��
char* Robot::out(int a)
{
	char k[1000] = "";          //����һ���ַ������飬���ڴ洢���ؽ��

	int b = a % 100;
	//����λ����Ϊ0�������λ����hundred������ʱʮλ��λ��Ϊ0������and
	if (a / 100 != 0)
	{
		//cout << num1[a / 100] << "hundred ";
		strcat(k, num1[a / 100]);     //strcat�������ڶ����������ӵ���һ��������ĩβ
		strcat(k, "hundred ");
		if (b != 0)
			//cout << " and ";
			strcat(k, "and ");
	}

	//������λ��20���ڣ�ֱ�ӵ���num1[n],���
	if (b < 20)
	{
		//cout << num1[b];
		strcat(k, num1[b]);
	}
	//��b����20ʱ
	else
	{
		//�ȵ���num10,���ʮλ��
		//cout << num10[b / 10];
		strcat(k, num10[b / 10]);

		//��λ��Ϊ0ʱӦ�����λ��
		if (b % 10 != 0)
		{
			//cout << "\b-" << num1[b % 10];
			strcat(k, "\b-");
			strcat(k, num1[b % 10]);
		}
	}
	char* p = new char[strlen(k) + 1];   //�ڸú����ж�̬������һ���ַ������飬�ǵ��ڵ�������ͷſռ�
	strcpy(p, k);
	return p;
}

//�������뺯��
char* Robot::tran_int(int n)
{
	char* p;               //���ڴ�ŵ���out�����ķ���ֵ
	char kk[1000] = "";    //���ڴ�ŷ�����

	if (n > 1999999999)
	{
		cout << "dev c++ƽ̨�޷��������1999999999λ������!" << endl;
		strcpy(kk, "dev c++ƽ̨�޷��������1999999999λ������!\n");
	}
	else
	{
		//��λ��λȡ�ߣ�����abcd�ĸ�������
		int a = n / 1000000000, b = (n % 1000000000) / 1000000, c = (n % 1000000) / 1000, d = n % 1000;
		//������0ʱ�����������billion��million��thousand
		if (a != 0)
		{
			p = out(a);
			//cout << "billion ";
			strcpy(kk, p);
			strcat(kk, "billion ");
			delete[] p;     //�ͷ���out�����ж�̬����Ŀռ�
		}
		if (b != 0)
		{
			p = out(b);
			//cout << "million ";
			strcat(kk, p);                //�˴����ܼ���ʹ���ַ������ƺ�����Ӧʹ���ַ���ƴ�Ӻ�����
			strcat(kk, "million ");
			delete[] p;    //�ͷ���out�����ж�̬����Ŀռ�
		}
		if (c != 0)
		{
			p = out(c);
			//cout << "thousand ";
			strcat(kk, p);                    //�˴����ܼ���ʹ���ַ������ƺ�����Ӧʹ���ַ���ƴ�Ӻ�����
			strcat(kk, "thousand ");
			delete[] p;    //�ͷ���out�����ж�̬����Ŀռ�
		}
		if (d != 0)
		{
			//����Ӣ���﷨���������λǰһ����and
			if (d < 100 && (a != 0 || b != 0 || c != 0))
				//cout << " and ";
				strcat(kk, "and ");
			p = out(d);
			strcat(kk, p);
			delete[] p;   //�ͷ���out�����ж�̬����Ŀռ�
		}
	}
	//cout << endl;

	p = new char[strlen(kk) + 1];   //����Ķ�̬����ǵ���ʹ����󣬽����Ӧ�Ŀռ��ͷ�
	strcpy(p, kk);
	return p;
}

//���ⶨ���������
void Robot::print_num()
{
	cout << "����Ϊ�� " << num << endl;
	if (ps == NULL)
		cout << "zero" << endl;
	else
		cout << "������Ϊ��" << ps << endl;
}

//������:���Ժ���
void main()
{
	{//������������Ƕһ��������Ϊ�˷���������������ʾ
		int n;
		cout << "������n: ";
		cin >> n;
		//cout << n << endl;

		Robot brown;
		brown.set("brown", "800#", n);
		brown.print_num();
	}

	system("pause");
}
*/

//��ʵ����Person��Ķ���
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class Person
{
private:

	char Name[9];      //֮���Խ������ַ�����ĳ�������Ϊ9������Ϊһ�㺺�������ֵĳ��Ȳ��ᳬ���ĸ��֡�
	char Sex;
	int Age;
	char Pid[19];
	char* Addr;

public:

	//���캯��
	Person()
	{
		strcpy(Name, "XXX");
		Age = 0;
		Sex = 'x';
		strcpy(Pid, "xxxxxxxxxxxxxxxxxx");
		Addr = NULL;
	}

	//���в����Ĺ��캯��
	Person(char* N, int A, char S, char* P, char *Ad)
	{
		strcpy(Name, N);
		Age = A;
		Sex = S;
		strcpy(Pid, P);

		//ʹ�ö�̬�������ʽ�洢��ַ
		int l = strlen(Ad);
		Addr = new char[l+1];
		strcpy(Addr, Ad);
	}

	//��������
	~Person()
	{
		cout << "Now destroying Person" << Name << endl;
		if (Addr != NULL) delete[] Addr;                 //�������������ͷ�����Ķ�̬�ռ�
	}

	//���ú������Ǽ�
	void Register(char* name, int age, char sex, char* p, char* Ad);

	//��ʾ��Ϣ����
	void ShowMe();
};

//���ⶨ��ǼǺ�������Ϊ�������ݵ�����/�޸ĺ���
void Person::Register(char* name, int age, char sex, char* p, char* Ad)
{
	strcpy(Name, name);
	Age = age;
	Sex = sex;

	strcpy(Pid, p);

	if (Addr != NULL) delete[] Addr;    //ӦΪ���вεĹ��캯���У��Ѿ���̬����ռ��ˣ����Ҫ�޸���ֵ��Ӧ�����ͷ�ԭ�пռ��������µĿռ����ڴ洢�µ�סַ
	//ʹ�ö�̬�������ʽ�洢��ַ
	int l = strlen(Ad);
	Addr = new char[l + 1];
	strcpy(Addr, Ad);
}

//���ⶨ����ʾ����
void Person::ShowMe()
{
	cout << Name << "\t" << Age << "\t" << Sex << "\t" << Pid << "\t";
	if (Addr != NULL) cout << Addr << endl;    //��Ϊʹ���޲ι��캯�������סַ��Ϊ�գ����û��Ϊ�丳ֵ�������
	else cout << endl;
}

//������
void main()
{
	{//������������Ƕһ��������Ϊ�˷���������������ʾ
		Person person1;
		Person person2("����", 19, 'm', "610103199409192839", "�й�����������·29��");
		Person person3;

		cout << "Person1: ";
		person1.ShowMe();

		cout << "Person2: ";
		person2.ShowMe();

		person3.Register("����", 29, 'w', "610103198409192493", "�й��Ϻ��л�ɽ��·1845��");
		cout << "Person3: ";
		person3.ShowMe();

		person2.Register("����", 29, 'w', "610103198409152127", "�й��½���³ľ�������ҹ�12��");
		cout << "Person2: ";
		person2.ShowMe();
	}

	system("pause");
}
*/

//�ࣺ������ָ��
//�����༰Ӧ��
/*
#include<iostream>

using namespace std;

class Date
{

public:
	int year, month, day;
	void init(int y, int m, int d);
	void print_ymd();
};
//���ⶨ���ʼ������
void Date::init(int y, int m, int d)
{
	year = y;  month = m; day = d;
}
//���ⶨ����ʾ����
void Date::print_ymd()
{
	cout << year << "-" << month << "-" << day << endl;
}
//������
void main()
{
	Date date1;

	//�������ָ�룬����ָ��ո������Ķ���
	Date* p1 = &date1;
	p1->init(2020, 3, 15);    //ͨ��->����ʽ���ö���Ĺ��ܺ�����
	p1->print_ymd();

	int* p2 = &date1.year;   //ʹ������ָ���ȡ���ڶ����е��������
	cout << *p2 << endl;

	void (Date:: * p3)(int, int, int);    //��ָ���½ڣ�����ѧϰ��ָ������ָ�룬�˸�ʽ���ܵ���ָ�����г�Ա������ָ��
	void (Date:: * p4)();

	p3 = &Date::init;                     //��ָ�����Ա������ָ������Ӧ�����Ա����ƥ������
	p4 = &Date::print_ymd;

	(date1.*p3)(2020, 8, 23);             //ָ�����Ա������ָ���ʹ��
	(date1.*p4)();

	system("pause");
}
*/
//Person�༰Ӧ��
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class Person
{
private:

	char Name[9];      //֮���Խ������ַ�����ĳ�������Ϊ9������Ϊһ�㺺�������ֵĳ��Ȳ��ᳬ���ĸ��֡�
	char Sex;
	int Age;
	//char Pid[19];
	//char* Addr;

public:

	//���캯��
	Person()
	{
		strcpy(Name, "XXX");
		Age = 0;
		Sex = 'x';
		//strcpy(Pid, "xxxxxxxxxxxxxxxxxx");
		//Addr = NULL;
	}

	//���в����Ĺ��캯��
	Person(char* N, int A, char S)//, char* P, char* Ad)
	{
		strcpy(Name, N);
		Age = A;
		Sex = S;

#if 0
		strcpy(Pid, P);

		//ʹ�ö�̬�������ʽ�洢��ַ
		int l = strlen(Ad);
		Addr = new char[l + 1];
		strcpy(Addr, Ad);
#endif // 0 �ڸò����н�Person��򵥻�
	}

	//��������
	~Person()
	{
		cout << "Now destroying Person" << Name << endl;
		//if (Addr != NULL) delete[] Addr;                 //�������������ͷ�����Ķ�̬�ռ�
	}

	//���ú������Ǽ�
	void Register(char* name, int age, char sex);//, char* p, char* Ad);

	//��ʾ��Ϣ����
	void ShowMe();
};

//���ⶨ��ǼǺ�������Ϊ�������ݵ�����/�޸ĺ���
void Person::Register(char* name, int age, char sex)//, char* p, char* Ad)
{
	strcpy(Name, name);
	Age = age;
	Sex = sex;

#if 0
	strcpy(Pid, p);

	if (Addr != NULL) delete[] Addr;    //ӦΪ���вεĹ��캯���У��Ѿ���̬����ռ��ˣ����Ҫ�޸���ֵ��Ӧ�����ͷ�ԭ�пռ��������µĿռ����ڴ洢�µ�סַ
	//ʹ�ö�̬�������ʽ�洢��ַ
	int l = strlen(Ad);
	Addr = new char[l + 1];
	strcpy(Addr, Ad);
#endif // 0 �ڸò����н�Person��򵥻�


}

//���ⶨ����ʾ����
void Person::ShowMe()
{
	cout << Name << "\t" << Age << "\t" << Sex << "\t";
#if 0
	cout << Pid << "\t";
	if (Addr != NULL) cout << Addr << endl;    //��Ϊʹ���޲ι��캯�������סַ��Ϊ�գ����û��Ϊ�丳ֵ�������
	else cout << endl;
#endif // 0 �ڸò����н�Person��򵥻�
	cout << endl;
}

//������
void main()
{
	Person* p1, * p2;

	p1 = new Person;              //��̬����һ��ָ������ָ��
	cout << "Person1: \t";
	p1->ShowMe();
	p1->Register("����", 19, 'm');
	cout << "Person1: \t";
	p1->ShowMe();

	p2 = new Person;
	cout << "Person2: \t";
	p2->ShowMe();

	*p2 = *p1;                    //����֮�丳ֵ
	cout << "Person2: \t";
	p2->ShowMe();

	delete p1;  //�ͷ�ָ��ָ�������ռ�Ŀռ�
	delete p2;

	system("pause");
}
*/

//�ࣺthisָ���ʹ��
//thisָ������
/*
#include<iostream>

using namespace std;

class Test
{

private:
	int x;

public:
	Test(int = 0);
	void print();
};
//���ⶨ���Ա����
Test::Test(int a) { x = a; };
//���ⶨ���Ա����
void Test::print()
{
	cout << "���г�Ա����x����ʾ" << "    x = " << x << endl;

	int x=22;
	cout << "��������ж���ľֲ�����x����ʾ" << "    x = " << x << endl;   //���в��Դ�����Ϊ��������thisָ��������������γɶԱȣ���ѭ�˾ֲ�����ԭ��

	cout << "this->x = " << this->x << endl;
	cout << "(*this).x = " << (*this).x << endl;
}

//������
void main()
{
	Test testObject(12);
	testObject.print();

	system("pause");
}
*/
//thisָ���ʹ�÷���
/*
#include<iostream>

using namespace std;

class Time
{
private:
	int hour, minute, secound;

public:
	void set(int hour, int mintue, int secound)
	{
		//����������û��ʹ��this->���βθ����β�
		this->hour = hour;
		this->minute = mintue;
		this->secound = secound;
	}

	void print()
	{
		cout << hour << ':' << minute << ':' << secound << endl;
	}
};
*/

//��ʵ��
/*
#include<iostream>
#include<cmath>

using namespace std;

class Date
{
private:

	int year, month, day;

	//һЩֻ�����ڲ�ʹ�ã��������ĺ���������Ϊ�˰�ȫ���������Ϊ˽�еĺ���
	void IncDay();                            //��������һ�캯��
	int DayCalc();                            //����ָ�����ھ����׼���ڵ���������׼����Ϊ1900-1-1

public:

	Date(int y = 1900, int m = 1, int d = 1);  //���캯��
	void SetDate(int yy, int mm, int dd);      //��������
	bool IsLeapYear();                         //�ж��Ƿ�����
	void print_ymd();                          //�����������
	void print_mdy();                          //�����������

	//��չ
	void AddDay(int adddays);                   //����������������
	bool IsEndofMonth();                      //�ж��Ƿ�����ĩ

	int Daysof2Date(Date ymd);               //��������ָ������֮����������
};

//���ⶨ�庯��
Date::Date(int y, int m, int d)
{
	SetDate(y, m, d);
}

void Date::SetDate(int yy, int mm, int dd)
{
	//�����������ڲ�������ʹ��Ĭ��ֵ���棬���Ĭ��ֵΪ1900���·�Ĭ��ֵΪ1��������Ĭ��ֵΪ1

	year = (yy >= 1900 && yy <= 2100) ? yy : 1900;  //�����Ч���ж�
	month = (mm >= 1 && mm <= 12) ? mm : 1;         //�·���Ч���ж�

	switch(month)  //��������Ч���ж�
	{
		case 4:     //4��6��9��11��ÿ��ֻ��30�죬
		case 6:
		case 9:
		case 11:    day = (dd >= 1 && dd <= 30) ? dd : 1; break;

		case 2:   //2�������ж�
			if (IsLeapYear())   //�ж��Ƿ������꣬����2����29�죬������2����28��
				day = (dd >= 1 && dd <= 29) ? dd : 1;
			else
				day = (dd >= 1 && dd <= 28) ? dd : 1;
			break;

		default :   //���������ж�
			day = (dd >= 1 && dd <= 31) ? dd : 1;

	}
}

bool Date::IsLeapYear()
{
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
		return true;    //����
	else
		return false;   //������
}

void Date::print_ymd()
{
	cout << year << '-' << month << '-' << day << endl;
}

void Date::print_mdy()
{

	char* monthName[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	//ŷ������������ڸ�ʽ�ǣ��·ݵ�Ӣ�ı�ʾ ��������ݡ�
	cout << monthName[month-1] << ' ' << day << ',' << year << endl;
}
//��������һ��
void Date::IncDay()
{
	if (IsEndofMonth())  //�ж��Ƿ�����ĩ���������ĩ���·ݣ������Ҫ��������
	{
		if (month == 12)   //�����12�£���ݣ��·���Ҫ��������
		{
			day = 1;
			month = 1;
			year++;
		}
		else               //��12�£��·���Ҫ��������
		{
			day = 1;
			month++;
		}
	}
	else
		day++;
}
int Date::DayCalc()
{
	int days;
	int yy = year - 1900;    //��ǰ���ھ����׼���֮��Ĳ�ֵ

	days = yy * 365;       //�������������

	if (yy)
		days += (yy - 1) / 4;     //ÿ��������������һ��

	switch (month)             //��ǰ�����ѹ�ȥ�·ݵ�����
	{//switch ѡ���жϣ��������case n���Ĵ�����м���break�ؼ��֣������������������
	case 12: days = days + 30;   //��Ϊ11��Ϊ30�죬�����ǰ����Ϊ12�£��Ǳ��������Ѿ���ȥ��11���£�Ӧ�����ȥ�·ݵ�����������
	case 11: days = days + 31;
	case 10: days = days + 30;
	case 9: days = days + 31;
	case 8: days = days + 30;
	case 7: days = days + 31;
	case 6: days = days + 30;
	case 5: days = days + 31;
	case 4: days = days + 30;
	case 3:
		if (IsLeapYear())
			days = days + 29;
		else
			days = days + 28;
	case 2: days = days + 31;

	default: break;
	}
	days = days + day;    //��ָ�����ڶ�Ӧ������������������������
	return days;
}
//����������������
void Date::AddDay(int adddays)
{
	for (int i = 0; i <= adddays; i++)
		IncDay();
}
//�ж��Ƿ�����ĩ
bool Date::IsEndofMonth()
{
	switch (month)
	{
	case 4:
	case 6:
	case 9:
	case 11:  return day == 30;
	case 2:
		if (IsLeapYear())
			return day == 29;
		else
			return day == 28;

	default: return day == 31;
	}
}
int Date::Daysof2Date(Date ymd)
{
	int days;
	days = abs(DayCalc() - ymd.DayCalc());   //ʹ��abs�����������ֵ
	return days;
}
//������
void main()
{
#if 0
	Date date1;
	date1.SetDate(2015, 5, 1);
	cout << "the current date is: " << endl;
	date1.print_mdy();
	date1.print_ymd();

	//ʹ���������2������
	date1.SetDate(2020, 2, 29);
	cout << "the current date is: " << endl;
	date1.print_ymd();
	date1.print_mdy();
#endif // 0

	Date date1;

	date1.SetDate(2013, 1, 27);
	cout << "the current date is : " << endl;

	cout << "������-��-�ո�ʽ�����";
	date1.print_ymd();

	cout << "������ ��,���ʽ�����";
	date1.print_mdy();

	date1.AddDay(100);
	cout << "After 100 days, the date is : ";
	date1.print_ymd();

	cout << "And befor " << date1.Daysof2Date(Date(2008, 8, 24)) << " days, the BeiJing Olympic Game had been over." << endl;    //Daysof2Date������ʹ����һ����ʱ����û������ֱ��ʹ����

	system("pause");
}

*/

//�ࣺ�̳�
/*
#define _CRT_SECURE_NO_WARNINGS
#pragma comment (lib, "winmm.lib")  //��Ϊ���ڵ���mciSendStringA����ʱ����ʾ�޷������ⲿ���������������winmm.lib
#include<iostream>
#include<windows.h>
#include<mmsystem.h>    //ý����Ƶ�ͷ�ļ�

using namespace std;

//��������ȫ���ַ�ָ�����飬��ȡ����ĵ���
//num1��Ϊ1��19���ճ���0�����Կ���ֱ����num1[n]���ã��õ�n��Ӧ�ĵ���
static char* num1[] =
{
	"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", "thirteen ",
	"fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "
};

//num10��Ϊ20-90���ճ���0��1�����Կ���ֱ����num10[n/10]���ã��õ�n��Ӧ����
static char* num10[] =
{
	"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "
};

//����
class Person
{

private:

	char* name;     //����
	char sex;       //�Ա�
	char pid[19];    //���֤����
	int weight;      //����
	int high;        //���

public:

	Person();   //�޲ι��캯��
	Person(char* n, char s, char* p, int w, int h);   //�вι��캯��

	void change_data(char* n, char s, char* p, int w, int h);    //�޸�����
	void walking(int k, int v);                                 //��v�ٶ�����k��
	void hearing(char* sentence);                               //���ַ���Сд���д����д��Сд���
	void speek(int n);                                         //˵������num��Ӣ�ľ���
	void writing();                                            //����Ļ�ϻ������֡�����
	void print();                                              //����˵�����ֵ
	void out(int a);                                           //����С��1000������

	~Person();                                                 //��������
};

Person::Person()
{
	name = new char[4]{ "xxx" };
	sex = 'x';
	strcpy(pid, "xxxxxxxxxxxxxxxxxx");
	weight = 0;
	high = 0;
}

Person::Person(char* n, char s, char* p, int w, int h)
{
	//cout << n;
	//cout << strlen(n) << endl;

	if (name != NULL) name = new char[strlen(n) + 1];    //����һ���ռ��������������
	strcpy(name, n);

	sex = s;
	strcpy(pid, p);
	weight = w;
	high = h;
}

void Person::change_data(char* n, char s, char* p, int w, int h)
{
	delete[] name;   //�Ƚ�ԭ�еĴ洢�����Ŀռ��ͷŵ�
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	sex = s;
	strcpy(pid, p);
	weight = w;
	high = h;
}

void Person::walking(int k, int v)
{
	cout << "\n" << name << "ˮƽ����" << k << "��" << endl;
	for (int i = 0; i < k; i++)
	{
		cout << ' ' << "o_o";
		Sleep(1000 / v);               //Sleep�����Ĳ������Ժ���Ϊ��λ�ģ�������windowsͷ�ļ�
		cout << "\b\b\b";
	}
}

void Person::hearing(char* sentence)
{
	cout << endl << sentence << endl;            //��ʾ������ַ���
	char* p = new char[strlen(sentence) + 1];    //��̬����һ���ռ����洢������ַ���
	strcpy(p, sentence);
	char* pp = p;             //���ַ������׵�ַת������һ��ָ���ڣ������޸ĺ��ȡ�ַ���
	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
			*p = 'A' + (*p - 'a' + 0);           //Сд���д
		else if (*p >= 'A' && *p <= 'z')
			*p = 'a' + (*p - 'A');              //��д��Сд

		p++;                                    //��ָ������ƶ�һλ��ָ���ַ����е���һ���ַ�
	}

	cout << pp << endl;
	delete[] pp;                 //�ͷ�������ַ�����ռ䣬֮���Բ����ͷ�pָ������Ϊ��p�ڴ���������Ѿ��任�˵�ַ���䲢����ָ������ռ���׵�ַ
}

void Person::speek(int n)
{
	if (n > 1999999999)
		cout << "dev c++ƽ̨�޷��������1999999999λ������" << endl;
	else
	{
		//��λ��λȡ�ߣ�����abcd�ĸ�������
		int a = n / 1000000000, b = (n % 1000000000) / 1000000, c = (n % 1000000) / 1000, d = n % 1000;
		//������0ʱ�����������millon��thousand
		if (a != 0)
		{
			out(a);
			cout << "billion ";
		}
		if (b != 0)
		{
			out(b);
			cout << "million ";
		}
		if (c != 0)
		{
			out(c);
			cout << "thousand ";
		}
		if (d != 0)
		{
			//����Ӣ���﷨���������λǰһ����and
			if (d < 100 && (a != 0 || b != 0 || c != 0))
				cout << " and ";
			out(d);
		}
	}
	cout << endl;
}

void Person::writing()
{
	cout << endl << "                                                       " << endl;
	cout << "       ######################################          " << endl;
	cout << "                         ##                           " << endl;
	cout << "                         ##                           " << endl;
	cout << "                         ##                           " << endl;
	cout << "                         ##                           " << endl;
	cout << "       ######################################          " << endl;
	cout << "                         ##                           " << endl;
	cout << "                         ##                           " << endl;
	cout << "                         ##                           " << endl;
	cout << "                         ##                           " << endl;
	cout << "       ######################################          " << endl;
}

void Person::print()
{
	cout << name << "\t" << sex << "\t" << pid << "\t" << weight << "\t" << high << endl;
}

void Person::out(int a)
{
	int b = a % 100;
	//����λ����Ϊ0�������λ����hundred������ʱʮλ��λ��Ϊ0������and
	if (a / 100 != 0)
	{
		cout << num1[a / 100] << "hundred ";
		if (b != 0)
			cout << " and ";
	}
	//������λ��20���ڣ�ֱ�ӵ���num1[n],���
	if (b < 20)
	{
		cout << num1[b];
	}
	//��b����20ʱ
	else
	{
		//�ȵ���num10,���ʮλ��
		cout << num10[b / 10];
		//��λ��Ϊ0ʱӦ�����λ��
		if (b % 10 != 0)
			cout << "\b-" << num1[b % 10];
	}
}

Person::~Person()
{
	delete[] name;   //������Ĵ洢�����Ŀռ��ͷ�
}

#if 0
//������
void main()
{
	//��������
	Person Jack("James Chen", 'M', "150102199308231115", 125, 175);
	Jack.print();                   //����˵�����
	Jack.walking(20, 4);            //����20����1/4����һ��
	Jack.hearing("Hi! You are simple!");    //��Ӣ�ľ���
	Jack.speek(1006);                       //˵������1006��Ӣ�ľ���
	cout << endl;
	Jack.writing();                         //��д���֡�����

	system("pause");
}
#endif // 0

//ʹ�ü̳еķ�ʽ����������
class sing_star : public Person
{

private:

	float salary;    //нˮ

public:

	sing_star();      //�޲ι��캯��
	sing_star(char* n, char s, char* p, int w, int h, float s1);    //�в��๹�캯��
	void change_data(char* n, char s, char* p, int w, int h, float s1);  //�޸�����
	void playing(char* ps);    //�ݳ�����
	void print();               //�����������ֵ

};
//�����д�޲ι��캯��
sing_star::sing_star():Person()      //������̳������࣬ͬ���ڸ�����Ĺ��캯���м̳�������Ĺ��캯��������չ����������ӵĳ�Ա�ĳ�ʼ��ֵ
{
	salary = 0.0;
}
//�����д�вι��캯��
sing_star::sing_star(char* n, char s, char* p, int w, int h, float s1)
{
	Person::change_data(n, s, p, w, h); //�ڸô���û��ʹ��������вι��캯��������ʹ�õ�����ĸ��ĺ���
	salary = s1;
}
//�����д�޸ĺ��������ø�����޸ĺ�������������Ͻ�����չ
void sing_star::change_data(char* n, char s, char* p, int w, int h, float s1)
{
	Person::change_data(n, s, p, w, h);
	salary = s1;
}
//�����д���Ÿ�������
void sing_star::playing(char* ps)  //psָ��ָ����Ǹ�����ŵĵ�ַ
{
	char str[100] = "play ";    //play���пո�
	strcat(str, ps);            //��play �ڸ������·�����ӣ��������ֲ��ź����Ĳ���
	cout << str;                //��ʾ����
	mciSendStringA(str, NULL, 0, NULL);   //���ò��Ÿ���������������

	char a;
	cin >> a;
}
//���ⶨ���������
void sing_star::print()
{
	Person::print();
	cout << salary << endl;
}
//������
void main()
{
	//���������
	sing_star Jack("James Chen", 'M', "150102199308231115", 125, 175, 10000);
	Jack.print();                   //����˵�����
	Jack.walking(20, 4);            //����20����1/4����һ��
	Jack.hearing("Hi! You are simple!");    //��Ӣ�ľ���
	Jack.speek(1006);                       //˵������1006��Ӣ�ľ���
	cout << endl;
	Jack.writing();                         //��д���֡�����
	Jack.playing("C:\\ceshiyinyue.mp3");


	system("pause");
}
*/

//�ࣺ�̳У������࣬ʱ����-�����ࣨ���г������ںͳ���ʱ�䣩
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>

using namespace std;


//��������ȫ���ַ�ָ�����飬��ȡ����ĵ���
//num1��Ϊ1��19���ճ���0�����Կ���ֱ����num1[n]���ã��õ�n��Ӧ�ĵ���
static char* num1[] =
{
	"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", "thirteen ",
	"fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "
};

//num10��Ϊ20-90���ճ���0��1�����Կ���ֱ����num10[n/10]���ã��õ�n��Ӧ����
static char* num10[] =
{
	"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "
};



//������
class Date
{

protected:   //������Ա����粿�������ܹ����ʸó�Ա�����磺b��̳���a�࣬��ô��b���оͿ��Ե���a���еı�����Ա��

	int year;
	int month;
	int day;

public:

	Date() { year = 1900, month = 1, day = 1; }          //�޲ι��캯��
	Date(int yy, int mm, int dd) { init(yy, mm, dd); }   //���ó�ʼ����������вι��캯��

	void init(int, int, int);                            //������ʼ������
	void print_ymd();
	void print_mdy();

	bool IsLeapYear();                                  //�ж��Ƿ�������

};


void Date::init(int yy, int mm, int dd)
{
	//�����������ڲ�������ʹ��Ĭ��ֵ���棬���Ĭ��ֵΪ1900���·�Ĭ��ֵΪ1��������Ĭ��ֵΪ1

	year = (yy >= 1900 && yy <= 2100) ? yy : 1900;  //�����Ч���ж�
	month = (mm >= 1 && mm <= 12) ? mm : 1;         //�·���Ч���ж�

	switch (month)  //��������Ч���ж�
	{
	case 4:     //4��6��9��11��ÿ��ֻ��30�죬
	case 6:
	case 9:
	case 11:    day = (dd >= 1 && dd <= 30) ? dd : 1; break;

	case 2:   //2�������ж�
		if (IsLeapYear())   //�ж��Ƿ������꣬����2����29�죬������2����28��
			day = (dd >= 1 && dd <= 29) ? dd : 1;
		else
			day = (dd >= 1 && dd <= 28) ? dd : 1;
		break;

	default:   //���������ж�
		day = (dd >= 1 && dd <= 31) ? dd : 1;

	}
}

void Date::print_ymd()
{
	cout << year << '-' << month << '-' << day << endl;
}

void Date::print_mdy()
{
	char* monthName[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	//ŷ������������ڸ�ʽ�ǣ��·ݵ�Ӣ�ı�ʾ ��������ݡ�
	cout << monthName[month - 1] << ' ' << day << ',' << year;
}

bool Date::IsLeapYear()
{
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
		return true;    //����
	else
		return false;   //������
}


//ʱ����
class Time
{

private:

	bool ceshi;   //�ڻ����ֶ���һ��˽�еĳ�Ա���ݣ��۲��������������Ƿ����ֱ�ӷ���

protected:

	int hour;
	int minute;
	int second;

public:

	Time() { hour = minute = second = 0; }           //�޲ι��캯��
	Time(int h, int m, int s) { init(h, m, s); }      //�вι��캯��

	void init(int, int, int);
	void print_time() { cout << hour << ':' << minute << ':' << second << endl; }
};

void Time::init(int h, int m, int s)
{
	hour = h >= 0 && h <= 24 ? h : 0;         //�ڸ�ֵ֮ǰ�Ƚ�����Ч�Լ���
	minute = m >= 0 && m <= 60 ? m : 0;
	second = s >= 0 && m <= 60 ? m : 0;
}


//�����ࣺ����
class Person : public Date, public Time   //����̳����������ʱ���������Ϳ��԰����˻���ĳ������ںͳ���ʱ��
{

private:

	char* name;      //����
	char sex;        //�Ա�
	char pid[19];    //���֤��
	int weight;      //����
	int high;        //���

	//��Ϊ������ʹ�ü̳еķ�ʽ��������࣬�����Ա�������������ʱ����ĳ�Ա

public:

	Person();                                                                 //�޲ι��캯��
	Person(char* n, char s, char* p, int w, int hh, int hr, int mr, int sd);   //�вι��캯�������вε��ú�����ֱ��ʹ�øı����ݺ����������ķ�ʽ���Լ��ٴ�����

	//�ú����������в�û�и������ڵ��βΣ�����Ϊ���֤���оͰ������˵ĳ�������
	void change_data(char* n, char s, char* p, int w, int hh, int hr, int mr, int sd);
	void walking(int k, int v);
	void hearing(char* sentence);

	void out(int a);  //���ڷ�������
	void speek(int n);
	void writing();
	void ShowMe();
	~Person();                 //����һ�������������ͷ�name��̬����Ŀռ�

};

Person::Person()
{
	name = new char[strlen("XXX") + 1];
	strcpy(name, "XXX");

	sex = 'X';

	strcpy(pid, "XXXXXXXXXXXXXXXXXX");

	weight = high = 0;

	//ceshi = true;  //����ڻ����ֽ���Ա���ݹ���˽�У���ô���������ֽ�����ֱ�ӷ��ʸó�Ա����
	//���³�Ա�����Ǵӻ����м̳й�����
	year = 1900;

	month = day = 1;

	hour = minute = second = 0;
}

Person::Person(char* n, char s, char* p, int w, int hh, int hr, int mr, int sd)
{
	change_data(n, s, p, w, hh, hr, mr, sd);
}

void Person::change_data(char* n, char s, char* p, int w, int hh, int hr, int mr, int sd)
{
	name = new char[strlen(n) + 1];
	strcpy(name, n);

	sex = s;
	strcpy(pid, p);
	weight = w;
	high = hh;

	//�������֤�����ȡ�˵ĳ���������
	char temp[5];
	strncpy(temp, p + 6, 4);      //��ָ�����֤��Ϣָ������ƶ�6λ������Ӧ�ĸ���6λ�����4λ�������������
	year = atoi(temp);            //atoi���ַ�����ת��Ϊ����

	strncpy(temp, p + 10, 2);     //ͬ����ȡ�������·�
	temp[2] = '\0';               //��Ϊ���ָ�ʽ���·����ռ��λ�����ڵ�����λ��������ַ������������±�0��Ӧ��һ��λ�ã��ʶ��±�2��Ӧ������λ��
	month = atoi(temp);

	strncpy(temp, p + 12, 2);     //ͬ����ȡ����������
	temp[2] = '\0';
	day = atoi(temp);

	hour = hr;
	minute = mr;
	second = sd;
}

void Person::walking(int k, int v)
{
	cout << "\n" << name << "ˮƽ����" << k << "��" << endl;
	for (int i = 0; i < k; i++)
	{
		cout << ' ' << "o_o";
		Sleep(1000 / v);               //Sleep�����Ĳ������Ժ���Ϊ��λ�ģ�������windowsͷ�ļ�
		cout << "\b\b\b";
	}
}

void Person::hearing(char* sentence)
{
	cout << endl << sentence << endl;            //��ʾ������ַ���
	char* p = new char[strlen(sentence) + 1];    //��̬����һ���ռ����洢������ַ���
	strcpy(p, sentence);
	char* pp = p;             //���ַ������׵�ַת������һ��ָ���ڣ������޸ĺ��ȡ�ַ���
	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
			*p = 'A' + (*p - 'a' + 0);           //Сд���д
		else if (*p >= 'A' && *p <= 'z')
			*p = 'a' + (*p - 'A');              //��д��Сд

		p++;                                    //��ָ������ƶ�һλ��ָ���ַ����е���һ���ַ�
	}

	cout << pp << endl;
	delete[] pp;                 //�ͷ�������ַ�����ռ䣬֮���Բ����ͷ�pָ������Ϊ��p�ڴ���������Ѿ��任�˵�ַ���䲢����ָ������ռ���׵�ַ

}

void Person::speek(int n)
{
	if (n > 1999999999)
		cout << "dev c++ƽ̨�޷��������1999999999λ������" << endl;
	else
	{
		//��λ��λȡ�ߣ�����abcd�ĸ�������
		int a = n / 1000000000, b = (n % 1000000000) / 1000000, c = (n % 1000000) / 1000, d = n % 1000;
		//������0ʱ�����������millon��thousand
		if (a != 0)
		{
			out(a);
			cout << "billion ";
		}
		if (b != 0)
		{
			out(b);
			cout << "million ";
		}
		if (c != 0)
		{
			out(c);
			cout << "thousand ";
		}
		if (d != 0)
		{
			//����Ӣ���﷨���������λǰһ����and
			if (d < 100 && (a != 0 || b != 0 || c != 0))
				cout << " and ";
			out(d);
		}
	}
	cout << endl;
}

void Person::writing()
{
	cout << endl << "                                                       " << endl;
	cout << "       ######################################          " << endl;
	cout << "                         ##                           " << endl;
	cout << "                         ##                           " << endl;
	cout << "                         ##                           " << endl;
	cout << "                         ##                           " << endl;
	cout << "       ######################################          " << endl;
	cout << "                         ##                           " << endl;
	cout << "                         ##                           " << endl;
	cout << "                         ##                           " << endl;
	cout << "                         ##                           " << endl;
	cout << "       ######################################          " << endl;
}

void Person::ShowMe()
{
	cout << "������" << name;
	cout << '\t' << "�Ա�" << sex << endl;
	cout << "���֤�ţ�" << pid << endl;
	cout << "���أ�" << weight/2 << "kg";
	cout << '\t' << "��ߣ�" << high << "cm" << endl;
	cout << "�������ڣ�";
	print_ymd();
	cout << "����ʱ�䣺";
	print_time();
}

void Person::out(int a)
{
	int b = a % 100;
	//����λ����Ϊ0�������λ����hundred������ʱʮλ��λ��Ϊ0������and
	if (a / 100 != 0)
	{
		cout << num1[a / 100] << "hundred ";
		if (b != 0)
			cout << " and ";
	}
	//������λ��20���ڣ�ֱ�ӵ���num1[n],���
	if (b < 20)
	{
		cout << num1[b];
	}
	//��b����20ʱ
	else
	{
		//�ȵ���num10,���ʮλ��
		cout << num10[b / 10];
		//��λ��Ϊ0ʱӦ�����λ��
		if (b % 10 != 0)
			cout << "\b-" << num1[b % 10];
	}
}

Person::~Person()
{
	delete[] name;   //�ͷ�name��̬����Ŀռ�
}


//������
void main()
{
	Person wj("Wang Jian", 'm', "150102199308231115", 125, 175, 0, 5, 15);
	wj.ShowMe();
	wj.walking(10, 4);
	wj.hearing("You are simple!");
	wj.speek(22222);
	cout << endl;
	wj.writing();


	system("pause");
}
*/

//�ࣺ�̳У���ͨ�ֻ���-�������ֻ���
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class mobile
{

private:

	char mynumber[12];       //�����ĵ绰����
	char m_type[40];         //�ֻ��ͺ�
	float price;             //�ֻ��۸�

public:

	mobile()           //�޲ι��캯��
	{
		init("00000000000", "Non_type", 0);
	}

	void init(char* number, char* pt, float pri);    //��ʼ��

	void dial();                                     //����绰

	void answer(char othernumber[]);                 //�����绰

	void hangup();                                   //�Ҷϵ绰

	void show();                                     //��ʾ��ͨ�ֻ���Ϣ

};

void mobile::init(char* number, char* pt, float pri)
{
	strcpy(mynumber, number);
	strcpy(m_type, pt);
	price = pri;
}

void mobile::dial()
{
	cout << "Dialing number is " << mynumber << endl;
	cout << "Dialing on....." << endl;
}

void mobile::answer(char othernumber[])
{
	cout << "Answering number is " << othernumber << endl;
	cout << "Answering in......" << endl;
}

void mobile::hangup()
{
	cout << "Hanging up..." << endl;
}

void mobile::show()
{
	cout << mynumber << '\t' << m_type << '\t' << price << endl;
}

//���������ֻ���
class smartphone :public mobile //�����࣬public�Ǽ̳����η�
{

private:

	char OS[20];      //����ʽ����ϵͳ���������������ݳ�Ա
	int memory;       //�洢���������������������ݳ�Ա

public:

	smartphone()
	{
		init("00000000000", "Non_type", 0, "Non_OS", 0);
	}

	void init(char* number, char* pt, float pri, char* os, int mem);
	void send(char othernumber[], char message[]);                        //���Ͷ���
	void showmemory();                                                   //��ʾ�ڴ��С
	void show();                                                         //��ʾ�����ֻ���Ϣ
};

void smartphone::init(char* number, char* pt, float pri, char* os, int mem)
{
	mobile::init(number, pt, pri);
	strcpy(OS, os);
	memory = mem;
}

void smartphone::send(char othernumber[], char message[])
{
	cout << "Sending message is " << message << " to " << othernumber << endl;
	cout << "Sending on..." << endl;
}

void smartphone::showmemory()
{
	cout << "Memory is: " << memory << endl;
}

void smartphone::show()
{
	mobile::show();
	cout << OS << '\t' << memory << endl;
}
//����������
void main()
{
	mobile m;              //�����ֻ�����
	smartphone m1;         //���������ֻ�����

	m.init("11111111111", "motorola", 3000);                //���û���init
	m.dial();
	m.answer("222222222222");
	m.hangup();
	m.show();

	//�����������init
	m1.init("33333333333", "sungxing", 5000, "windows8", 2048);
	m1.send("22222222222", "hellow!");
	m1.dial();
	m1.answer("22222222222");
	m1.hangup();
	m1.showmemory();
	m1.show();


	system("pause");
}
*/

//�ࣺ�̳У�˽�м̳з�ʽ�������̳з�ʽ
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

//���ࣺ���ඨ��
class Person
{

protected:
//private:

	char* Name;
	int Age;
	char Sex;



public:

	void Register(char* name, int age, char sex)   //�������ݳ�Ա
	{
		Name = new char[strlen(name) + 1];
		strcpy(Name, name);
		Age = age;
		Sex = (sex == 'm' ? 'm' : 'f');           //ӦΪ�Ա�ֻ������ѡ����������һ�������Ա���ж�
	}

	void ShowMe()
	{
		cout << Name << "\t" << Sex << "\t" << Age << "\t";
	}

	~Person()
	{
		delete[] Name;
		cout << "Name���ͷ�";
	}
};
//�����ࣺ��Ա�ඨ��
class Employee :private Person
{
	char* Dept;         //��������
	float Salary;          //��н

public:

	Employee();         //�޲ι��캯��
	void EmployeeRegidter(char* name, int age, char sex, char* dept, float salary);    //�������ݳ�Ա
	void ShowEmp();
};

Employee::Employee()
{
	Register("XXX", 0, 'X');
	Dept = new char[strlen("XXXXXX") + 1];
	strcpy(Dept, "XXXXXX");
	Salary = 0;
}

void Employee::EmployeeRegidter(char* name, int age, char sex, char* dept, float salary)
{
	Register(name, age, sex);

	Dept = new char[strlen(dept) + 1];
	strcpy(Dept, dept);
	Salary = salary;
}

void Employee::ShowEmp()
{
	//cout << Name << '\t' << Sex << '\t' << Age << '\t';   //��protected�޸�Ϊprivate���ᷢ��ʲô�أ�
	ShowMe();   //ʹ��˽�м̳з�ʽ�������е�˽�г�Ա�޷�����������ֱ�ӵ��ã������������ͨ�������еĹ��г�Ա����ȥ���û����е�˽�г�Ա��ǰ���������й�ϵ


	cout << Dept << '\t' << Salary << endl;
}

#if 0

//������������˽�м̳�
void main()
{

	{
		Employee emp;

		emp.EmployeeRegidter("����", 40, 'f', "ͼ���", 2000);

		emp.ShowEmp();

		//emp.ShowMe();   //�����̳з�ʽ�޸�Ϊ˽�м̳�ʱ�������еĹ��г�Ա���Ϊ�������˽�г�Ա��������ʹ�����޷�ֱ�ӵ��÷���˽�г�Ա
	}



	system("pause");
}
#endif // 0

//�����̳�
class Student : protected Person
{
	int Number;
	char ClassName[10];

public:

	void Register(char* classname, int number, char* name, int age, char sex)
	{
		strcpy(ClassName, classname);
		Number = number;

		Name = new char[strlen(name) + 1];
		strcpy(Name, name);
		Age = age;
		Sex = (sex == 'm' ? 'm' : 'f');
	}

	void ShowStu()
	{
		cout << Number << '\t' << ClassName << '\t';
		ShowMe();
	}
};

//�����������Ա����̳�
void main()
{
	Student stu;
	stu.Register("���C2", 137312, "����", 18, 'm');
	stu.ShowStu();
	//stu.ShowMe();          //���󣬶����ܷ��ʱ�����Ա��ʹ�ñ����̳з�ʽ�������еĹ��г�Ա�ͱ�����Ա�������Ϊ�������еı�����Ա

	system("pause");
}
*/

//�ࣺ�̳У�������Ĺ��캯��
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

//����
class Person
{

private:

	char Name[10];
	int Age;

public:

	Person(char* name, int age)   //���캯��
	{
		strcpy(Name, name);
		Age = age;
		cout << "constrcutor of person" << Name << endl;
	}

	void Show_Person()
	{
		cout << "������ " << Name << '\t' << "���䣺 " << Age;
	}

	~Person() { cout << "deconstrutor of person" << Name << endl; }   //��������

};

//������
class Employee :public Person
{

private:

	char Dept[20];
	Person Leader;   //������������Ƕ��һ������

public:

	//������Ĺ��캯��
	Employee(char* name, int age, char* dept, char* name1, int age1) :Person(name, age), Leader(name1, age1)
	{
		strcpy(Dept, dept);
		cout << "constructor of Employee" << endl;
	}

	void Show_Employee()
	{
		Show_Person();
		cout << '\t' << "���ţ� " << Dept << endl;
		Leader.Show_Person();
		cout << endl;
	}

};

//����
void main()
{
	{//���һ�Դ����ţ�������һ�������򣬷���������������ʾ
		Employee emp("�Ź���", 40, "���´�", "��ľ��", 36);
		emp.Show_Employee();
	}

	system("pause");
}
*/

//�ࣺ�����࣬����->Բ��->Բ������
/*
#include<iostream>

using namespace std;

//����
class Point
{

private:

	double x, y;

public:

	Point(double = 0, double = 0);       //���캯��
	void SetPoint(double, double);       //��������
	int GetX() { return x; }       //ȡx����
	int GetY() { return y; }       //ȡy����
	void Print();                  //����������
};

Point::Point(double a, double b)
{
	SetPoint(a, b);
}

void Point::SetPoint(double a, double b)
{
	x = a;
	y = b;
}

void Point::Print()
{
	cout << '[' << x << ',' << y << ']';
}

//�����ࣺԲ��
class Circle :public Point
{

private:

	double radius;

public:

	Circle(double x = 0, double y = 0, double r = 0.0);       //���캯��
	void SetRadius(double);                                   //���ð뾶
	double GetRadius() { return radius; }                     //ȡ�뾶
	double Area() { return 3.1415926 * radius * radius; }  //�������
	void Print();                                               //���Բ������Ͱ뾶

};

Circle::Circle(double a, double b, double r):Point(a,b)   //���캯����������̳��Ի��࣬����������Ĺ��캯�������û���Ĺ��캯��Ϊ�����е����ݳ�Ա��ֵ
{
	SetRadius(r);
}

void Circle::SetRadius(double r)
{
	radius = (r > 0 ? r : 0);
}

void Circle::Print()
{
	cout << "Center = ";
	Point::Print();
	cout << "; Radius = " << radius << endl;
}

//���������������ࣺԲ������
class Cylinder:public Circle
{

private:

	double high;

public:

	Cylinder(double x, double y, double r, double h) :Circle(x, y, h) { high = h; }

	void Set_data(double x, double y, double r, double h);    //�޸�����

	double Area();                                          //��������

	double Volume();                                        //�������

	void Print();                                           //���Բ������Ͱ뾶
};

void Cylinder::Set_data(double x, double y, double r, double h)
{
	SetPoint(x, y);
	SetRadius(r);
	high = h;
}

double Cylinder::Area()
{
	double r = GetRadius();
	double areaofcircle = Circle::Area();
	return 2 * 3.1415926 * r * high + 2 * areaofcircle;
}

double Cylinder::Volume()
{
	return Circle::Area() * high;
}

void Cylinder::Print()
{
	Circle::Print();
	cout << "��Ϊ��" << high;
}

//����������
void main()
{
	cout << "���Ե���" << endl;
	Point p(30, 50);
	p.Print();
	cout << endl;
	system("pause");

	cout << "����Բ��" << endl;
	Circle c(120, 80, 10);
	c.Print();
	cout << "\nԲ�����" << c.Area() << endl;
	system("pause");

	cout << "����Բ������" << endl;
	Cylinder cy(240, 160, 10, 10);
	cout << "Բ��������ĵ㣺 ";
	cy.Point::Print();                       //����������ͨ��������û���ĳ�Ա����
	cout << "\nԲ����ı������ " << cy.Area();
	cout << "\nԲ����������" << cy.Volume();
	system("pause");
}
*/

//�ࣺ�����࣬U��->MP3
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
#pragma comment (lib, "winmm.lib")  //��Ϊ���ڵ���mciSendStringA����ʱ����ʾ�޷������ⲿ���������������winmm.lib

using namespace std;

//U����
class UDISK
{

private:

	char* crow[100];     //���д洢��Ϣ��ָ������crow,һ���ַ�ָ���Ӧһ��
	int nrow;             //�洢����

public:

	UDISK(void) { nrow = 0; }    //���캯��
	void read(void);             //����Ϣ
	void write(char* pstr);      //д��Ϣ
	~UDISK() { cout << "����U�̶���" << endl; }

};

void UDISK::read(void)
{
	for (int i = 0; i < nrow; i++) cout << crow[i] << endl;
}

void UDISK::write(char* pstr)
{
	crow[nrow] = pstr;
	nrow++;
}

//MP3��
class MP3 :public UDISK
{

public:

	MP3() :UDISK() {};
	void play(char* pstr);
	~MP3() { cout << "����MP3����" << endl; }

};
void MP3::play(char* pstr)
{
	char str[100] = "play ";   //ע����play����һ���ո�
	strcat(str, pstr);
	cout << "���ֵĴ洢·����";
	mciSendStringA(str, NULL, 0, NULL);
}

//���Դ���
void main()
{
	UDISK U1;
	cout << "--ģ��U��д--" << endl;
	U1.write("Ȱѧ");
	U1.write("�����ƻ��������");
	U1.write("�����ж�����ʱ��");
	U1.write("�ڷ���֪��ѧ�磬");
	U1.write("���׷��ڶ���١�");
	cout << "--ģ��U�̶�--" << endl;
	U1.read();

	MP3 M1;
	cout << "--ģ��MP3����--" << endl;
	//MP3�ļ����ִ���ļ�����ͬһ·����
	M1.play("c:\\ceshiyinyue.mp3");

	char a;
	cin >> a;
	system("pause");
}
*/

//�ࣺ�̳У�ѧ��->������->˶ʿ��->��ʿ��
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//ѧ����
class Student
{

private:

	int stdno;   //ѧ��
	char* name;  //����
	int age;     //����
	char* classname;  //�༶����
	char* schoolname;  //ѧУ����

public:

	Student();     //���캯��

	Student(int stdno, char name[], int age, char classname[], char schoolname[])
	{
		this->stdno = stdno;
		this->age = age;

		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);

		this->classname = new char[strlen(classname) + 1];
		strcpy(this->classname, classname);

		this->schoolname = new char[strlen(schoolname) + 1];
		strcpy(this->schoolname, schoolname);
	}

	void show();   //��ʾ����

	~Student();    //��������
};

Student::Student()
{
	stdno = 0;
	age = 0;

	name = new char[strlen("XXXX") + 1];
	strcpy(name, "XXXX");

	classname = new char[strlen("XXXX") + 1];
	strcpy(classname, "XXXX");

	schoolname = new char[strlen("XXXX") + 1];
	strcpy(schoolname, "XXXX");
}

void Student::show()
{
	cout << name << "\t";
	cout << stdno << "\t";
	cout << age << "\t";
	cout << classname << "\t";
	cout << schoolname << endl;
}

Student::~Student()
{
	delete[] name;
	delete[] classname;
	delete[] schoolname;
}

//�����ࣺ��������
class CollegeStudent : public Student
{

private:

	char* classteacher;     //����Ա

public:

	//���캯��
	CollegeStudent(int stdno, char name[], int age, char classname[], char schoolname[], char classteacher[]):Student(stdno, name, age, classname, schoolname)
	{
		this->classteacher = new char[strlen(classteacher) + 1];
		strcpy(this->classteacher, classteacher);
	}

	//��ʾ����
	void show()
	{
		Student::show();
		cout << classteacher << endl;
	}

	//��������
	~CollegeStudent()
	{
		delete[] classteacher;
	}
};

//�����ࣺ˶ʿ����
class GraduateStudent :public CollegeStudent
{

private:

	char* tutor;                 //��ʦ
	char* projectname;           //����

public:

	//���캯��
	GraduateStudent(int stdno, char name[], int age, char classname[], char schoolname[], char classteacher[], char tutor[], char projectname[]) :CollegeStudent(stdno, name, age, classname, schoolname, classteacher)
	{
		this->tutor = new char[strlen(tutor) + 1];
		strcpy(this->tutor, tutor);

		this->projectname = new char[strlen(projectname) + 1];
		strcpy(this->projectname, projectname);
	}

	//��ʾ����
	void show()
	{
		CollegeStudent::show();
		cout << tutor << "\t";
		cout << projectname << endl;
	}

	//��������
	~GraduateStudent()
	{
		delete[] tutor;
		delete[] projectname;
	}
};

//�����ࣺ��ʿ��
class DoctorStudent :public GraduateStudent
{
	
private:

	char* researchname;     //�о���Ŀ

public:

	DoctorStudent(int stdno, char name[], int age, char classname[], char schoolname[], char classteacher[], char tutor[], char projectname[], char researchname[]) :GraduateStudent(stdno, name, age, classname, schoolname, classteacher, tutor, projectname)
	{
		this->researchname = new char[strlen(researchname) + 1];
		strcpy(this->researchname, researchname);
	}

	void show()
	{
		GraduateStudent::show();
		cout << researchname << endl;
	}

	~DoctorStudent()
	{
		delete[] researchname;
	}
};

//����������
void main()
{
	int stdno;              //�洢ѧ��
	char name[20];          //�洢����
	int age;                //�洢����
	char classname[20];     //�洢�༶
	char schoolname[20];    //�洢ѧУ����

	cout << "input the information of student: " << endl;
	cout << "������"; cin >> name;
	cout << "ѧ�ţ�"; cin >> stdno;
	cout << "���䣺"; cin >> age;
	cout << "�༶���ƣ� "; cin >> classname;
	cout << "ѧУ���ƣ� "; cin >> schoolname;

	Student student1(stdno, name, age, classname, schoolname);
	cout << endl << "the information of student is: " << endl;
	student1.show();

	char classteacher[20];   //�洢����Ա����

	cout << "input the information of collegestudent: " << endl;
	cout << "����Ա������"; cin >> classteacher;
	CollegeStudent student2(stdno, name, age, classname, schoolname, classteacher);
	cout << "the information of collegestudent is: " << endl;
	student2.show();

	char tutor[20];         //�洢��ʦ����
	char projectname[100];   //�洢��Ŀ����

	cout << "input the information of graduatestudent: " << endl;
	cout << "��ʦ������"; cin >> tutor;
	cout << "��Ŀ���ƣ�"; cin >> projectname;
	GraduateStudent student3(stdno, name, age, classname, schoolname, classteacher, tutor, projectname);
	student3.show();

	char researchname[50];
	cout << "input the inforname of doctorstudent: " << endl;
	cout << "�о����ƣ� "; cin >> researchname;
	DoctorStudent student4(stdno, name, age, classname, schoolname, classteacher, tutor, projectname, researchname);
	student4.show();

	system("pause");
}