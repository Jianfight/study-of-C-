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


