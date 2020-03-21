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

//生日贺卡
/*
#include<iostream>
using namespace std;
int main() {
	//声明语句,其一般格式为：char <字符串名字>[<字符串最大长度>];
	char name_in[50], name_out[50];

	//输入语句，cin语句以空格、<Tab>键、<回车键>作为分隔符，即遇到这些符号，就认为一项数据的输入结束了，其可以理解为按词输入。
	//cin >> name_in >> name_out;

	//另一种输入语句，其仅仅已<回车键>做为分隔符，其可以理解为按行输入。
	cin.getline(name_in, 50);
	cin.getline(name_out, 50);

	//输出语句
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

//加法计算器
/*
#include<iostream>
using namespace std;
int main(){
int a, b, c; //声明变量
cin >> a >> b; //输入值
c = a + b; //计算结果
cout << c << endl; //显示计算结果
system("pause");
return 0;
}
*/

//计算存款本息，公式：sum = money(1+rate)^years,money表示存款本金，rate表示年利率，years表示存款年限，sum表示到期的本息
/*
#include<iostream>
#include<cmath> //数学函数包含在头文件cmath中
using namespace std;
int main() {
	double money, rate, years, sum;
	int panduan = 1; //为循环提供一个判断条件

	while (panduan == 1)
	{
		cout << "输入存款本金：";
		cin >> money;
		cout << endl << "输入年利率：";
		cin >> rate;
		cout << endl << "输入存款年数：";
		cin >> years;
		sum = money * pow((1 + rate), years); //pow(x,y)是C++中的乘方函数，代表x的y次方，使用该函数，需要引用cmath头文件。
		cout << endl << "到期后的本息金额为：" << sum << endl;

		cout << "是否继续计算（继续请输入1，停止请输入0）：";
		cin >> panduan; //根据判断条件确定是否继续计算
	}
	system("pause");
	return 0;
}
*/

//数据类型
/*
#include<iostream>
using namespace std;
int main()
{
//查询类型数据所占的个字节数
cout << "整型数据所占的字节数："<<sizeof(int)<<"\n"
<< "长整型数据所占的字节数："<<sizeof(long) << "\n"
<< "字符型数据所占的字节数："<<sizeof(char) << "\n"
<< "布尔型数据所占的字节数："<<sizeof(bool) << "\n"
<< "单精度型数据所占的字节数："<<sizeof(float) << "\n"
<< "双精度型数据所占的字节数："<<sizeof(double) << endl;
cout << endl;
//转义字符的使用
cout << 1 << "\t" << 2 << "\t" << 3 << endl;
cout << 4 << "\t" << 5 << "\t" << 6 << endl;
cout << 7 << "\t" << 8 << "\t" << 9 << endl;
system("pause");
return 0;
}
*/

//算数运算的实例
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
double a, b;

cout << "请输入两个整数"<<endl;
cin >> a >> b;

cout << "两个数的和为：" << a + b << endl;
cout << "两个数的差为：" << a - b << endl;
cout << "两个数的积为：" << a * b << endl;
cout << "两个数的商为：" << a / b << endl;
cout << "第一个数的立方为：" << a * a * a << endl;
cout << "第两个数的立方为：" << b * b * b << endl;
cout << "以第二个数作为第一个数的指数为：" << pow(a,b) << endl;
cout << "第一个数已10为底的对数为：" << log10(a) << endl;
system("pause");

return 1;
}
*/

//计算是否是闰年
//算法原理：四年一闰，百年不闰，四百年再闰。
/*
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout << "请输入年份：" ;
	cin >> year;

	bool f;
	f = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
	cout << "闰年的输出结果为1，非闰年的输出结果为0，结果为：" << f << endl;

	system("pause");

	return 1;
}
*/

//计算三角形的面积，公式(利用海伦公式计算三角形的面积)：A = （s(s-a)(s-b)(s-c)）^(1/2),其中a,b,c是三角形的三边，可能为实数。s=(a+b+c)/2。
/*
#include<iostream> //包含基本输入输出库的头文件
#include<cmath>
using namespace std;
int main()
{
	double a, b, c, s, area; //定义双精度变量

	cout << "Please input length of three edges:"<<endl; //输入提示

	cout << "a ="; //输入
	cin >> a;
	cout << "b =";
	cin >> b;
	cout << "c =";
	cin >> c;

	s = (a + b + c) / 2.0;
	area = sqrt(s * (s - a) * (s - b) * (s - c)); //计算面积

	cout << "The area ia:" << area <<endl; //打印结果

	system("pause");
	return 0;
}
*/

//构造一个五位数的反序数
//算法描述：依次分离出个位、十位、百位、千位、万位，分别用abcde表示，用式子(((a*10 + b)*10 + c)*10 + d) + e构造新的五位整数。
/* 
#include<iostream>
using namespace std;
int main()
{
	int n,m = 0;
	int a, b;

	cout << "Please input a integer:";
	cin >> n;
	b = n; //保留原始输入的数字，用于判断是否为回文数


	//int c, d, e;
	//a = n % 10; //从个位开始从后向前的提取数据中的每一位数
	//b = n/10 % 10;
	//c = n/100 % 10;
	//d = n/1000 % 10;
	//e = n/10000 % 10;
	//m = (((a * 10 + b) * 10 + c) * 10 + d) * 10 + e;


	//将算法修改为可以计算无限位数的反序数
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

//加密与解密
/*
#include<iostream>
using namespace std;
int main()
{
	char c; //定义变量，存放原始的字母。
	char ec; //定义变量，存放加密后的字母。
	int k; //定义变量，存放密匙k

	cout << "Please input a lower character and k:" << endl; //输入提示
	cout << "character:";
	cin >> c;
	cout << "k=";
	cin >> k;

	ec = ((c - 'a') + k) % 26 + 'a'; //进行加密运算
	cout << "Encrypted characters are：";
	cout << ec << endl;

	system("pause");
	return 0;
}
*/

//比较大小
/*
#include<iostream>
using namespace std;
int main()
{
	double a, b, c, max;
	cout << "请输入三个大小不同的数字："<< endl;
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

	cout << "最大的数字为：" << max << endl;
		
	system("pause");
	return 0;
}
*/

//成绩转换
/*
#include<iostream>
using namespace std;
int main()
{
	int old_grade;
	double new_grade;

	cout << "请输入学生的成绩：";
	cin >> old_grade;

	// 这是按照10分为一个等级，对成绩进行划分。
	
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
	
	// 这是按照5分为一个等级，对成绩进行划分。
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

	cout << "该成绩的等级为：" << new_grade << endl;

	system("pause");
	return 0;
}
*/

//计算累加和
/*
#include<iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cout << "请输入一个正整数：";
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		sum = sum + i;
	}

	cout << "这个正整数的累加和为：" << sum << endl;

	system("pause");
	return 0;
}
*/

//乘法表
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

//计算e值
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

//计算实数的n次方根
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x, n;

	while (1)
	{
		cout << "请输入x与n的值：(输入0 0终止程序)";
		cin >> x >> n;

		if (x==0 && n==0)
		{
			cout << "程序结束" << endl; break;
		}
		else if ((x<0&&n<=0)||(x<=0&&1/n!=int(1/n)))
			{
				cout << "......................输入错误，请重新输入......................." << endl;
				continue;
			}
		cout << x << "的" << n << "次方根为：" << pow(x, 1/n) << endl;
	}

	system("pause");
	return 0;
}

*/

//解一元二次方程
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
		cout << "一元二次方程求根计算" << endl;
		cout << "请输入a的值："; cin >> a;
		cout << endl << "请输入b的值："; cin >> b;
		cout << endl << "请输入c的值："; cin >> c;

		if (a == 0 && b != 0) //当a等于0，b不等于0的时候
		{
			x = (-c) / b;
			cout << "此式为一元一次方程，其解为：" << x << endl;
			break;
		}
		else if (a == 0 && b == 0) //当a等于0，b等于0的时候，输入错误
		{
			cout << "...................................输入有误请检查后重新输入..............................";
			continue;
		}
		else if (a != 0 && b != 0) //当输入值符合一元二次多项式的条件时
		{
			delta = b * b - 4 * a * c; //计算delta的值
			if (delta > 0.0) //当delta大于0的时候
			{
				x1 = (-b + sqrt(delta)) / (2 * a);
				x2 = (-b - sqrt(delta)) / (2 * a);
				cout << "第一个根为：" << x1 << endl;
				cout << "第二个根为：" << x2 << endl;
				break;
			}
			else if (delta == 0.0) //当delta等于0的时候
			{
				cout << "两根相同为：" << (-b) / (2 * a) << endl;
				break;
			}
			else //当delta小于0的时候
			{
				delta = sqrt(-delta);    //判别式变号开方
				x1 = (-b) / (2 * a);     //得到复根的实部
				x2 = (delta / 2 * a);    //得到复根的虚部
				cout << "此一元二次方程的解为复根。"<< endl;
				cout << "第一个根为：" << x1 << "+" << x2 << "*j" << endl;
				cout << "第二个根为：" << x1 << "-" << x2 << "*j" << endl;
				break;
			}
		}
	}

	system("pause");
	return 0;
}
*/

//简单计算器
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double num1, num2, result=0;
	char op;                          //存放操作符

	cout << "请输入计算基本表达式：";
	cin >> num1 >> op >> num2;
	switch(op)
	{
		case '+':result = num1 + num2;
			cout << "表达式的计算结果为：" << result << endl;
			break;
		case '-' : result = num1 - num2;
			cout << "表达式的计算结果为：" << result << endl;
			break;
		case '*': result = num1 * num2;
			cout << "表达式的计算结果为：" << result << endl;
			break;
		case '/':
			if (fabs(num2) < 1.0e-8)  //fabs函数是求绝对值的函数。
			{
				cout << "除数为0，输入错误。"<< endl;
			}
			else
			{
				result = num1 / num2;
				cout << "表达式的计算结果为：" << result << endl;
			}
			break;
	}

	system("pause");
	return 0;
}
*/

//寻找自幂数
//自幂数的定义：一个n位正整数，如果它的各位数字的n次方的和加起来还等于这个数，就称该数为自幂数。
/*
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;            //表示数的位数
	int start, end;   //表示n位数的起始值和终止值
	int m;             //待分解各位的数，即待判断的数
	int digit;        //某个数位的值
	int sum;          //各位数的n次方的和
	int i;            //循环变量，待检验的数

	cout << "求n位自幂数，请输入位数：";
	cin >> n;
	while (n>0)
	{
		start = pow(10, n - 1);      //n位数的起始值
		end = pow(10, n) - 1;        //n位数的终止值
		cout << n << "位自幂数：";
		for ( i = start; i <= end; i++)  //从起始值到终止值逐个检查
		{
			m = i;                      //将i赋值给m，再检验过程中不会改变i的值
			sum = 0;

			while (m != 0)              //m开始为待检的数
			{
				digit = m % 10;                   //依次获取m各个位的数字
				sum = sum + pow(digit, n);        //并计算各个位数的n次方的累加和
				m = m / 10;
			}
			if (sum == i)
			{
				cout << i << "\t";
			}
		}

		cout << endl << "求n位自幂数，请输入位数：";
		cin >> n;
	}

	system("pause");
	return 0;
}
*/

//将单词中小写字母转换为大写的程序
/*
#include<iostream>
using namespace std;
int main()
{
	char str[10];
	int i = 0;

	cout << "请输入一串字符，长度小于10：";
	cin >> str;

	while (str[i] != '\0')
	{
		str[i] = str[i] - 32;  //ASCII码中大写字母与小写字母之间相差32
		i = i + 1;
	}

	cout << str << endl;
	system("pause");
	return 0;
}
*/

//二维数组和一维数组的转换
/*
#include<iostream>
using namespace std;
int main()
{
	const int m = 2, n = 3;  //const关键字，是指定一个语义约束，编译器会强制实施这个约束，保证其修饰的对象再整个程序中保持不变。
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
			cout << a[i * n + j] << "\t" << b[i][j] << endl; //i*n<列数> + j,是二维数组行列号对应位置向一维数组序号转化的方式
		}
	}

	system("pause");
	return 0;
}
*/

//月份的英文转换
/*
#include<iostream>
using namespace std;
int main()
{
	char month[12][10] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	int m;

	cout << "请输入月份的数字形式：";
	cin >> m;

	if (m>0&&m<13)
	{
		cout << endl << "该月份对应的英文形式：" << month[m-1]; //m-1是因为数组的起始位置为0，最终位置为m-1，m代表总行数或总列数或总长度
	}
	else {
		cout << "输入不正确" << endl;
	}

	system("pause");
	return 0;
}
*/

//简易通讯录
/*
#include<iostream>
using namespace std;
int main()
{
	//结构定义
	const int numOfpeople = 3;
	struct telelist
	{
		char name[8];  //在使用该结构时，如果输入的字符串的长度超过了规定的长度，会出现错误，使变量中存储进下一个变量输入的字符
		char sex[8];
		char photo1[13];
		char photo2[6];
	};
	struct telelist list1[numOfpeople];

	//输入：
	int i;
	for ( i = 0; i <= numOfpeople - 1; i++)
	{
		cout << "请输入联系人的信息" << endl;
		cout << "姓名："; cin >> list1[i].name;

		cout << endl << "性别："; cin >> list1[i].sex;

		cout << endl << "手机号："; cin >> list1[i].photo1;

		cout << endl << "座机号："; cin >> list1[i].photo2;
	}

	//显示
	for ( i = numOfpeople -1; i >= 0; i--)
	{
		cout << list1[i].name << "/" << list1[i].sex << "/" << list1[i].photo1 << "/" << list1[i].photo2 << endl;
	}

	cout << sizeof(list1) << endl;

	//查找
	char findName[8];
	cout << "请输入联系人的姓名："; cin >> findName;

	bool pipei=0;                    //添加一个是否找到联系人的标识，用于显示通讯录中是否有该联系人

	for ( i = 0; i <= numOfpeople -1; i++)
	{
		string exitName;
		exitName = list1[i].name;  //无法将结构体中的变量与普通变量直接进行比较，添加一个中间变量，用于比较。

		if (exitName == findName) //如果通讯录中有此人，就输出其信息。
		{
			pipei = 1;
			cout << endl << "该人的信息为：" << "姓名：" << list1[i].name << "/性别：" << list1[i].sex << "/手机号：" << list1[i].photo1 << "/座机号：" << list1[i].photo2 << endl;
		}

	}

	if (!pipei) //如果通讯论中无此人，给与提示
	{
		cout << "通讯录中无此人" << endl;
	}

	system("pause");
	return 0;
}
*/

//三色球组合
//口袋中有红、黄、蓝，3种颜色的小球，如果每次从口袋中取出3种不同颜色的小球，编写程序，打印出每种组合。
/*
#include<iostream>
using namespace std;
int main()
{
	enum color{red, yellow, blue};
	int temp, i, j, t;                      //i可以理解为是第一次取出来的小球的颜色，j可以理解为是第二次取出来的小球的颜色
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

//冒泡排序法
/*
#include<iostream>
using namespace std;
int main()
{
	double a[100];  //假设输入的数字最多为100个

	int N;          //用户输入数字的数量
	int i, j;

	cout << "请输入需要排序数字的数量：";  cin >> N;

	//数据输入
	for ( i = 0; i < N; i++)
	{
		cin >> a[i];
	}

	//泡排序法 排序
	for ( i = 0; i < N-1; i++)
	{
		for ( j = 0; j < N-1-i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp;          //临时变量
				temp = a[j];        //交换
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	//排序后显示
	for ( i = 0; i < N; i++)
	{
		cout << a[i] << "\t";
	}

	cout << endl;
	system("pause");
	return 0;
}
*/

