#include <iostream>
#define maxn 100
// sắp xếp tăng dần đường chéo phụ của ma trận vuông
using namespace std;
void nhap(int a[][maxn],int &n)
{
	cout << "nhap n: "; 
	cin >> n;
	for(int i = 0; i<n; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "A[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}

void xuat(int a[][maxn], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << a[i][j] << " ";
			cout << endl;
	}
}
void sapxepgiamtrenduongcheophu(int a[maxn][maxn],int m)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = i + 1; j < m; j++)
		{
			if (a[i][m - i - 1] > a[j][m - j - 1])
			{
				int temp = a[i][m - i - 1];
				a[i][m - i - 1] = a[j][m - j - 1];
				a[j][m - j - 1] = temp;
			}
		}
	}
}
int main()
{
	int a[maxn][maxn];
	int n;
	nhap(a, n);
	cout << endl;
	xuat(a, n);
	cout << endl;
	sapxepgiamtrenduongcheophu(a, n);
	cout << "mang da sap xep la:"<<endl;
	xuat(a, n);
	return 0;
}