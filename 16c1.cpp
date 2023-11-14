#include <iostream>
using namespace std;
//S=1+1.2+1.2.3+...+
int S(int n)
{
	if (n==1)
		return 1;
	else
	{
		int tich = 1;
		for (int i = 1; i < n; i++)
			tich = tich * i;
		return S(n - 1) + tich;
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