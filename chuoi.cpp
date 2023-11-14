#include<iostream>
#include<stdio.h>
using namespace std;
#pragma warning(disable:4996)
int main()
{
	char* s = new char[255];
	strcpy(s, "data structure and algorithm");
	cout << strrchr(s,' ') + 1 << endl;
	cout << strtok(s," ") << endl;
	s[4] = '\0';
	cout << s << endl;
	cout << strrev(s) << endl;
	cout << s + 14 << endl;
	cout << strstr(s + 5, "and") << endl;
	return 0;
}