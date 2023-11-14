#include <iostream>
using namespace std;
// chuyển thập phân thành nhị phân dùng đệ quy
void NhiPhan(int n)
{
    if (n != 0)
    {
        NhiPhan(n / 2);
        cout << n % 2;
    }
}
int main()
{
    int n;
    cout << "nhap so can chuyen qua nhi phan: ";
    cin >> n;
    cout << "so nhi phan cua " << n << " la: ";
    NhiPhan(n);
    return 0;
}