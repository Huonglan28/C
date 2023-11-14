#include <iostream>
using namespace std;
// Môn cấu trúc dữ liệu và giải thuật
//BT2-3 
// cho mảng một chiều n phần tử. Sắp xếp các số nguyên tố tăng dần, các số khác giữ nguyên giá trị và vị trí
int snt(int n)
{
	if (n < 2)
		return 0;
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
void taphopA(int n, int arr[])
{
	int temp, i, j, k;
	for (j = 0; j < n; ++j)
	{
		if(snt(arr[j])==1)
		for (k = j + 1; k < n; ++k)
		{
				if (snt(arr[k])==1 && arr[j] > arr[k])
				{
					temp = arr[j];
					arr[j] = arr[k];
					arr[k] = temp;
				}
		}
	}
	cout << "mang mot chieu A la: ";
	for (i = 0; i < n; i++)
		cout << " " << arr[i];
}

int main()
{
	int i, n;
	int arr[100];


	cout << "nhap so phan tu trong mang A: ";
	cin >> n;
	cout << "\n nhap gia tri tung phan tu: \n";
	for (i = 0; i < n; i++)
		cin >> arr[i];
	taphopA(n, arr);
	return 0;
}