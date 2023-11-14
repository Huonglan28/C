

#include <iostream>
        using namespace std;

        int tinhXn(int n) {
            int xn_1 = 1;
            int xn_2 = 1;
            int xn = 0;
            for (int i = 2; i <= n; i++) {
                xn = i + xn_1 + xn_2 +xn;
                xn_2 = xn_1;
                xn_1 = xn;
            }
            return xn_1;
        }

        int main() {
            int n;
            cout << "Nhap n: ";
            cin >> n;
            cout << "Xn = " << tinhXn(n);
            return 0;
        }
