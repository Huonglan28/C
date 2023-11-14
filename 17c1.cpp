#include <iostream>
using namespace std;
//S=x+x^2+x^3+x^4+....+x^n
int m(int x, int n)
{
	if (n == 1)
		return x;
	else
		return m(x, n - 1) * x;
}
int S(int n,int x)
{
	if (n ==1)
		return x;
	else
		return S(n-1,x)+ m(x,n);
}

int main()
{
	int n,x;
	cout << " nhap so mũ";
	cin >> n;
	cout << "nhap so can tinh";
	cin >> x;
	cout << S(n,x);
	return 0;
}