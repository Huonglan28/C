#include <iostream>
using namespace std;
// Môn cấu trúc dữ liệu và giải thuật
//BT2-9
// cho mảng một chiều n phần tử. Hãy sắp xếp các số chẵn trong mảng theo thứ tự tăng,
//sắp xếp các số lẻ theo thứ tự giảm dần, các số 0 giữ nguyên vị trí 
int sochanle(int n)
{
	if (n != 0)
	{
		if (n % 2 == 1)
			return 1;
		else
			return 0;
	}
}
void taphopA(int n, int arr[])
{
	int temp, i, j, k;
	for (j = 0; j < n; ++j)
	{
		if (sochanle(arr[j]) == 0 )
		{
			for (k = j + 1; k < n; ++k)
			{
				if (sochanle(arr[k]) == 0 && arr[j] > arr[k])
				{
					temp = arr[j];
					arr[j] = arr[k];
					arr[k] = temp;
				}
			}
		}
		else
		{
			for (k = j + 1; k < n; ++k)
			{
				if (sochanle(arr[k]) == 1 && arr[j] < arr[k])
				{
					temp = arr[j];
					arr[j] = arr[k];
					arr[k] = temp;
				}
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