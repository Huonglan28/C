#include <iostream>
using namespace std;
// tính giai thừa bằng đệ quy 
int giaithua(int n)
{
	if (n==1||n==0)
		return 1;
	else
		return n*giaithua(n-1);
}
int main()
{
	int n;
	cout << " nhap so bat ky";
	cin >> n;
	cout << giaithua(n);
	return 0;
}