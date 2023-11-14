//Ví dụ : Mảng một chiều
//Tạo File input_1.txt có nội dung như sau
//
//Yêu cầu : viết chương trình đọc dữ liệu từ file và lưu trữ trong mảng A.
//Nhân các giá trị trong mảng A với 2 và sau đó ghi kết quả vào file output_1.txt
//File : input_1.txt
//5
//10 2 - 35 4 - 50
//
//File : output_1.txt
//5
//20 4 - 75 8 - 100
#pragma warning(disable:4996)
#include <iostream>
#include <stdlib.h>
using namespace std;
void writeToFile(FILE* file, int* Arr, int n)
{
	fprintf(file, "%d\n", n);
	for (int i = 0; i < n; i++)
		fprintf(file, "%d ", Arr[i]);

}
void readFromFile(FILE* file, int*& Arr, int& n)
{
	// doc dong dau tien trong file
	// luu so luong phan tu n
	fscanf(file, "%d", &n);
	Arr = new int[n]; // cap phat dong
	// doc tung phan tu tu file va luu vao mang
	for (int i = 0; i < n; i++)
		fscanf(file, "%d", &Arr[i]);

}
int KiemTraSoNguyenTo(int n)
{
	int i;
	if (n <= 1)
	{
		return 0;
	}

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
float tinhTBC(int A[], int n)
{
	int i, s = 0;
	float dem = 0;
	for (i = 0; i <= n; i++)
	{
		if (KiemTraSoNguyenTo(A[i]) == 1)
		{
			dem++;
			s += A[i];
		}
	}
	return s / dem;
}
int main()
{ // mo file de doc
	FILE* fi = fopen("D:\\input_1.txt", "rt");
	if (fi == NULL)
	{
		cout << "khong mo dc file";
		return 0;
	}
	//doc du lieu
	int n; int* A;
	readFromFile(fi, A, n);
	cout << tinhTBC(A, n);
	FILE* fo = fopen("D:\\output_1.txt", "wt"); 
	// ghi file
	writeToFile(fo,A, n);
	//dong file
	fclose(fi); fclose(fo);
	delete[] A;
	return 0;
}