//文字信息统计
/*
#include<iostream>
using namespace std;
int main()
{
	const int n = 100;           //定义一个常量来确定字符串的大小
	char str[n];
	int len=0;                   //表示字符串的长度
	int capital=0;               //表示大写字母的个数
	int smalletter=0;            //表示小写字母的个数
	int digit=0;                 //表示数字的个数
	int others=0;                //表示其他字母个数

	//数据输入
	cout << "请输入一段字符：" << endl;
	cin.getline(str, n);          //getline 只将回车键视为输入的结束。

	//统计
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

	//显示
	cout << "该段字符的总长度为：" << len << "中包含大写字母：" << capital << "个。" << "包含小写字母：" << smalletter << "个。" << "包含数字："
		<< digit << "个。" << "包含其他字符：" << others << "个。" << endl;


	system("pause");
	return 0;
}
*/

//string  字符串类的使用
/*
#include<iostream>
#include<string>
using namespace std;
int main()
{
	//定义并初始化字符串对象text1
	string text1 = "Heavy rains are pushing water levels beyond the limit.";
	string text2, text3;

	int k;

	text2 = "Sluice gates at Three Gorges Dam opened to discharge water.";

	text3 = text1 + text2;   //将两个字符串合并为一个字符串。
	k = text3.find("Heavy");    //在字符串text3中查找Heavy这个单词，找到了，返回H所在的字符串的位置。
	text3.erase(k, sizeof("Heavy") - 1); //sizeof获取到的字符串的长度包含结束符'\0'，故而减去1，erase成员函数的两个参数一个表示起始位置，另一个表示长度。
	text3.insert(k, "Strong");

	cout << text3 << endl;

	system("pause");
	return 0;
}
*/

//矩阵的乘法
/*
#include<iostream>
using namespace std;
int main()
{
	const int M = 20, N = 20, K = 20;
	double A[M][N], B[N][K], C[M][K];  //相当于规定了矩阵的最大维数
	int M1, N1, N2, K1;                //矩阵的实际维数
	int i, j, k;

	//第一个矩阵的输入
	cout << "请输入第一个矩阵的维数MN" << endl;
	cin >> M1 >> N1;
	cout << "请按行输入第一个矩阵的元素" << endl;
	for ( i = 0; i < M1; i++)
	{
		for ( j = 0; j < N1; j++)
		{
			cin >> A[i][j];
		}
	}

	//第二个矩阵的输入
	cout << "请输入第二个矩阵的维数NK" << endl;
	cin >> N2 >> K1;
	cout << "请按行输入第二个矩阵的元素" << endl;
	for (i = 0; i < N2; i++)
	{
		for (j = 0; j < K1; j++)
		{
			cin >> B[i][j];
		}
	}

	if (N1 == N2)       //判断举证是否能相乘
	{
		for (i = 0; i < M1; i++)  //如果能相乘进行运算
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

		//显示计算结果
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
		cout << "第一个矩阵的行数与第二个矩阵的列数不匹配，无法进行矩阵的乘法运算。";
	}


	system("pause");
	return 0;
}
*/

//取子字符串
/*
#include<iostream>
using namespace std;
int main()
{
	//string inputStr;
	char str[101];
	char saveStr[101];
	int k, l;
	int len;  //用于记录字符串的长度

	cout << "请输入一串字符：";
	cin.getline(str,100);

	//计算输入字符串的长度
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	cout << endl << "请输入截取的起始位置："; cin >> k;
	cout << endl << "请输入截取的长度："; cin >> l;

	while(k!=0 && l!=0)
	{
		int j = 0;
		for (int i = k - 1; i < k + l - 1; i++)
		{
			saveStr[j] = str[i];
			j++;
		}
		saveStr[j] = '\0';                         //子字符串的结尾标志，无该标志就证明其不是一个完整的字符串
		cout << "截取的子字符串为：" <<saveStr << endl;
		cout << endl << "请输入截取的起始位置："; cin >> k;
		cout << endl << "请输入截取的长度："; cin >> l;
	}

	system("pause");
	return 0;
}
*/

//词频统计
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

//定义一个字典结构体
struct WordList
{
	char word[20];  //存储单词
	int freq;       //统计使用次数
};

int main()
{
	WordList list[1000];  //结构数组体
	int N = 0;   //实际单词数

	int i, j, k;

	char tmp[20];

	//输入与统计
	cout << "请输入一系列英语单词，以xyz表示输入结束" << endl;
	cin >> tmp;

	while (strcmp(tmp, "xyz"))
	{
		for (i = 0; i < N; i++)
		{
			if (strcmp(list[i].word, tmp) == 0) //如果输入的单词已经存在，其出现次数加1
			{
				list[i].freq++;
				break;
			}
		}

		if (i >= N)    //如果输入的单词为新单词，则在字典中进行记录
		{
			strcpy(list[i].word, tmp);
			list[i].freq = 1;
			N++;
		}
		cin >> tmp;
	}

	//对词典进行排序,使用选择排序法
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

	//输出结果
	cout << "词频统计结果如下：" << endl;
	for (i = 0; i < N; i++)
	{
		cout << list[i].word << '\t' << list[i].freq << endl;
	}

	system("pause");
	return 0;
}
*/

//函数体的使用：计算圆的面积
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

	cout << "请输入圆的半径(单位为cm)："; cin >> r;

	area = areaofcircle(r);

	cout << endl << "该圆的面积为(单位为平方厘米)：" << area << endl;

	system("pause");
}
*/

//函数体的使用：将一个字符显示n次
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

	cout << "请输入需要重复显示的字符："; cin >> str;
	cout << endl << "请输入重复显示的次数："; cin >> n;

	display_char(n, str);

	system("pause");
}
*/

//函数体的使用：引用传递
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

//函数体的使用：数组名作为函数参数
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
	int n, m;   //用于存储参与计算的元素的起始位置和参与计算的元素的个数
	int sum=0;  //用于存储累加和

	cout << "请输入一维数组中的元素，元素间使用空格隔开,输入666表示停止输入" << endl;
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

	cout << "请输入需要累加求和的元素的起始位置：";
	cin >> n;
	cout << endl << "请输入需要进行累加计算的元素的个数：";
	cin >> m;

	sum = fun(A, n, m);
	cout << endl << "累加和为：" << sum << endl;

	system("pause");
}
*/

//函数体的使用：二维数组名做参数，将N阶方阵转置
/*
#include<iostream>
using namespace std;

//根据输入的阶数，对矩阵进行转置
void transmat(double B[][10], int n)
{
	int i,j;
	double t;  //用于存储过程数据
	//进行转置处理
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

	int n;           //用于存储需要转置的矩阵的阶数
	int i, j;

#if 0
	cout << "请按行输入一个10X10的二维矩阵：" << endl;
	for (i = 0; i < 10; i++)
	{
		for ( j = 0; j < 10; j++)
		{
			cin >> A[i][j];
		}
	}
#endif

	cout << "请输入需要转置的阶数n(n<10)："; cin >> n;

	transmat(A, n);

	//转置后显示
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

//函数体的使用：结构体变量作为函数参数
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
	cout << "学号：" << s.stID << endl;
	cout << "姓名：" << s.name << endl;
	cout << "年纪：" << s.age << endl;
}

void main()
{
	struct student s = {101, "张三", 27};

	print(s);

	system("pause");
}
*/

//求最大数
/*
#include<iostream>
using namespace std;

//求最大数
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
	double num[20]; //用于存储参与最大值筛选的数字
	double max;    //用于存储最大值

	int n=0;
	int m = 1; // 用于记录是否继续循环计算

	while (m)
	{
		cout << "请输入参与最大值筛选的数字,如要停止输入，请输入666：" << endl;
		for (int i = 0; i < 20; i++)
		{
			double tem;
			cin >> tem;
			if (tem != 666.0)
			{
				num[i] = tem;
				n++;             //用于存储输入输入元素的个数
			}
			else
			{
				break;
			}
		}

		max = maxofnumber(num, n);

		cout << "最大值为：" << max << endl;

		cout << "是否开启新一轮的筛选（继续输入1，停止输入0）：";
		cin >> m;
	}


	system("pause");
}
*/

//二分查找法
/*
#include<iostream>
using namespace std;

int Search(int a[], int n, int key)     //a代表查找表，n查找表长度， key待查值。
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
	return -1;   //返回-1表示查找失败的标记

}

void main()
{
	int a[] = { 9, 15, 18, 21, 23, 29, 32, 36, 39, 43, 46, 50, 54 };
	int k, x;      //k用于记录查找数的序号，x存放待查找值
	int changDu;   //用于计算数组的长度
	char again = 'n';

	changDu = end(a) - begin(a);
	cout << "数组长度为：" <<changDu << endl;
	do
	{
		cout << "您要查找的数为："; cin >> x;
		k = Search(a, changDu, x);
		if (k >= 0)
		{
			cout << x << "是第" << k << "个数" << endl;

		}
		else
		{
			cout << x << "不在序列中！" << endl;
		}
		cout << "还找另一个数吗？（y或n）："; cin >> again;

	} while (again != 'n');




	system("pause");
}

*/

//秦九韶算法求解多项式的值
//秦九韶算法是用于求解那些包含任意多项而且自变量次数无限增大的多项式
// 例如：y=9x^4+9.3x^3+6.8x^2+3.5x-1  ==>  y=(((9x+9.3)x+6.8)x+3.5)x+(-1)
/*
#include<iostream>
using namespace std;

//秦九韶算法求多项式的值
double qinJS(double aa[], int nn, double xx)  //aa[]代表存放各项系数的一维数组，nn表示这个数组的长度，xx表示自变量的值
{
	double y = 0; //定义累加和变量并赋予初值
	for (int i = nn - 1; i >= 0; i--)
	{
		cout << "第" << nn - i << "次循环：" << aa[i] << "+" << xx << "*" << y << endl;

		y = aa[i] + xx * y;  //主要的循环体

	}

	return y;
}

//主函数：调用qinJS函数
void main()
{
	int n;  //用于记录多项式的项数
	double a[100], x, y; //用于记录多项式各项的系数，和自变量的值，因变量的值

	//输入
	cout << "多项式的项数为："; cin >> n; //输入项数
	cout << endl << "x=:"; cin >> x; //输入自变量
	for (int i = 0; i < n; i++)
	{
		cout << endl << "第" << i + 1 << "项的系数为：";  cin >> a[i];
	}

	//处理
	y = qinJS(a, n, x);

	//输出
	cout << "当x=" << x << "时，f(x)=" << y << endl;

	system("pause");
}
*/

//使用递归函数求解非负整数的阶乘
/*
#include<iostream>
using namespace std;

//计算n的递归函数
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
	int n;           //用于存放待求阶乘的数
	int factorial;  //用于存放计算出来的结果

	//输入
	cout << "待求阶乘的数为："; cin >> n;

	//处理
	factorial = jieCheng(n);

	//输出
	cout << "结果为：" << factorial << endl;

	system("pause");
}
*/

//使用递归思想解决，Hanoi塔问题
//有A,B,C三根柱子，在A柱子上有n个大小不同的金盘，大盘在下，小盘在上，要将A柱子上的金盘移动到C柱子上，每次只能搬动一个金盘
//搬动过程中可以借助任何一根柱子暂时存放金盘，但必须满足大盘在下，小盘在上的条件。
/*
#include<iostream>
using namespace std;

int s; //定义一个全局变量用于存储移动的次数

//函数move将一个盘子从x移动y
void move(char x, char y)
{
	cout << x << "--->" << y << endl;
	s++; //统计移动的次数
}

//hanoi塔问题
void hanoi(int n, char a, char b, char c)  //n代表盘子的数量，a,b,c代表三根柱子
{
	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b); //借助c将n-1个盘子从a移到b
		move(a, c);
		hanoi(n - 1, b, a, c); //借助a将n-1个盘子从b移动到c
	}
}

void main()
{
	int m;
	cout << "请输入盘子数："; cin >> m;
	cout << "移动" << m << "个盘子的过程如下：" << endl;
	hanoi(m, 'A', 'B', 'C');
	cout << "一共移动了" << s << "次。" << endl;
	system("pause");
}
*/
//进一步显示详细的汉诺塔解决算法
/*
#include<iostream>
using namespace std;

//hanoi函数
void hanoi(int n, int p1, int p2, int p3) //n代表圆盘的个数，p1代表原桩，p2代表辅助桩，p3代表目标桩
{
	void move(int, char, char);  //前无定义，需声明
	if (n == 1)
	{
		move(n, p1, p3);
	}
	else
	{
		hanoi(n - 1, p1, p3, p2);  //将原有的目标桩作为辅助桩，原有的辅助桩作为目标桩
		move(n, p1, p3);           //调用move函数完成从源桩向目标桩的移动
		hanoi(n - 1, p2, p1, p3);  //原有的辅助桩做为源桩，原有的源桩作为辅助桩，原有的目标桩不变
	}

}
//移动函数
void move(int n, char from, char to)
{
	cout << n << "号盘从" << from << "到" << to << endl;
}
//主函数
void main()
{
	int n;
	cout << "圆盘的个数为：";  cin >> n;
	hanoi(n, 'A', 'B', 'C');

	system("pause");
}
*/

//内联函数的使用：计算整数平方
/*
#include<iostream>
using namespace std;

//将计算数的平方定义为一个内联函数
inline double pingFang(double a)
{
	return a * a;
}

void main()
{
	double x[100]; //存放输入的数
	int n=0;  //用于存储输入数的个数
	double sum = 0; //用于存储输入数的平方和

	//输入
	for (int i = 0; i < 100; i++)
	{
		int panduan = 0;

		cout << "请输入一系列正数，我们将返回它们的平方和(输入0表示停止输入)："; cin >> panduan;

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

	//处理
	for (int i = 0; i < n; i++)
	{
		sum = sum + pingFang(x[i]); //编译程序在遇到内联函数调用式pingFang时，就用pingFang函数体中代码代替pingFang(),同时将实参代替形参
	}

	//输出
	cout << "平方和为：" << sum << endl;


	system("pause");
}
*/

//函数重载：求一个整数和一个双精度数的绝对值的函数
/*
#include<iostream>
using namespace std;

//定义了两种求数字绝对值的函数
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

//递归求解Fibonacci（斐波那契）数列
//Fibonacci数列：1，1，2，3，5，8，13，21，34，55，89..........,该数列前两项为1，1；其他项都是之前两项之和
/*
#include<iostream>
using namespace std;

//使用递归的方式来构建斐波那契数列
long recursion(int n)  //形参n代表所求项的序号，该自定义函数的返回值为长整型
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

//使用尾递归改写，减少程序运行时的冗余
long fibonacci(long f1, long f2, int n) //f1，f2表示之前一项和二项,n表示当前项的序号
{
	return n <= 1 ? f2 : fibonacci(f1 + f2, f1, n - 1);  //通过计算参数的方法，并且每次递归都保持上次计算状态
}

void main()
{
	int n;

	cout << "求Fibonacci数列前多少项（1~36）？";  cin >> n;

	for (int i = 1; i <= n; i++)
	{
		//cout << recursion(i) << '\t';
		cout << fibonacci(1, 1, i) << '\t';
	}

	system("pause");
}
*/

