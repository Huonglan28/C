#include<iostream>
using namespace std;

int dem(int a[], int i)
{
    if (i == (-1)) return 0;
    else
    {
        if (a[i] % 2 == 0) return 1 + dem(a, i - 1);
        else return dem(a, i - 1);
    }
}
void nhapmang(int a[], int n)
{
	cout << "\n nhap gia tri tung phan tu: \n";
	for (int i = 0; i < n; i++)
	{
		cout << "nhap phan tu thu " << i << " la: ";
		cin >> a[i];
	}
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
	cout << "so chan co trong mang la:" << dem(a, n);
	return 0;
}
