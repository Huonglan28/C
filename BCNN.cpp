#include<iostream>
using namespace std;
int BCNN(int a, int b)
{
	int i = 1;
	while ((a * i) % b != 0)
		i++;
	return a * i;
}