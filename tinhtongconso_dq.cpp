#include <iostream>
using namespace std;
//tổng các con số VD: 56 -> tổng bằng 5+6=11
int tong(int n)
{
	if (n < 10)
		return n;
	else
		return n%10+tong(n / 10);
}
int main()
{
	int n;
	cout << " nhap so bat ky";
	cin >> n;
cout << tong(n);
	return 0;
}