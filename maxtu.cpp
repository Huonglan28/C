#include <iostream>
#include <string.h>
#include <stdio.h>
#include<conio.h>
#include<cstdio>
#pragma warning(disable:4996)
using namespace std;
void nhap(char*& s)
{
	s = new char[100];
	puts("Moi ban nhap chuoi");
	fgets(s, 100, stdin);
	cout << "chuoi ban nhapla : " << s;
}
void maxtu(char* s)
{
	char* temp = strchr( s,' ');
	char* p = s;
	char* a = new char;
	strcat(s, " ");
	int max = 0;
	while (temp != NULL)
	{
		cout << temp - p << endl;
		if (temp - p > max)
		{
			max = temp - p;
			a = p;
		}
		p = temp + 1;
		temp = strchr(temp + 1, ' ');
	}
	a[max] = '\0';
	cout << "tu dai nhat trong chuoi la: " << a << "do dai la: " << max;
}
int main()
{
	char* n;
	n = new char[256];
	nhap(n);
	maxtu(n);
	return 0;
}
