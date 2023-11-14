#include <iostream>
#define maxn 100
// sắp xếp tăng dần đường chéo phụ của ma trận vuông
using namespace std;
void nhap(int a[][maxn], int& n)
{
	cout << "nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
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
int main()
{
	int a[maxn][maxn];
	int n;
	nhap(a, n);
	cout << endl;
	xuat(a, n);
	cout << endl;
	
	cout << "mang da sap xep la:" << endl;
	xuat(a, n);
	return 0;
}