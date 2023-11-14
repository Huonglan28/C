#include <iostream>
#include <math.h>
using namespace std;
// chuyển từ nhị phân thành thập phân VD: 1010 -> 10
int ThapPhan(long n)
{
    int sothapphan = 0, temp = 0, sodu;
    while (n != 0)
    {
        sodu = n % 10;
        n = n / 10;
        //Hàm pow có các tham số như sau: pow(kiểu dữ liệu a, kiểu dữ liệu n), 
        //với a là cơ số và n là lũy thừa bậc n(số mũ).
        sothapphan = sothapphan + sodu * pow(2, temp);
        temp++;
    }
    return sothapphan;
}

int main()
{
    long n;
    cout << "nhap vao so nhi phan can chuyen doi: ";
    cin >> n;
    cout << endl << "so thap phan cua " <<n<<" la:"<< ThapPhan(n);
    return 0;
}