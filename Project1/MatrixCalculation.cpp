#include<iostream>

//����ĳ˷�
using namespace std;
int matrixMultiplication()
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

//�����ת��
//��������Ľ������Ծ������ת��
void transmat(double B[][10], int n)
{
	int i, j;
	double t;  //���ڴ洢��������
	//����ת�ô���
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
