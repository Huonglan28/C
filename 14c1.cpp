#include <iostream>
using namespace std;
//S=1/(1.2)+1/(2.3)+1/(3.4)+.....1/(n*(n+1))
float S(int n)
{
	if (n==1)
		return 1.0/2;
	else
		return S(n-1)+(1.0/(n*(n+1)));
}
int main()
{
	int n;
	cout << " nhap so bat ky";
	cin >> n;
	cout << S(n);
	return 0;
}