//使用递归的方法完成二分查找
/*
#include<iostream>
using namespace std;

//递归式的二分查找函数
int find(int a[], int i, int j, double x)  //a[]代表存放顺序排放的数组，i代表起始位置，j代表终止位置，x代表待查找的数据
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
	int a[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 }; //一维数组
	int n = 10;                                         //记录数组的长度
	int x;                                              //用于存放待查找的数据
	char p = 'y';                                       //用于记录是否继续查找



	while (p == 'y')
	{
		cout << "请输入需要查找的数据：";
		cin >> x;

		int f = find(a, 0, n - 1, x);
		if (f != -1)
		{
			cout << f << endl;
		}
		else
		{
			cout << "列表中没有该数据。" << endl;
		}

		cout << "是否继续寻找下一个数？（y/n）"; cin >> p;
	}


	system("pause");
}
*/

//函数重载：排序函数
/*
#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

const int COL = 20;

//两数排序
void sort(double& a, double& b)   //使用引用传递，直接修改实参的值
{
	if (a>b)
	{
		double tmp=a;
		a = b;
		b = tmp;
	}
}
//三数排序
void sort(double& a, double& b, double& c)
{
	sort(a, b);
	sort(a, c);
	sort(b, c);
}
//四数排序
void sort(double& a, double& b, double& c, double& d)
{
	sort(a, b, c);
	sort(a, d);
	sort(b, c, d);
}
//实数数组的排序，选择排序法
void sort(double a[], int n)  //使用数组作为形参，在调用时直接修改实参，n表示数组的长度
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			sort(a[j], a[j + 1]);
		}
	}
}
//两字符串比较
int mystrcmp(char s1[], char s2[])
{
	int i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return s1[i] - s2[i];
}
//二字符串比较排序函数
void sort(char s1[], char s2[])
{
	//调用二字符串比较函数执行二字符串排序
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
	//调用二串排序函数执行串数组排序
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
	//2个、3个、4个实数排序
	double a = 22.8, b = 115, c = 33.2, d = -10.9;
	sort(c, d);
	cout << c << " " << d << endl;
	sort(b, c, d);
	cout << b << " " << c << " " << d << endl;
	sort(a, b, c, d);
	cout << a << " " << b << " " << c << " " << d << endl;

	//实型数组排序
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

//指针和变量的关系
/*
#include<iostream>
using namespace std;
void main()
{
	int a = 5, * pta = &a;
	*pta = a + 8;
	cout << a << "," << pta << "," << *pta << endl; //*pta表示pta所指向的变量即变量a。

	system("pause");
}
*/

//指针和函数的关系:指针传递
/*
#include<iostream>
using namespace std;
void swap(int* xp, int* yp)  //形参为指针变量
{
	int a;
	a = *xp;     //在交换时通过间接访问运算符能够随实参变量进行操作
	*xp = *yp;
	*yp = a;
}

void main()
{
	int a = 5, b = 9;

	cout << a << "   " << b << endl;

	swap(&a, &b);        //实参为变量的地址

	cout << endl << a << "   " << b << endl;
	system("pause");
}
*/

//利用指针参数带回函数中的多个值
//计算一组一维数组元素的平均值，并能带回数组中的最大值与最小值
/*
#include<iostream>
using namespace std;

double faver(int s[], int n, int* max, int* min)  //s-一维数组，n-数组中元素的个数，max-指向最大值，min-指向最小值
{
	double sum=s[0];      //如果不将保存元素和的变量定义为双精度型，那么得到的结果将失去小数位，变量定义及初始化
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
	double aver;   //用于存储平均值

	aver = faver(a, 5, &max, &min);
	cout << "该组数的平均值为：" << aver << "  " << "最大值为：" << max << "  " << "最小值为：" << min << endl;

	system("pause");
}
*/

//返回指针的函数
/*
#include<iostream>
using namespace std;

//返回字符指针的函数,
char* noblank(char* str)
{
	while (*str == ' ') str++;  //如果为空字符，则指针下移
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

//指向函数的指针变量
/*
#include<iostream>
#include<cmath>
using namespace std;

//定义指向double型函数的指针变量，该函数有一个double型参数。
void main()
{
	double (*pf)(double);  //pf是一个指针变量，其所指的对象是一个函数，该函数有一个双精度型的形参，其返回值也是双精度型。
					  //当定义一个指向函数的指针之后，我们可以通过该指针指向一个具体的函数。
	pf = sqrt;             //pf 指向一个平方根函数（函数名就是函数的地址，也就是函数的指针）

	//使用*pf可以调用该函数
	cout << (*pf)(2.0) << endl;  //输出根号2的值
	cout << sqrt(2.0) << endl; //上下两个式子是等价的


	system("pause");
}
*/

//指针：三个数排序
/*
#include<iostream>
using namespace std;

void swap(double*x, double*y)
{
	double tem; //临时存放数据的变量
	tem = *x;
	*x = *y;
	*y = tem;
}
void paixu(double* a, double* b, double* c)
{
	//double tem;  //临时存放数据的变量

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

	cout << "请输入三个数：" << endl;
	cout << "a="; cin >> a;
	cout << endl << "b="; cin >> b;
	cout << endl << "c="; cin >> c;

	paixu(&a, &b, &c);  //使用指针传递，在输入形参时应该给变量前添加取址运算符

	cout << "三个数从小到大为：" << endl;
	cout << a << " " << b << " " << c << endl;
	system("pause");
}
*/

//指针：去掉字符串首部的空格
/*
#include<iostream>
using namespace std;

//去掉字符串首部的空格
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
		s[j - k] = s[j];   //每个字符前移k位
		j++;
	}
	s[j - k] = '\0';  //添加字符的结束符
	return &s[0];     //返回字符串的第一个字符的地址，即首地址
}
void main()
{
	char str[100];
	cout << "请输入头部包含空格的字符串：";
	cin.getline(str, 99);

	cout << "去空格前-|" << str << "|" << endl;
	//ltrim(str);                                       //由于我们去除空格的自定义函数没有返回值，所以不能直接将其写在输出表达式中。改写成返回指针的函数。
	cout << "去空格后-|" << ltrim(str) << "|" << endl;

	system("pause");
}
*/

//指针：计算圆的周长和面积
/*
#include<iostream>
using namespace std;

//计算圆的面积与周长
void jiSuan(double radius, double* perimeter, double* area)
{
	double pi = 3.1415926;
	*perimeter = 2 * pi * (radius);
	*area = pi * (radius) * (radius);
}

//改写成指向函数指针的形式
//计算周长
double Length(double r)
{
	return 2 * 3.1415926 * r;
}
//计算面积
double Area(double r)
{
	return 3.1415926 * r * r;
}
//指向函数的指针
double Function(double (*f)(double), double x)
{
	return (*f)(x);
}

void main()
{
	double radius, per, area;

	//输入
	cout << "请输入圆的半径：";   cin >> radius;   cout << endl;

	//处理
	//jiSuan(radius, &per, &area);
	per = Function(Length, radius);  //改写成指向函数的指针
	area = Function(Area, radius);

	//输出
	cout << "该圆的周长为：" << per << "  " << "该圆的面积为：" << area << endl;


	system("pause");
}
*/

//指针：梯形法计算定积分
//如果把函数的指针作为函数的形参，那么所定义的参数就是另一个函数，采用这种方式可以设计通用性更好的函数
/*
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
	double sum = ((*fun)(a) + (*fun)(b)) / 2;   //调用被积函数计算起始与终止位置的y值。

	for (int i = 1; i < n; i++)
	{
		sum += (*fun)(a + i * h);     //a+i*h是表示通过下区间值和区间的长度，计算x1、x2、x3、..........
	}

	sum = sum * h;     //计算定积分的值
	return sum;
}

//主函数
void main()
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
*/


//指针：一维数组与指针
/*
#include<iostream>
using namespace std;

void main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 }, * p = a, i;
	i = 3;

	cout << *p << endl;
	p++;                      //指针的算数运算与指针的变量类型有关，p指向int型，因int型变量为4个字节长度，所以，p+1相当于p+4。

	cout << *p << endl;


	system("pause");
}
*/

//指针：指针的关系运算
/*
#include<iostream>
using namespace std;

void main()
{
	double x[5] = { 1, 2, 3.5, 4, 5.7 }, * p;

	for (p=x; p < x+5; p++)     //x+5在这里也属于指针，x+5可以看作是一个指针常量，其代表的是&x[5]，p < x+5代表了一种指针的关系运算
	{
		cout << *p << "\t";
	}
	cout << endl;

	system("pause");
}
*/

//指针：使用数组元素不同的表示形式输出数组元素的值
/*
#include<iostream>
using namespace std;

void main()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, * p = a, i;

	//下标法
	for (i=0; i < 10; i++)
	{
		cout << "下标法：" << a[i] << "\t" << p[i] << endl;
	}

	//指针法
	for (i = 0; i < 10; i++)
	{
		cout << "指针法：" << *(a + i) << "\t" << *(p + i) << endl;
	}

	system("pause");
}
*/

//指针：二维数组的指针
/*
#include<iostream>
using namespace std;

void main()
{
	int a[3][4], i, j;
	int* p, max = a[0][0];

	//数据输入
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout << "请输入整数（共需要12个）："; cin >> a[i][j];
		}
	}

	//在数组中寻找最大值
	for (p = &a[0][0]; p < &a[0][0] + 12; p++)   //使用地址的形式，减少了两层嵌套循环的方式，因为已知数组的大小，故可以使用该方法
	{
		if (*p > max) max = *p;
	}

	cout << "数组中的最大值为：" << max << endl;

	system("pause");
}
*/

//指针：指向具有M个元素的一维数组指针
/*
#include<iostream>
using namespace std;

void main()
{
	int a[3][4] = { {1, 3, 5, 7}, {2, 4, 6, 8}, {1, 2, 3, 4} }, (*p)[4];    //p是指向具有4个元素的，一维数组的指针变量，p是一个行指针变量

#if 0 //方法一
	for (p = a; p < a + 3; p++)
	{
		cout << p << endl;  //输出行地址
		//cout << *p << endl; //
		for (int j = 0; j < 4; j++)   //用整型变量j来控制该行中不同的列元素
		{
			cout << *(*p + j) << "\t";  //p是一个行指针，初值为0行的行地址；p++后，p指向下一行，*p代表该行0列元素的地址，*p+j为该行j列元素的地址，*(*p+j)表示地址对应的数据
		}
		cout << endl;
	}
#endif

	//方法二
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

//指针：字符串指针
/*
#include<iostream>
using namespace std;

char* strchr(char* str, char c)   //形参：传入一个字符串，c代表要被查找的字符
//算法：从str的第一个字符查起，查到字符后就返回该字符的地址;查不到则返回空值NULL。
{
	while (*str != '\0')
	{
		if (*str == c) return str;     //如果找到了被查找的字符，返回该字符的地址
		str++;
	}
	return NULL;   //如果查找后没有该字符，则返回空。
}

//编写在字符串中查找某字符的函数
void main()
{
	char* str = "abcdefghij";
	char* p;
	p = strchr(str, 'g');
	if (p == NULL) cout << "字符串中无该字符。" << endl;
	else
		cout << "该字符在串中的位置是（起始位置为0）：" << p - str << endl;     //p - str,p中存储的是被查找字符在字符串中的地址，str中存储的是字符串的首地址，两个地址做减法的得出两个地址间的差值，因为字符只占一个字节故这个差值为该字符在字符串中的索引号

	system("pause");
}
*/

//指针：将月份数值转换为相应的英文名称
/*
#include<iostream>
using namespace std;

char* month_name(int n)
{
	static char* month[] =    //static表示该指针数组为静态，静态数组，函数结束后不释放空间
	{
		"lllegal month",    //月份值错误
		"January",          //一月
		"February",         //二月
		"March",            //三月
		"April",            //四月
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	return (n >= 1 && n <= 12) ? month[n] : month[0];   //返回字符串的指针
}

void main()
{
	int n;

	cout << "请输入月份数：";  cin >> n;
	cout << n << "-" << month_name(n) << endl;

	system("pause");
}
*/

//指针：结构体与指针
/*
#include<iostream>
using namespace std;

void main()
{
	//定义日期结构类型
	struct Date
	{
		int year;
		int month;
		int day;
	};


	Date d = { 2015, 4, 8 }, * p = &d;   //定义日期结构变量和指针变量

	//第一种输出方法
	cout << (*p).year << "-" << (*p).month << "-" << (*p).day << endl;

	//第二种输出方法
	cout << p->year << "-" << p->month << "-" << p->day << endl;

	system("pause");
}
*/

//指针：动态数组，动态申请单个变量，动态申请数组
/*
#include<iostream>
using namespace std;

void main()
{
	double* p;

	p = new double;   //动态申请一个双精度型的无名变量，并将其首地址存放在指针p中。

	*p = 100.0;
	//double *p = new double(100.0);      //综合成一个语句的形式

	cout << p << "-》" << *p << endl;

	//动态申请数组，动态申请存放80个字符的数组
	char* str;
	str = new char[1];
	//*str = 'a';
	//cout << str;

	//动态创建n个元素的一维整型数组
	int n, * pint;

	cout << "请输入n值：";
	cin >> n;               //键盘输入n

	pint = new int[n];     //动态建立n个元素的一维数组，申请成功的话指针指向该数组的首地址，申请不成功，系for统将返回一个空指针。

	if (p == NULL)
	{
		cout << "空间申请失败！";
	}

	cout << "请输入n个数：";
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];      //p[i]等价于*(p+i)
	}

	system("pause");
}
*/

//指针：动态数组实例
/*
#include<iostream>
using namespace std;

//定义一个动态数组输入函数
void input(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "第" << i + 1 << "个数为：";
		cin >> *p;   //输入数据
		cout << endl;
		p++;         //记录一个数据后，指针指向下一个内存空间
	}
}

//求数组中的最大值
int findmax(int* p, int n)
{
	int max, i;
	int* q;   //用于保存首地址

	q = p;
	max = *q;
	q++;

	for (i = 1; i < n; i++)
	{
		if (max < *q) max = *q;
		q++;                      //对比完后指向下一个地址，进行下一个数的比较
	}

	return max;
}


int main()
{
	int* p, n;
	cout << "请输入n的值：";
	cin >> n;

	p = new int[n];
	if (p == NULL)     //判断空间申请是否成功
	{
		cout << "空间申请失败！";
		return 1;
	}
	else
	{
		input(p, n);              //输入元素
		cout << "输入数据的最大值为：" << findmax(p, n) << endl;    //求最大值
		delete[]p;                //释放申请到的内存空间
	}

	system("pause");
	return 0;
}
*/

