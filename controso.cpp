#include<iostream>
using namespace std;
int main()
{
	int Arr[] = { 2,1,9,8,5,4 };
	int* p;
	p = &Arr[0];
	cout << *p << endl;
	p = p + 1;
	cout << *p << endl;
	p = &Arr[4];
	cout << *p << endl;
	*p = *p + *(p + 1) + *(p - 3);
	cout << *p << endl;
	return 0;

}