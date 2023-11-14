//MSSV:3121560002
//Họ và tên: Ngô Thị Hương Lan 
//Lớp: Kỹ thuật lập trình thứ 3
#include <iostream>
#include <string.h>
#include <stdio.h>
#include<conio.h>
#include<cstdio>
#pragma warning(disable:4996)
using namespace std;
//Bài 2:
//Viết chương trình nhập vào một chuỗi ký tự từ bàn phím. (Giả sử rằng mỗi từ trong chuỗi cách nhau một khoảng trắng.Không có khoảng trắng ở đầu và cuối chuỗi) và thực hiện các yêu cầu sau đây :
//a) Tách chuỗi thành các từ và đếm xem chuỗi có bao nhiêu từ
//b) Tìm từ ngắn nhất và dài nhất trong chuỗi.
//c) Đếm xem mỗi từ trong chuỗi có bao nhiêu ký tự.
//d) Đếm xem mỗi từ xuất hiện bao nhiêu lần

// nhập chuỗi và xuất chuỗi vừa nhập
void nhap(char*& s)
{
	s = new char[100];
	puts("Moi ban nhap chuoi");
	fgets(s,100,stdin);
	cout << "chuoi ban nhap la : " << s;
}
// đếm số từ có trong câu dựa vào khoản trắng sau mỗi từ
int demtu(char* s)
{
	int dem = 1;
	char* temp = strchr(s, ' ');
	while (temp != NULL)
	{
		dem++;
		temp = strchr(temp + 1, ' ');
	}
	return dem;
}
//b) Tìm từ ngắn nhất và dài nhất trong chuỗi.
void TuDaiNhat(char* s)
{
	char b[30];	
	char c[30];		
	int j = 0, maxlength = 0;
	for (int i = 0; i <= strlen(s); i++) {
		if (s[i] != 32 && s[i] != '\0') {
			b[j++] = s[i];
		}
		else {
			b[j] = '\0';
			if (strlen(b) > maxlength) {
				strcpy_s(c, b);		// b -> c
				maxlength = strlen(b);	// update maxLength
			}
			j = 0;
		}
	}
	cout<<c;
}
void TuNganNhat(char* s)
{
	char b[30];
	char c[30];
	int j = 0, minlength = s[1];
	for (int i = 0; i <= strlen(s); i++) {
		if (s[i] != 32 && s[i] != '\0') {
			b[j++] = s[i];
		}
		else {
			b[j] = '\0';
			if (strlen(b) < minlength) {
				strcpy_s(c, b);		// b -> c
				minlength = strlen(b);	// update minLength
			}
			j = 0;
		}
	}
	cout << c;
}
//c) Đếm xem mỗi từ trong chuỗi có bao nhiêu ký tự.
void demsokytu(char* s)
{
	char* temp = new char;
	strcpy(temp, s);
	int vtdau = 0;
	for (size_t i = 0; i < strlen(temp); i++)
	{
			if (temp[i] == ' ' || temp[i] == '\n')
			{
				cout << i - vtdau << endl;
				vtdau = i + 1;
			}
			cout << temp[i];
	}
}
//d) Đếm xem mỗi từ xuất hiện bao nhiêu lần
struct Node {
	char data[50];
	int counter;
};

void themHoacDem(char* word, struct Node* words, int* size) {
	int i;
	bool tonTai = false;
	for (i = 0; i < *size; i++) {
		if (strcmp(word, words[i].data) == 0) {
			words[i].counter++;
			tonTai = true;
			break;
		}
	}
	if (!tonTai) {
		strcpy(words[*size].data, word);
		words[*size].counter = 1;
		(*size)++;
	}
}

void tachVaDem(char* s, struct Node* words, int* size) {
	char* p;
	const char* delim = " \t\n,.?!;:";
	for (p = strtok(s, delim); p != NULL; p = strtok(NULL, delim)) {
		themHoacDem(p, words, size);
	}
}
void hienThi(struct Node* words, int size) {
	int i;
	for (i = 0; i < size; i++) {
		cout << words[i].data<<" :" << words[i].counter<<endl;
	}
}
//hàm main
int main()
{
	char* n;
	n = new char[256];
	nhap(n);
	//a)
	cout << "Cau co so luong tu la: ";
	cout << demtu(n)<<endl;
	//b)
	cout << "tu dai nhat la: ";
	TuDaiNhat(n);
	cout << endl;

	cout << "tu ngan nhat la: ";
	TuNganNhat(n);
	cout << endl;
	//c)
	cout << "Dem so ky tu cua tung tu trong cau"<<endl;
	demsokytu(n);
	cout << endl;
	//d)
	struct Node words[200];
	int size = 0;
	tachVaDem(n, words, &size);
	cout << "So lan xuat hien cua moi tu"<<endl;
	hienThi(words, size);
	return 0;
}