//指针实例：逆置数组
/*
#include<iostream>
using namespace std;

//将数组中的元素调换位置
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
	int n;    //用于计算动态数组的长度
	cout << "请输入数组的长度：";  cin >> n;
	cout << endl;

	double* a = new double[n];    //申请动态数组

#if 0
	if (p == NULL)     //判断空间申请是否成功
	{
		cout << "空间申请失败！";
		//return 1;
	}
#endif

	cout << a << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "第" << i + 1 << "个元素为："; cin >> a[i];  //如果使用下标的形式给数组中的元素赋值，就不用在输入完成后将指针回调到数组开头
		cout << endl;
		//cout << a << endl;    //调试语句
		//cout << "第" << i + 1 << "个元素为："; cin >> *a;  //使用指针的形式为数组元素赋值，在赋值结束后需要将指针回调到数组的开头
		//a++;
	}

	//a = a - n;            //动态数组输入完后将，指针从末尾指向开头，方便读取数组
	//cout << a << endl;

	invert(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << "第" << i + 1 << "个元素为：" << a[i] << endl;
		//a++;
	}

	delete[]a;       //释放动态数组

	system("pause");
}
*/

//指针实例：字符串排序
//自定义了字符串的拷贝函数和字符串的比较函数
/*
#define _CRT_SECURE_NO_WARNINGS     //使用strcpy函数时可能会出现安全性错误的提示，使用该行来保证程序的运行
#include<iostream>
#include<cstring>

using namespace std;
//自定义字符串拷贝函数
void mystrcpy(char* s1, char* s2)
{
	while (*s2 != 0)
		*s1++ = *s2++;   //将字符串s2中的字符复制到s1中。
	*s1 = '\0';          //在复制结束后，给s1字串添加字符串结束符
}
//自定义字符串比较函数
int mystrcmp(char* s1, char* s2)    //字符串比较函数，其功能是将两字符串从第一个字符开始比较，如果相等比较下一个，如果不相等，返回两个比较字符的差值
{
	while (*s1 == *s2 && *s1 != 0 && *s2 != 0)
	{
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

//自定义函数sort：字符串排序
void sort(char (*a)[10], int n)   //*a指向字符二维数组的行，n代表字符二维数组的行数
{
	int i, j;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			 if (mystrcmp(a[i], a[j]) > 0)   //二维字符数组中，每一行存储着一个字符串，如果后一行的字符串大于前一行的字符串，则交换它们
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
	//输入
	//char a[][10] = { "zhang", "wang", "wen", "xu", "li", "zhou" };  //字符二维数组用于存储字符串，允许的字符串长度最大为10
	int n;
	cout << "请输入字符串的个数：";   cin >> n;

	//定义一个二维的字符数组
	char(*a)[10] = new char[n][10];
	//数据输入
	for (int i = 0; i < n; i++)
	{
		cout << "第" << i + 1 << "个字符串为：(字符串的长度不要超过10)";
		cin >> a[i];
	}

	//排序前输出
	cout << "排序前为：";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;

	//处理
	sort(a, n);

	//输出
	cout << "排序后为：";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;

	//释放动态数组
	delete[]a;

	system("pause");
}
*/

//指针实例：二进制IP地址转化为点分十进制
//自定义了8位的二进制转换为十进制的函数
/*
#include<iostream>
using namespace std;
//自定义检查函数：检查串中是否有1和0外的字符
bool check(char* a)
{
	int i;
	for (i = 0; i < 32; i++)
	{
		if (a[i] != '1' && a[i] != '0')
		{
			return false;   //如果有0或者1以外的字符，返回false
		}
	}
	return true;
}

//自定义转换函数：将8位二进制数转化为十进制数
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
	char d = 'y';   //用于判断是否继续转换

	do
	{
		cout << "请输入32位二进制IP地址："; cin >> IP;

		if (strlen(IP) != 32)  //有效性检验
		{
			cout << "IP地址的长度应为32位。" << endl;  //11001010011101010011101001100100
		}
		else
			if (!check(IP))   //有效性检验
			{
				cout << "串中有0/1以外的字符，非正确IP地址。" << endl;
			}


			else
			{
				cout << "IP地址对应的点分十进制写法：" << endl;
				cout << trans(IP) << '.' << trans(IP + 8) << '.' << trans(IP + 16) << '.' << trans(IP + 24) << endl;  //实参是每8位IP地址的首地址，返回值为十进制IP
			}


		cout << "是否继续进行转换？（y/n）";  cin >> d;
	} while (d == 'y');

	system("pause");
}

*/

//类：定义，使用
/*
#include<iostream>
#include<windows.h>

using namespace std;

class Clock  //定义一个钟表类
{
private:   //数据成员一般为私有成员
	int Hour;    //小时属性
	int Minute;  //分钟属性
	int Seccond; //秒属性
	float Price;  //价格属性

public:    //函数成员一般为公有成员
	void Set(int h, int m, int s, float p);   //设置时间操作
	void Run();                               //钟表运转操作
	void Report_Time();                       //报时响铃操作
	void Show_Time() { cout << Hour << ":" << Minute << ":" << Seccond; }; //显示时间操作,在类体内直接定义函数成员
};

//在类外部定义成员函数,设置修改4个数据成员的值的函数
void Clock::Set(int h, int m, int s, float p)
{
	Hour = h >= 0 && h <= 24 ? h:0;         //在赋值之前先进行有效性检验
	Minute = m >= 0 && m <= 60? m:0;
	Seccond = s >= 0 && m <= 60 ? m : 0;
	Price = p;
}

//在类外部定义成员函数，模拟运行钟表运行函数
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
		//cout << "\r";    //不换行，返回当前行的首位,之间之所以添加多个空格，是为了将以前的显示进行遮盖处理
		cout << endl;
		Sleep(1000);                //程序暂停运行秒
		Show_Time();
	}
}

//类外定义成员函数：整点报时
void Clock :: Report_Time()
{
	cout << endl;
	// Show_Time();
	if (Minute == 0 && Seccond == 0)
	{
		for (int i = 0; i < Hour; i++)
		{
			cout << "\007";    //控制计算机的蜂鸣器响铃，"/007"让计算机的蜂鸣器响铃一次。
			Sleep(1000);
		}
	}
}

void main()
{
	//类对象的声明
	Clock XJTU_Big_Ben;   //该语句声明了三个对象，也可以称声明了三个变量。

	XJTU_Big_Ben.Set(0, 0, 0, 1000);
	cout << "钟表设置的时间：\n";
	//XJTU_Big_Ben.Show_Time();
	XJTU_Big_Ben.Report_Time();
	XJTU_Big_Ben.Run();
	cout << endl;
	system("pause");

	XJTU_Big_Ben.Set(5, 59, 50, 9000);
	cout << "\n钟表设置的时间：\n";
	XJTU_Big_Ben.Run();
	XJTU_Big_Ben.Report_Time();

	cout << endl;
	XJTU_Big_Ben.Show_Time();
	cout << endl;

	//对象与对象之间的传递
	Clock Omiga;
	cout << "显示Omiga的时间：";
	Omiga = XJTU_Big_Ben;
	Omiga.Show_Time();
	cout << endl;

	system("pause");
}
*/

//类：私有、公有与保护
/*
#include<iostream>
using namespace std;

//定义了一个分数类
class Fraction
{
protected:
	int a;  //分子可以定义为保护成员
	int b;                        //分母应该定义为私有成员或保护成员，防止分母为0

private:
	//int b;                        //分母应该定义为私有成员，防止分母为0
	int divisor(int p, int q);    //求最大公约数，其实该函数放到三种类型成员中都可以

public:
	void Set(int aa, int bb);   //设置分子分母
	void show();                //显示分数
	Fraction add(Fraction u);   //加一个分数

};

//设置分子、分母
void Fraction::Set(int aa, int bb)
{
	a = aa;
	if (bb != 0)       //分母有效性检验
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

//显示分数
void Fraction::show()
{
	cout << a << "/" << b << endl;
}

//分数相加，本类对象加u，该处需要仔细的琢磨，返回的是类，参数也是同类的一个实体
Fraction Fraction::add(Fraction u)
{
	int tmp;
	Fraction v;

#if 0
	v.a = a * u.b + b * u.a;   //计算分子
	v.b = b * u.b;              //计算分母

	tmp = divisor(v.a, v.b);   //计算分子、分母的公约数

	v.a = v.a / tmp;           //约去公约数
	v.b = v.b / tmp;           //约去公约数

	return v;                 //返回结果
#endif // 0

#if 1
	a = a * u.b + b * u.a;   //计算分子
	b = b * u.b;              //计算分母

	tmp = divisor(a, b);   //计算分子、分母的公约数

	a = a / tmp;           //约去公约数
	b = b / tmp;           //约去公约数

	return *this;                 //返回结果
#endif // 0 使用this指针,无需在函数中新建分数对象，直接修改参与运算的主对象


}

//计算最大公约数
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


//继承分数类，创建一个实数类
class Real : public Fraction
{
public:
	void show_real()
	{
		cout << a << '/' << b << '=' << a / (double)b << endl;   //b在分数类中位于私有成员中，在此处不可访问，应将其调配到保护成员中
	}
};

//主函数
void main()
{
	Real f1, f2, f3;   //声明类的三个对象
	int a, b, c, d;
	Fraction f4;       //用于存储分数相加的结果

	cout << "\n请分别输入两个分数的分子与分母，分母为0时退出\n";

	cin >> a >> b;
	cin >> c >> d;

	f1.Set(a, b);
	f2.Set(c, d);

	cout << "第一个分数f1为：";
	f1.show_real();
	cout << "第二个分数f2为：";
	f2.show_real();

	f4 = f1.add(f2);   //测试Fraction类的分数相加功能
	cout << "两分数相加的结果f4为：";
	f4.show();

	cout << "显示参与运算的对象f1，观察其是否发生变化：";
	f1.show_real();

	system("pause");
}
*/

//类：日期类的设计（使用继承的方式，定义类）
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdlib.h>
#include<time.h>       //取得系统得日期需要添加该头文件
using namespace std;

#if 0
//定义一个时间结构体
struct tm
{
	int tm_year;
	int tm_mon;
	int tm_mday;
};
#endif
//定义一个日期类
class Date
{
private:
	int year, month, day;   //将存储年月日的变量私有化

	//取得系统的日期
	void SetSystemDate();


public:
	//设置一个初始化年月日的函数
	void init(int y, int m, int d);

	//年月日格式显示
	void  print_ymd() { cout << year << '.' << month << '.' << day <<endl; }

	//月日年格式显示
	void print_mdn() { cout << month << '.' << day << '.' << year <<endl; }

	//取出年份
	int get_year() {return year; }

	//取出月份
	int get_month() { return month; }

	//取出日期
	int get_day() { return day; }

	//判断是否为闰年
	bool IsLeapYear();
};

//类外定义取得系统得日期
void Date::SetSystemDate()
{
	//取得系统日期
	tm* gm;                     //tm是时间（含年月日时分秒）结构体,其包含在time.h头文件中
	time_t t = time(NULL);      //time_t是长整型，t表示（总秒数，即从某一时刻起到现在的总秒数）
	gm = gmtime(&t);            //gmtime()函数是根据获取的这个总秒数来计算从那个时刻起到现在经过了多少年，在最后一年中又经过了多少个月，在这个月中又经过了多少天

	year = 1900 + gm->tm_year;
	month = gm->tm_mon + 1;      //之所以在计算月份的时候加1，是因为我们根据总秒数计算出的数据是已经过去了多少个月，过去的月和现在的月相差1
	day = gm->tm_mday;
}

//类外定义日期初始化函数
void Date::init(int y, int m, int d)
{
	//再初始化函数或着设置函数中应先进行合法性检验，根据情况赋值
	if(y >= 1000 && y <=9999 )
		year = y;
	else
	{
		SetSystemDate();  //如果输入得日期格式不合理，返回系统当前得日期
		return;
	}

	if(m >= 1 && m <= 12)
		month = m;
	else
	{
		SetSystemDate();  //如果输入得日期格式不合理，返回系统当前得日期
		return;
	}

	if(d >= 1 && d <= 31)
		day = d;
	else
	{
		SetSystemDate();  //如果输入得日期格式不合理，返回系统当前得日期
		return;
	}
}

//类外定义判断闰年函数
//算法原理：四年一闰，百年不闰，四百年再闰。
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

//主函数
void main()
{
	Date date1;          //创建一个日期对象，但未初始化
	date1.print_ymd();  //显示未初始化数据的情况
	system("pause");

	date1.init(2008, 3, 28);  //初始化数据成员
	date1.print_ymd();
	system("pause");

	Date date2;
	date2.init(2006, 13, 28); //初始化一个错误的日期类对象
	date2.print_mdn();        //按月日年显示日期
	system("pause");

	if (date1.IsLeapYear())     //测试判断闰年函数
	{
		cout << date1.get_year() << "是闰年" << endl;
	}
	else
	{
		cout << date1.get_year() << "不是闰年" << endl;
	}
	system("pause");

}


//类：日期时间类继承性设计思考(初探)
//上面我们已经设计了一个日期类，接下来我们再设计一个时间类，再根据这两个类，使用继承的方法来构建日期时间类
class Time  //定义一个钟表类
{
private:   //数据成员一般为私有成员
	int Hour;    //小时属性
	int Minute;  //分钟属性
	int Second; //秒属性


public:    //函数成员一般为公有成员
	void init_time(int h, int m, int s);   //设置时间操作
	void Show_Time() { cout << Hour << ":" << Minute << ":" << Second; }; //显示时间操作,在类体内直接定义函数成员

	int get_hour() { return Hour; }
	int get_minute() { return Minute; }
	int get_second() { return Second; }
};

//在类外部定义成员函数,设置修改4个数据成员的值的函数
void Time::init_time(int h, int m, int s)
{
	Hour = h >= 0 && h <= 24 ? h : 0;         //在赋值之前先进行有效性检验
	Minute = m >= 0 && m <= 60 ? m : 0;
	Second = s >= 0 && m <= 60 ? m : 0;
}


//通过继承的形式来构建日期时间类
class DateTime :public Date, Time
{

public:
	void init_datetime(int y, int m, int d, int h, int mi, int s) { init(y, m, d); init_time(h, mi, s); }  //通过继承的方式，用两个类中的初始化函数构建该类的初始化函数
	void show_datetime() { print_ymd(); Show_Time(); }     //通过继承的方式，用两个类中的显示函数构建该类的显示函数

};

#if 0
//测试日期时间类的主函数
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

//类：汽车类的设计
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<Windows.h>
#pragma comment (lib, "winmm.lib")  //是为了在调用mciSendStringA函数时会提示无法解析外部函数，该语句链接winmm.lib

using namespace std;

class automobile
{
private:

	char type[20];             //汽车型号
	char color[20];            //汽车颜色
	float price;               //汽车价格
	int carry_weight;          //载重量
	int carry_custome;         //载客量

public:

	void set_data(char* t, char* c, float pri, int cw, int cc);   //初始化或修改数据成员
	void movecar(int l, int k);                                 //汽车水平运动k步
	void horming(int num);                                      //汽车鸣笛
	void downcar(int l);                                        //汽车垂直向下运动
	void play_mp3(char* ps);                                    //播放音乐
	char* show_type() { return type; }                          //取出汽车型号

};

