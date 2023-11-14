#include <iostream>
using namespace std;
//S=1^2+2^2+....+n^2
int S(int n)
{
	if (n==1)
		return 1;
	else
		return S(n-1)+n*n;
}
int main()
{
	int n;
	cout << " nhap so bat ky";
	cin >> n;
	cout << S(n);
	return 0;
}
