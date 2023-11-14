#include <iostream>
using namespace std;
//tìm số đầu tiên VD: 123 -> số đầu tiên là số 1
int sodautien(int n)
{
	if (n < 10)
		return n;
	else
		return sodautien(n / 10) ;
}
int main()
{
	int n;
	cout << " nhap so bat ky";
	cin >> n;
	cout << sodautien(n);
	return 0;
}