//类外定义初始化函数
void automobile::set_data(char* t, char* c, float pri, int cw, int cc)
{
	strcpy(type, t);
	strcpy(color, c);
	price = pri;
	carry_weight = cw;
	carry_custome = cc;
}

//类外定义水平运动函数
void automobile::movecar(int l, int k)
{
	cout << "\n" << type << "水平直线运动：" << endl;
	for (int i = 0; i < l; i++)
	{
		cout << ' ' << "O-O";
		Sleep(1000 / k);
		cout << "\b\b\b";
	}
}

//类外定义垂直下降运动函数
void automobile::downcar(int l)
{
	//垂直下降运动
	cout << "\n" << type << "垂直下降运动：" << endl;
	for (int i = 0; i < l; i++)
	{
		cout << "O-O";
		Sleep(500);
		cout << "\b\b\b" << "   ";
		cout << endl;
	}
}

//类外定义鸣笛函数
void automobile::horming(int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << type;
		cout << "\007" << "  di....." << endl;
		Sleep(1000);
	}
}

//类外定义播放音乐函数
void automobile::play_mp3(char* ps)
{
	char str[100] = "play ";
	strcat(str, ps);                       //将两个字符串连接起来
	cout << str;
	mciSendStringA(str, NULL, 0, NULL);     //一个播放函数,包含在window.h头文件中
	//

	char a;
	cin >> a;    //输入任意字符结束播放
}

//主函数
void main()
{
	automobile nison;
	char tp[] = "yyide";
	char ys[] = "white";

	nison.set_data(tp, ys, 200000, 5, 3);  //测试设置初始数据函数

	nison.horming(5);                      //测试鸣笛函数

	nison.movecar(10, 3);                  //测试水平直线运动
	nison.downcar(8);                      //测试垂直下降函数

	char mp[] = "c:\\ceshiyinyue.mp3";                 //将歌曲文件.mp3放到C盘根目录下
	nison.play_mp3(mp);                     //测试播放MP3函数

	system("pause");
}
*/

//类：圆类的设计（在一个类中使用另一个类定义的变量）
/*
s#include<iostream>
using namespace std;

//点类
class Point
{
private:  //如果不写private程序将默认语句为私有成员

	double x;  //设置点的平面坐标值
	double y;

public:
	//设置坐标
	void InitPoint(double, double);

	//输出点的坐标
	void Pring();

	//得到坐标
	double GetX() { return x; }
	double GetY() { return y; }
};

//圆类
class Circle
{
private:
	
	//圆的半径
	double radius;

	//圆的圆心,在一个类中引用了另一个类的对象
	Point Center;

public:
	//设置圆类的数据
	void InitCircle(double, Point);

	//计算面积
	double Area() { return 3.1415926 * radius * radius; }

	//输出圆属性
	void Print();

	//得到圆属性
	double GetRadius() { return radius; }
	Point GetCenter() { return Center; }                     //返回的是一个类对象

};

//类外定义点类函数成员
void Point::InitPoint(double a, double b)
{
	x = a;
	y = b;
}
void Point::Pring()
{
	cout << '[' << x << ',' << y << ']';
}

//类外定义圆类函数成员
void Circle::InitCircle(double r, Point p)
{
	radius = (r > 0 ? r : 0);   //添加一个合理性检验，如果半径为负数，那么将半径赋值为0
	Center = p;
}
void Circle::Print()
{
	cout << "Center =";
	Center.Pring();                  //本身center就是point类的一个对象，调用其输出函数进行输出
	cout << "; Radius = " << radius << endl;
}

//主函数
void main()
{
	Point p, center;

	p.InitPoint(30, 50);
	center.InitPoint(120, 80);

	Circle c;
	c.InitCircle(10, center);

	cout << "Point p:";
	p.Pring();             //测试点类中的显示函数
	cout << endl;

	cout << "Circle c:";             
	c.Print();               //测试圆类中的显示函数

	cout << "The center of circle c:";
	c.GetCenter().Pring();                 //GetCenter函数返回的是Point类的对象，该对象可以使用Point类中的函数。
	
	cout << "\nThe area of circle c:" << c.Area() << endl;

	system("pause");
}
*/

//类实例：学生信息类(创建类的对象数组)
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

//学生信息类的定义
class Info
{

private:

	int Id;                //学号
	char Name[20];         //姓名
	double Programming;    //程序设计课程成绩
	double Network;        //网络课程成绩
	double Database;       //数据库成绩
	double Total;          //总分

public:

	//初始化函数
	void Set_info(int id, char* name, double programming, double nerwork, double database);
	double Get_Pro() { return Programming; }           //返回程序设计成绩
	double Get_Net() { return Network; }            //返回计算机网络课程成绩
	double Get_Dat() { return Database; }            //返回数据库成绩
	double Get_Tol() { return Total; }            //返回总分
	void Show();                 //显示函数

};

//类外定义函数
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

//定义一个根据总成绩对学生数据排序的函数
void sort_of_total(Info student[], int count)
{
	int i = 0, j = 0;
	Info tmp;

	//冒泡排序法
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

//定义一个显示列标题的函数
void show_of_headline()
{
	cout << "学号" << "\t";
	cout << "姓名" << "\t";
	cout << "程序设计成绩" << "\t";
	cout << "计算机网络成绩" << "\t";
	cout << "数据库成绩" << "\t";
	cout << "总分" << endl;
}

//主函数
void main()
{
	//const int count = 5;       //类对象数组的成员个数定义为5个，使用常量形式定义是为了方便修改
	const int MAX_COUNT = 500;   //设置最大存储的学生人数为500,这时一种预先声明大数组的方式，仅仅是一个简单的方法

	int i = 0, j = 0;           //定义两个循环变量

	//定义输入的数据变量
	int id;
	char name[20];
	double programming, network, database;

	Info student[MAX_COUNT], tmp;

	int count;               //设置一个变量存储实际的学生人数
	cout << "请输入学生人数：";
	cin >> count;
	while (count > MAX_COUNT)
	{
		cout << "学生人数不能超过" << MAX_COUNT << "人，请重新输入：";
		cin >> count;
	}

	cout << "请输入学生的成绩信息" << endl;
	cout << "学号 姓名 程序设计成绩 计算机网络成绩 数据库成绩" << endl;

	//数据输入
	for (i = 0; i < count; i++)
	{
		cin >> id >> name >> programming >> network >> database;
		student[i].Set_info(id, name, programming, network, database);
	}

	//按照总成绩对学生进行一个排序
	sort_of_total(student, count);

	//数据显示
	cout << "按总分高低排名如下：" << endl;

	//输出的数据头行名称
	show_of_headline();

	for (i = 0; i < count; i++)
	{
		student[i].Show();
	}

	//显示每门成绩都大于85分的学生名单
	cout << "每科成绩都大于85分的学生" << endl;
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

//类：构造函数
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<time.h>
using namespace std;

//为日期类添加一个构造函数
//定义一个日期类
class Date
{
private:
	int year, month, day;   //将存储年月日的变量私有化

public:

	//定义该类的构造函数
	Date(int y = 1900, int m = 1, int d = 1)
	{
		year = y;
		month = m;
		day = d;
	}

	//取得系统的日期
	void SetSystemDate();

	//设置一个初始化年月日的函数
	void init(int y, int m, int d);

	//年月日格式显示
	void  print_ymd() { cout << year << '.' << month << '.' << day << endl; }

	//月日年格式显示
	void print_mdn() { cout << month << '.' << day << '.' << year << endl; }

	//取出年份
	int get_year() { return year; }

	//取出月份
	int get_month() { return month; }

	//取出日期
	int get_day() { return day; }

	//判断是否为闰年
	bool IsLeapYear();
};

//类外定义日期初始化函数
void Date::init(int y, int m, int d)
{
	//再初始化函数或着设置函数中应先进行合法性检验，根据情况赋值
	if (y >= 1000 && y <= 9999)
		year = y;
	else
	{
		SetSystemDate();  //如果输入得日期格式不合理，返回系统当前得日期
		return;
	}

	if (m >= 1 && m <= 12)
		month = m;
	else
	{
		SetSystemDate();  //如果输入得日期格式不合理，返回系统当前得日期
		return;
	}

	if (d >= 1 && d <= 31)
		day = d;
	else
	{
		SetSystemDate();  //如果输入得日期格式不合理，返回系统当前得日期
		return;
	}
}

//类外定义取得系统得日期
void Date::SetSystemDate()
{
	//取得系统日期
	tm* gm;                     //tm是时间（含年月日时分秒）结构体,其包含在time.h头文件中
	time_t t = time(NULL);      //time_t是长整型，t表示（总秒数，即从某一时刻起到现在的总秒数）
	gm = gmtime(&t);            //gmtime()函数是根据获取的这个总秒数来计算从那个时刻起到现在经过了多少年，在最后一年中又经过了多少个月，在这个月中又经过了多少天

	year = 1900 + gm->tm_year;
	month = gm->tm_mon + 1;      //之所以在计算月份的时候加1，是因为我们根据总秒数计算出的数据是已经过去了多少个月，过去的月和现在的月相差1
	day = gm->tm_mday;
}

//类外定义判断闰年函数
//算法原理：四年一闰，百年不闰，四百年再闰。
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

//主函数
void main()
{
	Date date1;
	date1.print_ymd();
	date1.init(2008, 8, 23);
	date1.print_ymd();

	Date date2(2013, 6, 1);          //直接通过构造函数，初始化了对象
	date2.print_ymd();

	system("pause");
}
*/

//类：重载构造函数
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
	Date() :year(1900), month(1), day(1) //无参构造函数
	{

	}

	Date(int yy, int mm = 1, int dd = 1);      //默认参数构造函数,仅有年份变量没有赋予初值

	Date(Date& d) :year(d.year), month(d.month), day(d.day) {};  //日期对象参数构造函数


	Date(char* ps);                                            //字符串日期构造函数

	void print_ymd();
};

//类外定义函数
void Date::print_ymd()
{
	cout << year << '-' << month << '-' << day << endl;
}
//在类外定义默认参数构造函数
Date::Date(int yy, int mm, int dd) :year(1900), month(1), day(1)
{
	if (yy >= 1900 && yy <= 9999)
	{
		year = yy;
	}
	else
	{
		return;           //如果输入的年份不合理，将使用头部的默认值为对象初始化
	}

	if (mm >= 1 && mm <= 12)
		month = mm;
	else
	{
		year = 1900;               //如果输入的月份不正确，将年份恢复默认值，月份，天按照默认值赋值
		return;
	}

	if (dd >= 1 && dd <= 31)
		day = dd;
	else
	{
		year = 1900;
		month = 1;                //如果输入的天不正确，将年份和月份恢复默认值，天按默认值赋值
		return;
	}
}
//字符串日期构造函数
Date::Date(char* ps) :year(1900), month(1), day(1)
{
	char py[5], pm[3], pd[3];
	strncpy(py, ps, 4);                  //规定长度的字符串拷贝函数，根据输入的参数值，复制相应数量的字符
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
		month = 1;                //如果输入的天不正确，将年份和月份恢复默认值，天按默认值赋值
		return;
	}
}
//主函数
void main()
{
	Date date1;
	cout << "date1:";             //使用无参构造函数
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

	Date date5(2006, 14, 8);    //使用一个错误的月份，观察输出结果
	cout << "date5:";
	date5.print_ymd();

	Date date6(date4);          //日期对象参数构造函数
	cout << "date6:";
	date6.print_ymd();

	Date date7("2008-08-08");   //使用字符串日期构造函数
	cout << "date7:";
	date7.print_ymd();


	system("pause");
}
*/

//类：析构函数
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;

//定义类
class Date
{
private:
	int year, month, day;

public:
	Date() :year(1900), month(1), day(1)         //无参构造函数
	{

	};

	Date(int yy, int mm = 1, int dd = 1);      //默认参数构造函数,仅有年份变量没有赋予初值

	Date(Date& d) :year(d.year), month(d.month), day(d.day) {};  //日期对象参数构造函数


	Date(char* ps);                                            //字符串日期构造函数

	void print_ymd();

	~Date()  //析构函数定义
	{
		static int i = 1;

		cout << "撤销日期对象" << i << "\n";
		i++;
	};
};

//类外定义函数
void Date::print_ymd()
{
	cout << year << '-' << month << '-' << day << endl;
}
//在类外定义默认参数构造函数
Date::Date(int yy, int mm, int dd) :year(1900), month(1), day(1)
{
	if (yy >= 1900 && yy <= 9999)
	{
		year = yy;
	}
	else
	{
		return;           //如果输入的年份不合理，将使用头部的默认值为对象初始化
	}

	if (mm >= 1 && mm <= 12)
		month = mm;
	else
	{
		year = 1900;               //如果输入的月份不正确，将年份恢复默认值，月份，天按照默认值赋值
		return;
	}

	if (dd >= 1 && dd <= 31)
		day = dd;
	else
	{
		year = 1900;
		month = 1;                //如果输入的天不正确，将年份和月份恢复默认值，天按默认值赋值
		return;
	}
}
//字符串日期构造函数
Date::Date(char* ps) :year(1900), month(1), day(1)
{
	char py[5], pm[3], pd[3];
	strncpy(py, ps, 4);                  //规定长度的字符串拷贝函数，根据输入的参数值，复制相应数量的字符
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
		month = 1;                //如果输入的天不正确，将年份和月份恢复默认值，天按默认值赋值
		return;
	}
}

//主函数
void main()
{

	{   //在主代码中添加一对大括号，这样对象会在暂停前超出作用域而析构，可以使析构函数显示出来，如果不添加该大括号，在暂停结束后析构，因程序运行速度太快而无法被观察到
		Date date1;
		cout << "date1:";             //使用无参构造函数
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

		Date date5(2006, 14, 8);    //使用一个错误的月份，观察输出结果
		cout << "date5:";
		date5.print_ymd();

		Date date6(date4);          //日期对象参数构造函数
		cout << "date6:";
		date6.print_ymd();

		Date date7("2008-08-08");   //使用字符串日期构造函数
		cout << "date7:";
		date7.print_ymd();
	}


	system("pause");
}
*/

//类实例：整数翻译函数
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class Robot
{
private:

	char name[20];   //机器人姓名
	char type[20];   //机器人型号

public:

	Robot()    //构造函数
	{
		strcpy(name, "XXXXXX");
		strcpy(type, "xxxxxx");
	}

	//定义一个设置函数
	void set(char n[], char t[])
	{
		strcpy(name, n);
		strcpy(type, t);
	}

	void out(int a);  //英文中每三位数读法相同，所以定义out函数翻译小于1000的数

	void tran_int(int n);   //将1至1999999999的整数翻译成英文句子

	~Robot() {};    //析构函数
};

//定义两个全局字符指针数组，存取所需的单词
//num1中为1到19，空出了0，所以可以直接用num1[n]调用，得到n对应的单词
static char* num1[] =
{
	"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", "thirteen ",
	"fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "
};

//num10中为20-90，空出了0和1，所以可以直接用num10[n/10]调用，得到n对应单词
static char* num10[] =
{
	"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "
};

