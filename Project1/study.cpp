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



