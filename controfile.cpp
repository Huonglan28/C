#pragma warning(disable:4996)
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	FILE* fp;
	string c;
	fp = fopen("hello.txt","rt");
		if (fp == NULL)
		{
			cout << "Khong doc dc file";
				return 0;
		}
	while (1)
	{
		c = fgetc(fp);
		if (feof(fp))
		{
			break;
		}
		cout << c;
	}
	fclose(fp);
	return 0;
}