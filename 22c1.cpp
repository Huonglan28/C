#include <iostream>
using namespace std;
//căn hai (2 căn hai (2 căn hai (2 ....
float S(int n)
{
	if (n==1)
		return sqrt(2.0);
	else
		return sqrt(2+S(n-1));
}
int main()
{
	int n;
	cout << " nhap so bat ky";
	cin >> n;
	cout << S(n);
	return 0;
}
