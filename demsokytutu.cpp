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
void demsokytu(char* s)
{
	char* temp = new char;
	strcpy(temp, s);
	int vtdau = 0;
	for (size_t i = 0; i < strlen(temp); i++)
	{
		if (temp[i] == ' ')
		{
			cout << i - vtdau << endl;
			vtdau = i + 1;
		}
	}

	cout << strlen(s) - vtdau << endl;
}
int main()
{
	char* n;
	n = new char[256];
	nhap(n);
	demsokytu(n);
	return 0;
}