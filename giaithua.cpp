#include <iostream>
using namespace std;
// tính giai thừa  
long giaithua(int n)
{
	long k = 1;
	for (int i=2; i <= n; i++)
	{
		k = k * i;
	}
	return k;
}
int main()
{
	int n;
	cout << " nhap so bat ky";
	cin >> n;
	cout <<"giai thua cua "<<n<<" la:"<< giaithua(n);
	return 0;
}