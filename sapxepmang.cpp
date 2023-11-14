#include<iostream>
using namespace std;
//sắp xếp tập hợp A
void taphopA(int n, int arr[])
{
	int temp, i, j, k;
	for (j = 0; j < n; ++j)
	{
		for (k = j + 1; k < n; ++k)
		{
			if (arr[j] > arr[k])
			{
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
		}
	}
	cout << "tap hop A la: ";
	for (i = 0; i < n; i++)
		cout << " " << arr[i];
}
// sắp xếp tập hợp B
void taphopB(int m, int number[])
{
	int temp, i, j, k;
	for (j = 0; j < m; ++j)
	{
		for (k = j + 1; k < m; ++k)
		{
			if (number[j] > number[k])
			{
				temp = number[j];
				number[j] = number[k];
				number[k] = temp;
			}
		}
	}
	cout << "tap hop B la: ";
	for (i = 0; i < m; i++)
		cout << " " << number[i];
}
// tìm giao của hai tập hợp A và B
// tìm hợp của hai tập hợp A và B 
int main()
{
	int i,n, m;
	int arr[100], number[100];


	cout << "nhap so phan tu trong tap hop A: ";
	cin >> n;
	cout << "\n nhap gia tri tung phan tu: \n";
	for (i = 0; i < n; i++)
		cin >> arr[i];
	taphopA(n, arr);


	cout << "\n nhap so phan tu trong tap hop B: ";
	cin >> m;
	cout << "\n nhap gia tri tung phan tu: \n";
	for (i = 0; i < m; i++)
		cin >> number[i];
	taphopB(m, number);
	return 0;
}
