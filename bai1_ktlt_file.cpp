//MSSV:3121560002
//Họ và tên: Ngô Thị Hương Lan 
//Lớp: Kỹ thuật lập trình thứ 3
#include<iostream>
using namespace std;
#include<fstream>
#pragma warning(disable:4996)
//Bài 1: Cho file văn bản input.txt, trong đó :
//Dòng đầu ghi số n(chính là tổng số lượng phần tử)
//Dòng tiếp theo chứa n số nguyên, mỗi số cách nhau ít nhất một khoảng trắng.
//Viết chương trình(Yêu cầu sử dụng con trỏ và cấp phát động)
//a) Đọc file input và lưu trữ bằng mảng một chiều.
//b) Tính trung bình cộng các số nguyên tố trong mảng.
//c) Xóa tất cả số nguyên tố ra khỏi mảng, ghi mảng sau khi xóa xuống file.
//d) Tìm số nguyên tố nhỏ nhất thỏa điều kiện lớn hơn mọi phần tử trong mảng.
//* Yêu cầu : kết quả ghi ra file output.txt.

//ham doc file
void docfile(ifstream& filein, int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		filein >> a[i];
	}
}
//hàm xuất mảng
void xuatmang(int a[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
//hàm kiểm tra số nguyên tố 
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
//hàm tính tổng trung bình cộng các số nguyên tố
float tinhTBC(int a[], int n)
{
	int i, s = 0;
	float dem = 0;
	for (i = 0; i <= n; i++)
	{
		if (KiemTraSoNguyenTo(a[i]) == 1)// nếu là số nguyên tố thì tính trung bình cộng
		{
			dem++;
			s += a[i];
		}
	}
	return s / dem; // lấy tổng chia cho số phần tử đếm được 
}
// hàm xóa giá trị và vị trí của phần tử cần trong mảng 
void Xoa1PhanTu(int a[], int& n, int ViTriXoa) 
{ 
	for (int i = ViTriXoa; i < n; i++) 
	{ 
		a[i] = a[i + 1]; 
	} 
	n--; 
}
// xóa các số nguyên tố có trong mảng 
void XoaCacSoNguyenTo(int a[], int& n) 
{ 
	for (int i = 0; i < n; i++) // duyệt các phần tử trong mảng 
	{ 
		if (KiemTraSoNguyenTo(a[i]) == 1) // nếu là số nguyên tố thì ta xóa số đó ra khỏi mảng 
		{ 
			Xoa1PhanTu(a, n, i); i--; 
		} 
	} 
}
// tìm giá trị lớn nhất trong mảng 
int lonnhat(int a[], int n)
{
	int i;
	int max = a[0];
	for (i = 1; i < n; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}
//số nguyên tố nhỏ nhất thỏa điều kiện lớn hơn mọi phần tử trong mảng
int SoNguyenToNhoNhat(int a[], int n)
{
	int max = lonnhat(a, n);
	int i = max + 1;
	for (i = max + 1; i > max; i++)
	{
		if (KiemTraSoNguyenTo(i) == 1)
			break;
	}
	return i;
}
int main()
{
	ifstream filein;//đôi tượng đọc file
	filein.open("D:\\input.txt", ios_base::in );
	int a[100];
	int n = 0;

	filein >> n;//đọc giá trị dòng đầu tiên
	docfile(filein, a, n);
	cout << "day so nguyen co trong file \n";
	xuatmang(a, n);

	ofstream fileout;//đối tượng ghi file
	fileout.open("D:\\output.txt", ios_base::out);
	float tbc=tinhTBC(a, n); //gán giá trị trung bình cộng vào biến tbc
	fileout << "a)"<<tbc << endl;//ghi giá trị trong output

	XoaCacSoNguyenTo(a, n);
	xuatmang(a, n);
	fileout << "b)";
	for (int i = 0; i < n; i++) // ghi từng phần tử trong mảng vào file
		fileout << a[i]<<' ';
	fileout << endl;

	int m=SoNguyenToNhoNhat(a, n);
	cout << m<< endl;
	fileout <<"c)"<< m;

	fileout.close();
	filein.close();
	system("pause");
	return 0;

}