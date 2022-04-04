#include <iostream>
using namespace std;

void nhap(int &n, int array[]) {
    cout << "nhap n phan tu: ";
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cout << "array[" << i << "] = "; cin >> array[i];
    }
}

void xuat(int n, int array[]) {
    cout << "in nguoc mang : ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << array[i] << " ";
    }
}

int main() {
    int n, array[100];
    nhap(n, array);
    xuat(n, array);
    return 0;
}