#include <iostream>
using namespace std;
//với x0=1;x1=2
//xn=n*x0+(n-1)*x1+....+x(n-1)
int dayso(int n)
{
	int i, m = 0;
	if (n == 0) { return 1; }
	if (n == 1) { return 2; }
	for (i = 0; i < n; i++)
	{
		m = m + (n - i) * dayso(i);
	}
	return m;
}
int main()
{
	int n;
	cout << " nhap so bat ky";
	cin >> n;
	cout << dayso(n);
	return 0;
}
