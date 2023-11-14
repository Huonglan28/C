#include <iostream>
using namespace std;
//đếm số lẻ trong số tự nhiên VD: 123 -> có 2 số lẻ
int sole(int n)
{
	if (n < 10)
	{
		if (n % 2 == 1)
			return 1;
		else
			return 0;
	}
	else
	{
		if (n % 2 == 1)
			return sole(n / 10) + 1;
		else
			return sole(n / 10);
	}
}
int main()
{
	int n;
	cout << " nhap so bat ky";
	cin >> n;
	cout << sole(n);
	return 0;
}