//类外定义的小于1000整数翻译函数
void Robot::out(int a)
{
	int b = a % 100;
	//若百位数不为0，输出百位数加hundred，若此时十位个位均为0，不加and
	if (a / 100 != 0)
	{
		cout << num1[a / 100] << "hundred ";
		if (b != 0)
			cout << " and ";
	}
	//当后两位在20以内，直接调用num1[n],输出
	if (b < 20)
	{
		cout << num1[b];
	}
	//当b大于20时
	else
	{
		//先调用num10,输出十位数
		cout << num10[b / 10];
		//个位不为0时应输出个位数
		if (b % 10 != 0)
			cout << "\b-" << num1[b % 10];
	}
}

//整数翻译函数
void Robot::tran_int(int n)
{
	if (n > 1999999999)
		cout << "dev c++平台无法处理大于1999999999位的数字" << endl;
	else
	{
		//三位三位取走，存入abcd四个变量中
		int a = n / 1000000000, b = (n % 1000000000) / 1000000, c = (n % 1000000) / 1000, d = n % 1000;
		//不等于0时，输出并加上millon或thousand
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
			//根据英文语法规则，最后两位前一定有and
			if (d < 100 && (a != 0 || b != 0 || c != 0))
				cout << " and ";
			out(d);
		}
	}
	cout << endl;
}

//主函数:测试函数
void main()
{
	int n;
	cout << "请输入n: ";
	cin >> n;
	cout << n << endl;

	Robot brown;
	brown.tran_int(n);

	system("pause");
}
*/

//类实例：整数翻译（析构函数的实际意义）
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

//定义两个全局字符指针数组，存取所需的单词
//num1中为1到19，空出了0，所以可以直接用num1[n]调用，得到n对应的单词
static char* num1[] =
{
	"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", "thirteen ",
	"fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "
};

//num10中为20-90，空出了0和1，所以可以直接用num10[n/10]调用，得到n对应单词
static char* num10[] =
{
	"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "
};

//定义机器人类
class Robot
{
private:

	char name[20];   //机器人姓名
	char type[20];   //机器人型号

	//对原有的机器人类进行了修改
	int num;        //待翻译的整数
	char* ps;        //指向英文字符串

public:

	Robot()    //构造函数
	{
		strcpy(name, "XXXXXX");
		strcpy(type, "xxxxxx");

		//对原有构造函数进行修改
		num = 0;
		ps = new char[5];
		strcpy(ps, "zero");
	}

	//定义一个设置/修改函数
	void set(char n[], char t[], int m);

	char* out(int a);  //英文中每三位数读法相同，所以定义out函数翻译小于1000的数。将返回类型修改为了字符串指针

	char* tran_int(int n);   //将1至1999999999的整数翻译成英文句子。将返回类型修改为了字符串指针

	void print_num();       //新增输出整数及其英文句子

	~Robot()
	{
		cout << "堆区中" << strlen(ps) + 1 << "个字节空间释放收回" << endl;
		delete[] ps;

	};    //析构函数，释放构造函数和set函数中动态申请的数组
};

//类外定义设置函数
void Robot::set(char n[], char t[], int m)
{
	strcpy(name, n);
	strcpy(type, t);

	//对原有的设置/修改函数进行修改
	if (num == m)  //待翻译的整数没有变
		return;     //直接从设置函数返回
	else
	{
		num = m;
		delete[] ps; //删除已有的英文句子
	}
	if (num > 0)
	{
		char* tp = tran_int(num);              //定义一个字符串指针，用于指向翻译结果
		ps = new char[strlen(tp) + 1];         //重新动态申请字符串数组
		strcpy(ps, tp);
		delete[] tp;                           //释放在tran_int中动态申请的空间
	}
	else if (num == 0)
	{
		ps = new char[5];
		strcpy(ps, "zero");
	}
	else
	{
		ps = new char[13];
		strcpy(ps, "负数不能翻译");
	}
}

//类外定义的小于1000整数翻译函数
char* Robot::out(int a)
{
	char k[1000] = "";          //定义一个字符串数组，用于存储返回结果

	int b = a % 100;
	//若百位数不为0，输出百位数加hundred，若此时十位个位均为0，不加and
	if (a / 100 != 0)
	{
		//cout << num1[a / 100] << "hundred ";
		strcat(k, num1[a / 100]);     //strcat函数将第二个参数连接到第一个参数的末尾
		strcat(k, "hundred ");
		if (b != 0)
			//cout << " and ";
			strcat(k, "and ");
	}

	//当后两位在20以内，直接调用num1[n],输出
	if (b < 20)
	{
		//cout << num1[b];
		strcat(k, num1[b]);
	}
	//当b大于20时
	else
	{
		//先调用num10,输出十位数
		//cout << num10[b / 10];
		strcat(k, num10[b / 10]);

		//个位不为0时应输出个位数
		if (b % 10 != 0)
		{
			//cout << "\b-" << num1[b % 10];
			strcat(k, "\b-");
			strcat(k, num1[b % 10]);
		}
	}
	char* p = new char[strlen(k) + 1];   //在该函数中动态申请了一个字符串数组，记得在调用完后释放空间
	strcpy(p, k);
	return p;
}

//整数翻译函数
char* Robot::tran_int(int n)
{
	char* p;               //用于存放调用out函数的返回值
	char kk[1000] = "";    //用于存放翻译结果

	if (n > 1999999999)
	{
		cout << "dev c++平台无法处理大于1999999999位的数字!" << endl;
		strcpy(kk, "dev c++平台无法处理大于1999999999位的数字!\n");
	}
	else
	{
		//三位三位取走，存入abcd四个变量中
		int a = n / 1000000000, b = (n % 1000000000) / 1000000, c = (n % 1000000) / 1000, d = n % 1000;
		//不等于0时，输出并加上billion，million或thousand
		if (a != 0)
		{
			p = out(a);
			//cout << "billion ";
			strcpy(kk, p);
			strcat(kk, "billion ");
			delete[] p;     //释放在out函数中动态申请的空间
		}
		if (b != 0)
		{
			p = out(b);
			//cout << "million ";
			strcat(kk, p);                //此处不能继续使用字符串复制函数，应使用字符串拼接函数。
			strcat(kk, "million ");
			delete[] p;    //释放在out函数中动态申请的空间
		}
		if (c != 0)
		{
			p = out(c);
			//cout << "thousand ";
			strcat(kk, p);                    //此处不能继续使用字符串复制函数，应使用字符串拼接函数。
			strcat(kk, "thousand ");
			delete[] p;    //释放在out函数中动态申请的空间
		}
		if (d != 0)
		{
			//根据英文语法规则，最后两位前一定有and
			if (d < 100 && (a != 0 || b != 0 || c != 0))
				//cout << " and ";
				strcat(kk, "and ");
			p = out(d);
			strcat(kk, p);
			delete[] p;   //释放在out函数中动态申请的空间
		}
	}
	//cout << endl;

	p = new char[strlen(kk) + 1];   //申请的动态数组记得在使用完后，将其对应的空间释放
	strcpy(p, kk);
	return p;
}

//类外定义输出函数
void Robot::print_num()
{
	cout << "整数为： " << num << endl;
	if (ps == NULL)
		cout << "zero" << endl;
	else
		cout << "翻译结果为：" << ps << endl;
}

//主函数:测试函数
void main()
{
	{//在主函数中内嵌一个作用域，为了方便析构函数的显示
		int n;
		cout << "请输入n: ";
		cin >> n;
		//cout << n << endl;

		Robot brown;
		brown.set("brown", "800#", n);
		brown.print_num();
	}

	system("pause");
}
*/

//类实例：Person类的定义
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class Person
{
private:

	char Name[9];      //之所以将名字字符数组的长度设置为9，是因为一般汉族人名字的长度不会超过四个字。
	char Sex;
	int Age;
	char Pid[19];
	char* Addr;

public:

	//构造函数
	Person()
	{
		strcpy(Name, "XXX");
		Age = 0;
		Sex = 'x';
		strcpy(Pid, "xxxxxxxxxxxxxxxxxx");
		Addr = NULL;
	}

	//带有参数的构造函数
	Person(char* N, int A, char S, char* P, char *Ad)
	{
		strcpy(Name, N);
		Age = A;
		Sex = S;
		strcpy(Pid, P);

		//使用动态数组的形式存储地址
		int l = strlen(Ad);
		Addr = new char[l+1];
		strcpy(Addr, Ad);
	}

	//析构函数
	~Person()
	{
		cout << "Now destroying Person" << Name << endl;
		if (Addr != NULL) delete[] Addr;                 //在析构函数中释放申请的动态空间
	}

	//设置函数，登记
	void Register(char* name, int age, char sex, char* p, char* Ad);

	//显示信息函数
	void ShowMe();
};

//类外定义登记函数，即为类中数据的设置/修改函数
void Person::Register(char* name, int age, char sex, char* p, char* Ad)
{
	strcpy(Name, name);
	Age = age;
	Sex = sex;

	strcpy(Pid, p);

	if (Addr != NULL) delete[] Addr;    //应为在有参的构造函数中，已经动态申请空间了，如果要修改其值，应该先释放原有空间再申请新的空间由于存储新的住址
	//使用动态数组的形式存储地址
	int l = strlen(Ad);
	Addr = new char[l + 1];
	strcpy(Addr, Ad);
}

//类外定义显示函数
void Person::ShowMe()
{
	cout << Name << "\t" << Age << "\t" << Sex << "\t" << Pid << "\t";
	if (Addr != NULL) cout << Addr << endl;    //因为使用无参构造函数定义的住址其为空，如果没有为其赋值，则不输出
	else cout << endl;
}

//主函数
void main()
{
	{//在主函数中内嵌一个作用域，为了方便析构函数的显示
		Person person1;
		Person person2("张三", 19, 'm', "610103199409192839", "中国西安市咸宁路29号");
		Person person3;

		cout << "Person1: ";
		person1.ShowMe();

		cout << "Person2: ";
		person2.ShowMe();

		person3.Register("李四", 29, 'w', "610103198409192493", "中国上海市华山北路1845号");
		cout << "Person3: ";
		person3.ShowMe();

		person2.Register("赵武", 29, 'w', "610103198409152127", "中国新疆乌鲁木齐市王家沟12号");
		cout << "Person2: ";
		person2.ShowMe();
	}

	system("pause");
}
*/

//类：对象与指针
//日期类及应用
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
//类外定义初始化函数
void Date::init(int y, int m, int d)
{
	year = y;  month = m; day = d;
}
//类外定义显示函数
void Date::print_ymd()
{
	cout << year << "-" << month << "-" << day << endl;
}
//主函数
void main()
{
	Date date1;

	//定义对象指针，将其指向刚刚声明的对象
	Date* p1 = &date1;
	p1->init(2020, 3, 15);    //通过->的形式调用对象的功能函数。
	p1->print_ymd();

	int* p2 = &date1.year;   //使用整型指针获取日期对象中的年份数据
	cout << *p2 << endl;

	void (Date:: * p3)(int, int, int);    //在指针章节，我们学习过指向函数的指针，此格式介绍的是指向类中成员函数的指针
	void (Date:: * p4)();

	p3 = &Date::init;                     //将指向类成员函数的指针与相应的类成员函数匹配起来
	p4 = &Date::print_ymd;

	(date1.*p3)(2020, 8, 23);             //指向类成员函数的指针的使用
	(date1.*p4)();

	system("pause");
}
*/
//Person类及应用
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class Person
{
private:

	char Name[9];      //之所以将名字字符数组的长度设置为9，是因为一般汉族人名字的长度不会超过四个字。
	char Sex;
	int Age;
	//char Pid[19];
	//char* Addr;

public:

	//构造函数
	Person()
	{
		strcpy(Name, "XXX");
		Age = 0;
		Sex = 'x';
		//strcpy(Pid, "xxxxxxxxxxxxxxxxxx");
		//Addr = NULL;
	}

	//带有参数的构造函数
	Person(char* N, int A, char S)//, char* P, char* Ad)
	{
		strcpy(Name, N);
		Age = A;
		Sex = S;

#if 0
		strcpy(Pid, P);

		//使用动态数组的形式存储地址
		int l = strlen(Ad);
		Addr = new char[l + 1];
		strcpy(Addr, Ad);
#endif // 0 在该测试中将Person类简单化
	}

	//析构函数
	~Person()
	{
		cout << "Now destroying Person" << Name << endl;
		//if (Addr != NULL) delete[] Addr;                 //在析构函数中释放申请的动态空间
	}

	//设置函数，登记
	void Register(char* name, int age, char sex);//, char* p, char* Ad);

	//显示信息函数
	void ShowMe();
};

//类外定义登记函数，即为类中数据的设置/修改函数
void Person::Register(char* name, int age, char sex)//, char* p, char* Ad)
{
	strcpy(Name, name);
	Age = age;
	Sex = sex;

#if 0
	strcpy(Pid, p);

	if (Addr != NULL) delete[] Addr;    //应为在有参的构造函数中，已经动态申请空间了，如果要修改其值，应该先释放原有空间再申请新的空间由于存储新的住址
	//使用动态数组的形式存储地址
	int l = strlen(Ad);
	Addr = new char[l + 1];
	strcpy(Addr, Ad);
#endif // 0 在该测试中将Person类简单化


}

//类外定义显示函数
void Person::ShowMe()
{
	cout << Name << "\t" << Age << "\t" << Sex << "\t";
#if 0
	cout << Pid << "\t";
	if (Addr != NULL) cout << Addr << endl;    //因为使用无参构造函数定义的住址其为空，如果没有为其赋值，则不输出
	else cout << endl;
#endif // 0 在该测试中将Person类简单化
	cout << endl;
}

//主函数
void main()
{
	Person* p1, * p2;

	p1 = new Person;              //动态生成一个指向对象的指针
	cout << "Person1: \t";
	p1->ShowMe();
	p1->Register("张三", 19, 'm');
	cout << "Person1: \t";
	p1->ShowMe();

	p2 = new Person;
	cout << "Person2: \t";
	p2->ShowMe();

	*p2 = *p1;                    //对象之间赋值
	cout << "Person2: \t";
	p2->ShowMe();

	delete p1;  //释放指针指向对象所占的空间
	delete p2;

	system("pause");
}
*/

//类：this指针的使用
//this指针的理解
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
//类外定义成员函数
Test::Test(int a) { x = a; };
//类外定义成员函数
void Test::print()
{
	cout << "类中成员数据x的显示" << "    x = " << x << endl;

	int x=22;
	cout << "输出函数中定义的局部变量x的显示" << "    x = " << x << endl;   //该行测试代码是为了与下面this指针调用类中数据形成对比，遵循了局部优先原则

	cout << "this->x = " << this->x << endl;
	cout << "(*this).x = " << (*this).x << endl;
}

//主函数
void main()
{
	Test testObject(12);
	testObject.print();

	system("pause");
}
*/
//this指针的使用方法
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
		//下面程序，如果没有使用this->，形参赋给形参
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

