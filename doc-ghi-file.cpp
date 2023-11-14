#pragma warning(disable:4996)
#include <iostream>
#include <stdlib.h>
using namespace std;
void writeToFile(FILE* file)
{
	for (int i = 1; i <= 5; i++)
		fprintf(file, "This is an example line %d\n", i);

}
void readFromFile(FILE* file)
{
	char str[255];
	while (fgets(str, 255, file) != NULL)
	{
		cout << str;
	}
}
int main()
{
	const char* filePath = "D:\\my_document.txt";
	FILE* file;
	file = fopen(filePath, "w+t");
	if (!file) // file == NULL
		cout << "Can not open this file" << endl;
	else
		cout << "File is opened" << endl;

	writeToFile(file);
	fseek(file, 0, SEEK_SET); // dieu gi xay ra neu khong dung fseek tai day
	readFromFile(file);
	fclose(file);
	return 0;
}