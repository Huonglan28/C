#include <iostream>
using namespace std;
//S=1+1/2+1/3+....+1/n
float S(int n)
{
	if (n ==1)
		return 1;
	else
		return S(n -1)+1.0/n;
}
int main()
{
	int n;
	cout << " nhap so bat ky";
	cin >> n;
	cout << S(n);
	return 0;
}
