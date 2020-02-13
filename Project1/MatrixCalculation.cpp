#include<iostream>

//矩阵的乘法
using namespace std;
int matrixMultiplication()
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

//矩阵的转置
//根据输入的阶数，对矩阵进行转置
void transmat(double B[][10], int n)
{
	int i, j;
	double t;  //用于存储过程数据
	//进行转置处理
	for (i = 0; i < n - 1; i++)
	{
		for (j = i; j < n; j++)
		{
			t = B[i][j];
			B[i][j] = B[j][i];
			B[j][i] = t;
		}
	}

}
