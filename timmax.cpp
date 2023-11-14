#include <iostream>
using namespace std;
// Cấu trúc dữ liệu và giải thuật 
//BT2-10
// Cho mảng một chiều gồm n phần tử là các số nguyên.Tìm k giá trị lớn nhất
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
int timmax(int a[], int n)
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}
void nhapmang(int a[], int n)
{
	cout << "\n nhap gia tri tung phan tu: \n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
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
	cout << "gia tri lon nhat trong mang la:"<<timmax(a, n);
	return 0;
}