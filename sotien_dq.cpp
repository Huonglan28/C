#include <iostream>
using namespace std;
//kiểm tra số tiến VD: 123 là số tiến
bool kiemtra(int n)
{
	if (n < 10)
		return true;
	else
	{
		if (n % 10 > (n / 10) % 10)
			return kiemtra(n / 10);
		else
			return false;
	}
}
int main()
{
	int n;
	cout << " nhap so bat ky";
	cin >> n;
	cout << kiemtra(n);
	return 0;
}