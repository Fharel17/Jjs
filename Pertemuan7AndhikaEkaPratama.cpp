#include <iostream>

using namespace std;

void bandingkan(int *x, int *y);

void bandingkan(int *x, int *y) {
    int c;
    if (*x < *y) {
        c = *x;
        *x = *y;
        *y = c;
    }
}

int main() {
    int a, b;
    cout<<"Masukkan Nilai Pertama : \n";
    cin >> a;
    cout<<"Masukkan Nilai Kedua : \n";
    cin >> b;
    bandingkan(&a, &b);
    cout <<"Hasil : "<< a << "-" << b << endl;
    return 0;
}

