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
//Câu hỏi 1: Cach 1 dung EOF khi chua biet so luong phan tu
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
{ // C1: dung EoF
// cap phat dong nhung chua biet chinh xac so luong phan tu
		Arr = new int[100];
	n = 0;
	// doc tung phan tu tu file va luu vao mang
	// cho den khi het file EOF
	while (!feof(file))
	{
		fscanf(file, "%d", &Arr[n]);
		n++;
	}
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