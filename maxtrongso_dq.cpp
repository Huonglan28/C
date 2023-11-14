#include <iostream>
using namespace std;
//số lớn nhất trong sô tự nhiên VD: 234 -> max = 4
int max(int n)
{
	if (n < 10)
		return n;
	else
	{
		if (n % 10 < max(n / 10))
			return max(n / 10);
		else
			return n % 10;
	}
		
}
int main()
{
	int n,sosanh;
	cout << " nhap so bat ky";
	cin >> n;
	cout<< max(n);
	return 0;
}
