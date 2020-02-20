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





