#include <iostream>
#include <math.h>
using namespace std;
long NhiPhan(int n)
{
    long nhiphan = 0;
    int rem, temp = 1;

    while (n != 0)
    {
        rem = n % 2;
        n = n / 2;
        nhiphan = nhiphan + rem * temp;
        temp = temp * 10;
    }
    return nhiphan;
}

int main()
{
    int n;
    cout << "nhap so thap phan can chuyen doi: ";
    cin >> n;
    cout << "\nSo nhi phan cua "<<n<<" la:" << NhiPhan(n);
    return 0;
}