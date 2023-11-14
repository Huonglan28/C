#include <iostream>
using namespace std;
int S(int n)
{
	if (n==1)
		return 1;
	else
	{
		int m = 0;
		for (int i = 1; i < n; i++)
			m += S(i);
		return n * m;
	}
}
int main()
{
	int n;
	cout << " nhap so bat ky";
	cin >> n;
	cout << S(n);
	return 0;
}
