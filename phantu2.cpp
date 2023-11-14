//Câu hỏi 1: Mảng 1chiều
//File input.txt có nội dung như sau
//1 2 3
//
//a) Đọc một mảng 1chiều từ tập tin input
//b) Ghi kết quả ra file output theo thứ tự
//ngược lại
//
//File output.txt có nội dung sau
//3 2 1
//Câu hỏi 1: Cách 2 – Đọc file để đếm số lượng phần tử sau đó lưu vào mảng
#pragma warning(disable:4996)
#include <iostream>
#include <stdlib.h>
using namespace std;
void writeToFile(FILE* file, int* Arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		fprintf(file, "%d ", Arr[n - i - 1]);
	}
}
void readFromFile(FILE* file, int*& Arr, int& n)
{
	int number;
	n = 0;
	// Dem so luong phan tu co trong file
	while (fscanf(file, "%d", &number) > 0)
	{

		n++;
	}
	Arr = new int[n]; // cap phat dong chinh xac so luong
	// con tro bay gio o cuoi file, do do
	// Quay tro lai dau file de doc du lieu vao mang A
	fseek(file, 0, SEEK_SET);
	// doc tung phan tu tu file va luu vao mang
	for (int i = 0; i < n; i++)
		fscanf(file, "%d", &Arr[i]);

}
int main()
{
	// mo file de doc
	FILE* fi = fopen("F:\\input_3.txt", "rt");
	if (fi == NULL)
	{
		cout << "khong mo dc file";
		return 0;
	}
	//doc du lieu
	int n;
	int* A;
	readFromFile(fi, A, n);
	// in mang ra man hinh
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	FILE* fo = fopen("F:\\output_3.txt", "w+t");
	writeToFile(fo, A, n);
	//dong file
	fclose(fi);
	fclose(fo);
	delete[] A;
	return 0;
}