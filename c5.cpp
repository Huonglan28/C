#include <iostream>
using namespace std;
int sodautien(int n)
{
	if (n < 10)
		return n;
	else
		return sodautien(n / 10);
}
int main()
{
	cout << sodautien(2345879);
	return 0;
}