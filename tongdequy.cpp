#include <iostream>

using namespace std;

int sumOfArray(int a[1000], int n) {
    if (n == 1) return a[0];
    return a[n - 1] + sumOfArray(a, n - 1);
}

int main() {
    int n;
    int arr[1000];
    cout << "nhap so luong phan tu trong mang: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "nhap phan tu thu " << i<<" la: ";
        cin >> arr[i];
    }
    cout <<"tong cac phan tu trong mang la: "<< sumOfArray(arr, n);
    return 0;
}