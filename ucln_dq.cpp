#include <iostream>
using namespace std;
//ước chung lớn nhất
int ucln(int a, int b) 
{
    if (b == 0) 
        return a;
    if (a % b == 0) 
        return b;
    return ucln(b, a % b);
}

int main() {
    int a, b;
    cout << "nhap hai so can tim ucln: ";
    cin >> a >> b;
    cout << ucln(a, b);
}