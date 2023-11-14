#include <iostream>
using namespace std;
//đếm chữ số VD: 45 -> có 2 chữ số 
int demchuso(int n)
{
	if (n < 10)
		return 1;
	else
		return demchuso(n / 10) + 1;
}
int main()
{
	int n;
	cout << " nhap so bat ky";
	cin >> n;
	cout << demchuso(n);
	return 0;
}