//类实例
/*
#include<iostream>
#include<cmath>

using namespace std;

class Date
{
private:

	int year, month, day;

	//一些只在类内部使用，不公开的函数，我们为了安全起见将其设为私有的函数
	void IncDay();                            //日期增加一天函数
	int DayCalc();                            //计算指定日期距离基准日期的天数，基准日期为1900-1-1

public:

	Date(int y = 1900, int m = 1, int d = 1);  //构造函数
	void SetDate(int yy, int mm, int dd);      //日期设置
	bool IsLeapYear();                         //判断是否闰年
	void print_ymd();                          //按年月日输出
	void print_mdy();                          //按月日年输出

	//扩展
	void AddDay(int adddays);                   //日期增加任意天数
	bool IsEndofMonth();                      //判断是否是月末

	int Daysof2Date(Date ymd);               //计算两个指定日期之间间隔的天数
};

//类外定义函数
Date::Date(int y, int m, int d)
{
	SetDate(y, m, d);
}

void Date::SetDate(int yy, int mm, int dd)
{
	//如果输入的日期不合理，将使用默认值代替，年份默认值为1900，月份默认值为1，天数的默认值为1

	year = (yy >= 1900 && yy <= 2100) ? yy : 1900;  //年份有效性判断
	month = (mm >= 1 && mm <= 12) ? mm : 1;         //月份有效性判断

	switch(month)  //天数的有效性判断
	{
		case 4:     //4，6，9，11月每月只有30天，
		case 6:
		case 9:
		case 11:    day = (dd >= 1 && dd <= 30) ? dd : 1; break;

		case 2:   //2月天数判断
			if (IsLeapYear())   //判断是否是闰年，闰年2月有29天，非闰年2月有28天
				day = (dd >= 1 && dd <= 29) ? dd : 1;
			else
				day = (dd >= 1 && dd <= 28) ? dd : 1;
			break;

		default :   //大月天数判断
			day = (dd >= 1 && dd <= 31) ? dd : 1;

	}
}

bool Date::IsLeapYear()
{
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
		return true;    //闰年
	else
		return false;   //非闰年
}

void Date::print_ymd()
{
	cout << year << '-' << month << '-' << day << endl;
}

void Date::print_mdy()
{

	char* monthName[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	//欧美国家输出日期格式是：月份的英文表示 天数，年份。
	cout << monthName[month-1] << ' ' << day << ',' << year << endl;
}
//日期增加一天
void Date::IncDay()
{
	if (IsEndofMonth())  //判断是否是月末，如果是月末，月份，年份需要联动更新
	{
		if (month == 12)   //如果是12月，年份，月份需要联动更新
		{
			day = 1;
			month = 1;
			year++;
		}
		else               //非12月，月份需要联动更新
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
	int yy = year - 1900;    //当前日期距离基准年份之间的差值

	days = yy * 365;       //不计闰年的天数

	if (yy)
		days += (yy - 1) / 4;     //每逢闰年闰年增加一天

	switch (month)             //当前日期已过去月份的天数
	{//switch 选择判断，如果不在case n：的代码段中加入break关键字，程序会依次往下运行
	case 12: days = days + 30;   //因为11月为30天，如果当前日期为12月，那表明该年已经过去了11个月，应将这过去月份的总天数加上
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
	days = days + day;    //将指定日期对应的天数，归入总天数计算中
	return days;
}
//日期增加任意天数
void Date::AddDay(int adddays)
{
	for (int i = 0; i <= adddays; i++)
		IncDay();
}
//判断是否是月末
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
	days = abs(DayCalc() - ymd.DayCalc());   //使用abs函数计算绝对值
	return days;
}
//主函数
void main()
{
#if 0
	Date date1;
	date1.SetDate(2015, 5, 1);
	cout << "the current date is: " << endl;
	date1.print_mdy();
	date1.print_ymd();

	//使用闰年测试2月天数
	date1.SetDate(2020, 2, 29);
	cout << "the current date is: " << endl;
	date1.print_ymd();
	date1.print_mdy();
#endif // 0

	Date date1;

	date1.SetDate(2013, 1, 27);
	cout << "the current date is : " << endl;

	cout << "按照年-月-日格式输出：";
	date1.print_ymd();

	cout << "按照月 日,年格式输出：";
	date1.print_mdy();

	date1.AddDay(100);
	cout << "After 100 days, the date is : ";
	date1.print_ymd();

	cout << "And befor " << date1.Daysof2Date(Date(2008, 8, 24)) << " days, the BeiJing Olympic Game had been over." << endl;    //Daysof2Date函数中使用了一个临时对象，没有声明直接使用了

	system("pause");
}

*/

//类：继承
/*
#define _CRT_SECURE_NO_WARNINGS
#pragma comment (lib, "winmm.lib")  //是为了在调用mciSendStringA函数时会提示无法解析外部函数，该语句链接winmm.lib
#include<iostream>
#include<windows.h>
#include<mmsystem.h>    //媒体控制的头文件

using namespace std;

//定义两个全局字符指针数组，存取所需的单词
//num1中为1到19，空出了0，所以可以直接用num1[n]调用，得到n对应的单词
static char* num1[] =
{
	"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", "thirteen ",
	"fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "
};

//num10中为20-90，空出了0和1，所以可以直接用num10[n/10]调用，得到n对应单词
static char* num10[] =
{
	"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "
};

//人类
class Person
{

private:

	char* name;     //人名
	char sex;       //性别
	char pid[19];    //身份证号码
	int weight;      //体重
	int high;        //身高

public:

	Person();   //无参构造函数
	Person(char* n, char s, char* p, int w, int h);   //有参构造函数

	void change_data(char* n, char s, char* p, int w, int h);    //修改数据
	void walking(int k, int v);                                 //以v速度行走k步
	void hearing(char* sentence);                               //将字符串小写变大写，大写变小写输出
	void speek(int n);                                         //说出整数num的英文句子
	void writing();                                            //在屏幕上画出汉字“王”
	void print();                                              //输出人的属性值
	void out(int a);                                           //翻译小于1000的整数

	~Person();                                                 //析构函数
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

	if (name != NULL) name = new char[strlen(n) + 1];    //申请一处空间来存放输入姓名
	strcpy(name, n);

	sex = s;
	strcpy(pid, p);
	weight = w;
	high = h;
}

void Person::change_data(char* n, char s, char* p, int w, int h)
{
	delete[] name;   //先将原有的存储姓名的空间释放掉
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	sex = s;
	strcpy(pid, p);
	weight = w;
	high = h;
}

void Person::walking(int k, int v)
{
	cout << "\n" << name << "水平行走" << k << "步" << endl;
	for (int i = 0; i < k; i++)
	{
		cout << ' ' << "o_o";
		Sleep(1000 / v);               //Sleep函数的参数是以毫秒为单位的，其属于windows头文件
		cout << "\b\b\b";
	}
}

void Person::hearing(char* sentence)
{
	cout << endl << sentence << endl;            //显示输入的字符串
	char* p = new char[strlen(sentence) + 1];    //动态申请一处空间来存储输入的字符串
	strcpy(p, sentence);
	char* pp = p;             //将字符串的首地址转存在另一个指针内，方便修改后读取字符串
	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
			*p = 'A' + (*p - 'a' + 0);           //小写变大写
		else if (*p >= 'A' && *p <= 'z')
			*p = 'a' + (*p - 'A');              //大写变小写

		p++;                                    //将指针向后移动一位，指向字符串中的下一个字符
	}

	cout << pp << endl;
	delete[] pp;                 //释放申请的字符数组空间，之所以不是释放p指针是因为，p在处理过程中已经变换了地址，其并不是指向申请空间的首地址
}

void Person::speek(int n)
{
	if (n > 1999999999)
		cout << "dev c++平台无法处理大于1999999999位的数字" << endl;
	else
	{
		//三位三位取走，存入abcd四个变量中
		int a = n / 1000000000, b = (n % 1000000000) / 1000000, c = (n % 1000000) / 1000, d = n % 1000;
		//不等于0时，输出并加上millon或thousand
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
			//根据英文语法规则，最后两位前一定有and
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
	//若百位数不为0，输出百位数加hundred，若此时十位个位均为0，不加and
	if (a / 100 != 0)
	{
		cout << num1[a / 100] << "hundred ";
		if (b != 0)
			cout << " and ";
	}
	//当后两位在20以内，直接调用num1[n],输出
	if (b < 20)
	{
		cout << num1[b];
	}
	//当b大于20时
	else
	{
		//先调用num10,输出十位数
		cout << num10[b / 10];
		//个位不为0时应输出个位数
		if (b % 10 != 0)
			cout << "\b-" << num1[b % 10];
	}
}

Person::~Person()
{
	delete[] name;   //将申请的存储姓名的空间释放
}

#if 0
//主函数
void main()
{
	//创建对象
	Person Jack("James Chen", 'M', "150102199308231115", 125, 175);
	Jack.print();                   //输出人的属性
	Jack.walking(20, 4);            //行走20步，1/4秒走一步
	Jack.hearing("Hi! You are simple!");    //听英文句子
	Jack.speek(1006);                       //说出整数1006的英文句子
	cout << endl;
	Jack.writing();                         //书写汉字“王”

	system("pause");
}
#endif // 0

//使用继承的方式构建歌星类
class sing_star : public Person
{

private:

	float salary;    //薪水

public:

	sing_star();      //无参构造函数
	sing_star(char* n, char s, char* p, int w, int h, float s1);    //有参类构造函数
	void change_data(char* n, char s, char* p, int w, int h, float s1);  //修改数据
	void playing(char* ps);    //演唱歌曲
	void print();               //输出歌星属性值

};
//类外编写无参构造函数
sing_star::sing_star():Person()      //歌星类继承自人类，同样在歌星类的构造函数中继承自人类的构造函数，在拓展歌星类新添加的成员的初始赋值
{
	salary = 0.0;
}
//类外编写有参构造函数
sing_star::sing_star(char* n, char s, char* p, int w, int h, float s1)
{
	Person::change_data(n, s, p, w, h); //在该处并没有使用人类的有参构造函数，而是使用的人类的更改函数
	salary = s1;
}
//类外编写修改函数，调用父类的修改函数，再其基础上进行扩展
void sing_star::change_data(char* n, char s, char* p, int w, int h, float s1)
{
	Person::change_data(n, s, p, w, h);
	salary = s1;
}
//类外编写播放歌曲函数
void sing_star::playing(char* ps)  //ps指针指向的是歌曲存放的地址
{
	char str[100] = "play ";    //play后有空格
	strcat(str, ps);            //将play 于歌曲存放路径连接，构成音乐播放函数的参数
	cout << str;                //显示参数
	mciSendStringA(str, NULL, 0, NULL);   //调用播放歌曲函数播放音乐

	char a;
	cin >> a;
}
//类外定义输出函数
void sing_star::print()
{
	Person::print();
	cout << salary << endl;
}
//主函数
void main()
{
	//歌星类测试
	sing_star Jack("James Chen", 'M', "150102199308231115", 125, 175, 10000);
	Jack.print();                   //输出人的属性
	Jack.walking(20, 4);            //行走20步，1/4秒走一步
	Jack.hearing("Hi! You are simple!");    //听英文句子
	Jack.speek(1006);                       //说出整数1006的英文句子
	cout << endl;
	Jack.writing();                         //书写汉字“王”
	Jack.playing("C:\\ceshiyinyue.mp3");


	system("pause");
}
*/

//类：继承，日期类，时间类-》人类（具有出生日期和出生时间）
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>

using namespace std;


//定义两个全局字符指针数组，存取所需的单词
//num1中为1到19，空出了0，所以可以直接用num1[n]调用，得到n对应的单词
static char* num1[] =
{
	"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", "thirteen ",
	"fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "
};

//num10中为20-90，空出了0和1，所以可以直接用num10[n/10]调用，得到n对应单词
static char* num10[] =
{
	"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety "
};



//日期类
class Date
{

protected:   //保护成员，外界部分区域能够访问该成员，例如：b类继承自a类，那么在b类中就可以调用a类中的保护成员。

	int year;
	int month;
	int day;

public:

	Date() { year = 1900, month = 1, day = 1; }          //无参构造函数
	Date(int yy, int mm, int dd) { init(yy, mm, dd); }   //调用初始化函数来搭建有参构造函数

	void init(int, int, int);                            //声明初始化函数
	void print_ymd();
	void print_mdy();

	bool IsLeapYear();                                  //判断是否是闰年

};


void Date::init(int yy, int mm, int dd)
{
	//如果输入的日期不合理，将使用默认值代替，年份默认值为1900，月份默认值为1，天数的默认值为1

	year = (yy >= 1900 && yy <= 2100) ? yy : 1900;  //年份有效性判断
	month = (mm >= 1 && mm <= 12) ? mm : 1;         //月份有效性判断

	switch (month)  //天数的有效性判断
	{
	case 4:     //4，6，9，11月每月只有30天，
	case 6:
	case 9:
	case 11:    day = (dd >= 1 && dd <= 30) ? dd : 1; break;

	case 2:   //2月天数判断
		if (IsLeapYear())   //判断是否是闰年，闰年2月有29天，非闰年2月有28天
			day = (dd >= 1 && dd <= 29) ? dd : 1;
		else
			day = (dd >= 1 && dd <= 28) ? dd : 1;
		break;

	default:   //大月天数判断
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
	//欧美国家输出日期格式是：月份的英文表示 天数，年份。
	cout << monthName[month - 1] << ' ' << day << ',' << year;
}

bool Date::IsLeapYear()
{
	if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
		return true;    //闰年
	else
		return false;   //非闰年
}


//时间类
class Time
{

private:

	bool ceshi;   //在基类种定义一个私有的成员数据，观察其在派生类种是否可以直接访问

protected:

	int hour;
	int minute;
	int second;

public:

	Time() { hour = minute = second = 0; }           //无参构造函数
	Time(int h, int m, int s) { init(h, m, s); }      //有参构造函数

	void init(int, int, int);
	void print_time() { cout << hour << ':' << minute << ':' << second << endl; }
};

void Time::init(int h, int m, int s)
{
	hour = h >= 0 && h <= 24 ? h : 0;         //在赋值之前先进行有效性检验
	minute = m >= 0 && m <= 60 ? m : 0;
	second = s >= 0 && m <= 60 ? m : 0;
}


//派生类：人类
class Person : public Date, public Time   //人类继承自日期类和时间类这样就可以包含了基类的出身日期和出生时间
{

private:

	char* name;      //姓名
	char sex;        //性别
	char pid[19];    //身份证号
	int weight;      //体重
	int high;        //身高

	//因为我们是使用继承的方式定义的人类，故其成员还包括日期类和时间类的成员

public:

	Person();                                                                 //无参构造函数
	Person(char* n, char s, char* p, int w, int hh, int hr, int mr, int sd);   //有参构造函数，在有参调用函数中直接使用改变数据函数，这样的方式可以减少代码量

	//该函数的声明中并没有给出日期的形参，是因为身份证号中就包括了人的出生日期
	void change_data(char* n, char s, char* p, int w, int hh, int hr, int mr, int sd);
	void walking(int k, int v);
	void hearing(char* sentence);

	void out(int a);  //用于翻译数字
	void speek(int n);
	void writing();
	void ShowMe();
	~Person();                 //定义一个析构函数，释放name动态申请的空间

};

Person::Person()
{
	name = new char[strlen("XXX") + 1];
	strcpy(name, "XXX");

	sex = 'X';

	strcpy(pid, "XXXXXXXXXXXXXXXXXX");

	weight = high = 0;

	//ceshi = true;  //如果在基类种将成员数据归入私有，那么在派生类种将不能直接访问该成员数据
	//以下成员数据是从基类中继承过来的
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

	//根据身份证号码获取人的出生年月日
	char temp[5];
	strncpy(temp, p + 6, 4);      //将指向身份证信息指针向后移动6位，在相应的复制6位后面的4位，即出生的年份
	year = atoi(temp);            //atoi将字符串型转换为整型

	strncpy(temp, p + 10, 2);     //同理提取出生的月份
	temp[2] = '\0';               //因为数字格式的月份最多占两位，故在第三个位置添加了字符串结束符，下标0对应第一个位置，故而下标2对应第三个位置
	month = atoi(temp);

	strncpy(temp, p + 12, 2);     //同理提取出生的日期
	temp[2] = '\0';
	day = atoi(temp);

	hour = hr;
	minute = mr;
	second = sd;
}

void Person::walking(int k, int v)
{
	cout << "\n" << name << "水平行走" << k << "步" << endl;
	for (int i = 0; i < k; i++)
	{
		cout << ' ' << "o_o";
		Sleep(1000 / v);               //Sleep函数的参数是以毫秒为单位的，其属于windows头文件
		cout << "\b\b\b";
	}
}

void Person::hearing(char* sentence)
{
	cout << endl << sentence << endl;            //显示输入的字符串
	char* p = new char[strlen(sentence) + 1];    //动态申请一处空间来存储输入的字符串
	strcpy(p, sentence);
	char* pp = p;             //将字符串的首地址转存在另一个指针内，方便修改后读取字符串
	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
			*p = 'A' + (*p - 'a' + 0);           //小写变大写
		else if (*p >= 'A' && *p <= 'z')
			*p = 'a' + (*p - 'A');              //大写变小写

		p++;                                    //将指针向后移动一位，指向字符串中的下一个字符
	}

	cout << pp << endl;
	delete[] pp;                 //释放申请的字符数组空间，之所以不是释放p指针是因为，p在处理过程中已经变换了地址，其并不是指向申请空间的首地址

}

