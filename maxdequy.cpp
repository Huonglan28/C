#include <iostream>
using namespace std;
// tìm max trong mảng bằng đệ quy 
int max2So(int x, int y)
{
	return x > y ? x : y;
}

int timMAX_Dequy(int a[], int n)
{
	if (n == 1)
		return a[0];
	else
		return max2So(timMAX_Dequy(a, n - 1), a[n - 1]);

}
void nhapmang(int a[], int n)
{
	cout << "\n nhap gia tri tung phan tu: \n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
int main()
{
	int a[100];
	int n;
	cout << "nhap so phan tu trong mang: ";
	cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);
	cout << endl;
	cout << "gia tri lon nhat trong mang la:" << timMAX_Dequy(a, n);
	return 0;
}