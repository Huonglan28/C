#include <iostream>
#define MAX 100
using namespace std;
// Môn cấu trúc dữ liệu và giải thuật
//BT2-5
//Cho ma trận hai chiều m dòng, n cột. Hãy sắp tăng dần các phần tử theo chiều 
// từ trái qua phải và từ trên xuông dưới
// hàm nhập mảng
void nhapMang(int mt[][MAX], int& m, int& n)
{
	cout << "Nhap so dong : ";
	cin >> m;
	cout << "Nhap so cot : ";
	cin >> n;

	// khởi tạo mảng ngẫu nhiên từ [0][0] đến [m-1][n-1].
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> mt[i][j];
		}
	}
}

// hàm xuất mảng
void xuatMang(int mt[][MAX], int m, int n)
{
	// xuất từng phần tử cho mảng
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mt[i][j] << "\t";
		}
		cout << endl;
	}
}
void HoanVi(float& a, float& b) 
{
	a = a + b; // Cho đại
	b = a - b; // 
	a = a - b; // lấy trên trừ dưới 
}
void SapXepDungMangPhu(int a[][MAX], int dong, int cot) 
{ // Bước 1: Đổ dữ liệu từ mảng 2 chiều qua mảng 1 chiều (mảng phụ) 
	float temp[MAX]; 
	int idx = 0; 
	for(int i = 0; i < dong; i++) 
	{ 
		for(int j = 0; j < cot; j++) 
		{ 
			temp[idx++] = a[i][j]; 
		} 
	} 
	// Bước 2: Sắp xếp mảng 1 chiều tăng dần 
	for (int i = 0; i < idx - 1; i++)
	{
		for (int j = i + 1; j < idx; j++)
		{
			if (temp[i] > temp[j])
			{
				HoanVi(temp[i], temp[j]);
			}
		}
	}
	// Bước 3: Đổ lại dữ liệu từ mảng 1 chiều sang mảng 2 chiều 
	idx = 0; // Reset lại chỉ số mảng phụ 
	for(int i = 0; i < dong; i++) 
	{ 
		for(int j = 0; j < cot; j++) 
		{ 
			a[i][j] = temp[idx++]; 
		} 
	} 
} 
int main() 
{ 
	int a[100][100]; 
	int dong, cot; 
	nhapMang(a, dong, cot); 
	xuatMang(a, dong, cot); 
	SapXepDungMangPhu(a, dong, cot); 
	printf("\nMang sau khi sap xep\n"); 
	xuatMang(a, dong, cot);  
	return 0;
}

	