void Person::speek(int n)
{
	if (n > 1999999999)
		cout << "dev c++平台无法处理大于1999999999位的数字" << endl;
	else
	{
		//三位三位取走，存入abcd四个变量中
		int a = n / 1000000000, b = (n % 1000000000) / 1000000, c = (n % 1000000) / 1000, d = n % 1000;
		//不等于0时，输出并加上millon或thousand
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
			//根据英文语法规则，最后两位前一定有and
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
	cout << "姓名：" << name;
	cout << '\t' << "性别：" << sex << endl;
	cout << "身份证号：" << pid << endl;
	cout << "体重：" << weight/2 << "kg";
	cout << '\t' << "身高：" << high << "cm" << endl;
	cout << "出生日期：";
	print_ymd();
	cout << "出生时间：";
	print_time();
}

void Person::out(int a)
{
	int b = a % 100;
	//若百位数不为0，输出百位数加hundred，若此时十位个位均为0，不加and
	if (a / 100 != 0)
	{
		cout << num1[a / 100] << "hundred ";
		if (b != 0)
			cout << " and ";
	}
	//当后两位在20以内，直接调用num1[n],输出
	if (b < 20)
	{
		cout << num1[b];
	}
	//当b大于20时
	else
	{
		//先调用num10,输出十位数
		cout << num10[b / 10];
		//个位不为0时应输出个位数
		if (b % 10 != 0)
			cout << "\b-" << num1[b % 10];
	}
}

Person::~Person()
{
	delete[] name;   //释放name动态申请的空间
}


//主函数
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

//类：继承，普通手机类-》智能手机类
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>

using namespace std;

class mobile
{

private:

	char mynumber[12];       //机主的电话号码
	char m_type[40];         //手机型号
	float price;             //手机价格

public:

	mobile()           //无参构造函数
	{
		init("00000000000", "Non_type", 0);
	}

	void init(char* number, char* pt, float pri);    //初始化

	void dial();                                     //拨打电话

	void answer(char othernumber[]);                 //接听电话

	void hangup();                                   //挂断电话

	void show();                                     //显示普通手机信息

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

//派生智能手机类
class smartphone :public mobile //派生类，public是继承修饰符
{

private:

	char OS[20];      //交互式操作系统，派生类新增数据成员
	int memory;       //存储卡容量，派生类新增数据成员

public:

	smartphone()
	{
		init("00000000000", "Non_type", 0, "Non_OS", 0);
	}

	void init(char* number, char* pt, float pri, char* os, int mem);
	void send(char othernumber[], char message[]);                        //发送短信
	void showmemory();                                                   //显示内存大小
	void show();                                                         //显示智能手机信息
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
//测试主函数
void main()
{
	mobile m;              //声明手机对象
	smartphone m1;         //声明智能手机对象

	m.init("11111111111", "motorola", 3000);                //调用基类init
	m.dial();
	m.answer("222222222222");
	m.hangup();
	m.show();

	//调用派生类的init
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

//类：继承，私有继承方式，保护继承方式
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

//基类：人类定义
class Person
{

protected:
//private:

	char* Name;
	int Age;
	char Sex;



public:

	void Register(char* name, int age, char sex)   //设置数据成员
	{
		Name = new char[strlen(name) + 1];
		strcpy(Name, name);
		Age = age;
		Sex = (sex == 'm' ? 'm' : 'f');           //应为性别只有两个选项，所以添加了一个关于性别的判断
	}

	void ShowMe()
	{
		cout << Name << "\t" << Sex << "\t" << Age << "\t";
	}

	~Person()
	{
		delete[] Name;
		cout << "Name被释放";
	}
};
//派生类：雇员类定义
class Employee :private Person
{
	char* Dept;         //工作部门
	float Salary;          //月薪

public:

	Employee();         //无参构造函数
	void EmployeeRegidter(char* name, int age, char sex, char* dept, float salary);    //设置数据成员
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
	//cout << Name << '\t' << Sex << '\t' << Age << '\t';   //将protected修改为private，会发生什么呢？
	ShowMe();   //使用私有继承方式，基类中的私有成员无法在派生类中直接调用，但派生类可以通过基类中的公有成员函数去调用基类中的私有成员，前提是两者有关系


	cout << Dept << '\t' << Salary << endl;
}

#if 0

//主函数，测试私有继承
void main()
{

	{
		Employee emp;

		emp.EmployeeRegidter("王健", 40, 'f', "图书馆", 2000);

		emp.ShowEmp();

		//emp.ShowMe();   //当将继承方式修改为私有继承时，基类中的公有成员会成为派生类的私有成员，派生类使用者无法直接调用访问私有成员
	}



	system("pause");
}
#endif // 0

//保护继承
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

//主函数，测试保护继承
void main()
{
	Student stu;
	stu.Register("测绘C2", 137312, "王健", 18, 'm');
	stu.ShowStu();
	//stu.ShowMe();          //错误，对象不能访问保护成员，使用保护继承方式，基类中的公有成员和保护成员，都会成为派生类中的保护成员

	system("pause");
}
*/

//类：继承，派生类的构造函数
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

//基类
class Person
{

private:

	char Name[10];
	int Age;

public:

	Person(char* name, int age)   //构造函数
	{
		strcpy(Name, name);
		Age = age;
		cout << "constrcutor of person" << Name << endl;
	}

	void Show_Person()
	{
		cout << "姓名： " << Name << '\t' << "年龄： " << Age;
	}

	~Person() { cout << "deconstrutor of person" << Name << endl; }   //析构函数

};

//派生类
class Employee :public Person
{

private:

	char Dept[20];
	Person Leader;   //在派生类中内嵌了一个对象

public:

	//派生类的构造函数
	Employee(char* name, int age, char* dept, char* name1, int age1) :Person(name, age), Leader(name1, age1)
	{
		strcpy(Dept, dept);
		cout << "constructor of Employee" << endl;
	}

	void Show_Employee()
	{
		Show_Person();
		cout << '\t' << "部门： " << Dept << endl;
		Leader.Show_Person();
		cout << endl;
	}

};

//测试
void main()
{
	{//添加一对大括号，增加了一个作用域，方便析构函数的显示
		Employee emp("张弓长", 40, "人事处", "李木子", 36);
		emp.Show_Employee();
	}

	system("pause");
}
*/

//类：派生类，点类->圆类->圆柱体类
/*
#include<iostream>

using namespace std;

//点类
class Point
{

private:

	double x, y;

public:

	Point(double = 0, double = 0);       //构造函数
	void SetPoint(double, double);       //设置坐标
	int GetX() { return x; }       //取x坐标
	int GetY() { return y; }       //取y坐标
	void Print();                  //输出点的坐标
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

//派生类：圆类
class Circle :public Point
{

private:

	double radius;

public:

	Circle(double x = 0, double y = 0, double r = 0.0);       //构造函数
	void SetRadius(double);                                   //设置半径
	double GetRadius() { return radius; }                     //取半径
	double Area() { return 3.1415926 * radius * radius; }  //计算面积
	void Print();                                               //输出圆心坐标和半径

};

Circle::Circle(double a, double b, double r):Point(a,b)   //构造函数，派生类继承自基类，故在派生类的构造函数中引用基类的构造函数为基类中的数据成员赋值
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

//从派生类再派生类：圆柱体类
class Cylinder:public Circle
{

private:

	double high;

public:

	Cylinder(double x, double y, double r, double h) :Circle(x, y, h) { high = h; }

	void Set_data(double x, double y, double r, double h);    //修改数据

	double Area();                                          //计算表面积

	double Volume();                                        //计算体积

	void Print();                                           //输出圆心坐标和半径
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
	cout << "高为：" << high;
}

//测试主函数
void main()
{
	cout << "测试点类" << endl;
	Point p(30, 50);
	p.Print();
	cout << endl;
	system("pause");

	cout << "测试圆类" << endl;
	Circle c(120, 80, 10);
	c.Print();
	cout << "\n圆面积：" << c.Area() << endl;
	system("pause");

	cout << "测试圆柱体类" << endl;
	Cylinder cy(240, 160, 10, 10);
	cout << "圆柱体的中心点： ";
	cy.Point::Print();                       //在派生类中通过基类调用基类的成员函数
	cout << "\n圆柱体的表面积： " << cy.Area();
	cout << "\n圆柱体的体积：" << cy.Volume();
	system("pause");
}
*/

//类：派生类，U盘->MP3
/*
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<Windows.h>
#pragma comment (lib, "winmm.lib")  //是为了在调用mciSendStringA函数时会提示无法解析外部函数，该语句链接winmm.lib

using namespace std;

//U盘类
class UDISK
{

private:

	char* crow[100];     //按行存储信息的指针数组crow,一个字符指针对应一行
	int nrow;             //存储行数

public:

	UDISK(void) { nrow = 0; }    //构造函数
	void read(void);             //读信息
	void write(char* pstr);      //写信息
	~UDISK() { cout << "撤销U盘对象" << endl; }

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

//MP3类
class MP3 :public UDISK
{

public:

	MP3() :UDISK() {};
	void play(char* pstr);
	~MP3() { cout << "撤销MP3对象" << endl; }

};
void MP3::play(char* pstr)
{
	char str[100] = "play ";   //注意在play后有一个空格
	strcat(str, pstr);
	cout << "音乐的存储路径：";
	mciSendStringA(str, NULL, 0, NULL);
}

//测试代码
void main()
{
	UDISK U1;
	cout << "--模拟U盘写--" << endl;
	U1.write("劝学");
	U1.write("三更灯火五更鸡，");
	U1.write("正是男儿读书时。");
	U1.write("黑发不知勤学早，");
	U1.write("白首方悔读书迟。");
	cout << "--模拟U盘读--" << endl;
	U1.read();

	MP3 M1;
	cout << "--模拟MP3播放--" << endl;
	//MP3文件与可执行文件放在同一路径中
	M1.play("c:\\ceshiyinyue.mp3");

	char a;
	cin >> a;
	system("pause");
}
*/

//类：继承，学生->本科生->硕士生->博士生
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//学生类
class Student
{

private:

	int stdno;   //学号
	char* name;  //姓名
	int age;     //年龄
	char* classname;  //班级名称
	char* schoolname;  //学校名称

public:

	Student();     //构造函数

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

	void show();   //显示函数

	~Student();    //析构函数
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

//派生类：本科生类
class CollegeStudent : public Student
{

private:

	char* classteacher;     //辅导员

public:

	//构造函数
	CollegeStudent(int stdno, char name[], int age, char classname[], char schoolname[], char classteacher[]):Student(stdno, name, age, classname, schoolname)
	{
		this->classteacher = new char[strlen(classteacher) + 1];
		strcpy(this->classteacher, classteacher);
	}

	//显示函数
	void show()
	{
		Student::show();
		cout << classteacher << endl;
	}

	//析构函数
	~CollegeStudent()
	{
		delete[] classteacher;
	}
};

//派生类：硕士生类
class GraduateStudent :public CollegeStudent
{

private:

	char* tutor;                 //导师
	char* projectname;           //课题

public:

	//构造函数
	GraduateStudent(int stdno, char name[], int age, char classname[], char schoolname[], char classteacher[], char tutor[], char projectname[]) :CollegeStudent(stdno, name, age, classname, schoolname, classteacher)
	{
		this->tutor = new char[strlen(tutor) + 1];
		strcpy(this->tutor, tutor);

		this->projectname = new char[strlen(projectname) + 1];
		strcpy(this->projectname, projectname);
	}

	//显示函数
	void show()
	{
		CollegeStudent::show();
		cout << tutor << "\t";
		cout << projectname << endl;
	}

	//析构函数
	~GraduateStudent()
	{
		delete[] tutor;
		delete[] projectname;
	}
};

//派生类：博士生
class DoctorStudent :public GraduateStudent
{
	
private:

	char* researchname;     //研究项目

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

//测试主函数
void main()
{
	int stdno;              //存储学号
	char name[20];          //存储姓名
	int age;                //存储年龄
	char classname[20];     //存储班级
	char schoolname[20];    //存储学校名称

	cout << "input the information of student: " << endl;
	cout << "姓名："; cin >> name;
	cout << "学号："; cin >> stdno;
	cout << "年龄："; cin >> age;
	cout << "班级名称： "; cin >> classname;
	cout << "学校名称： "; cin >> schoolname;

	Student student1(stdno, name, age, classname, schoolname);
	cout << endl << "the information of student is: " << endl;
	student1.show();

	char classteacher[20];   //存储辅导员姓名

	cout << "input the information of collegestudent: " << endl;
	cout << "辅导员姓名："; cin >> classteacher;
	CollegeStudent student2(stdno, name, age, classname, schoolname, classteacher);
	cout << "the information of collegestudent is: " << endl;
	student2.show();

	char tutor[20];         //存储导师姓名
	char projectname[100];   //存储项目名称

	cout << "input the information of graduatestudent: " << endl;
	cout << "导师姓名："; cin >> tutor;
	cout << "项目名称："; cin >> projectname;
	GraduateStudent student3(stdno, name, age, classname, schoolname, classteacher, tutor, projectname);
	student3.show();

	char researchname[50];
	cout << "input the inforname of doctorstudent: " << endl;
	cout << "研究名称： "; cin >> researchname;
	DoctorStudent student4(stdno, name, age, classname, schoolname, classteacher, tutor, projectname, researchname);
	student4.show();

	system("pause");
}