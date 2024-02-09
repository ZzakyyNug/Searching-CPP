#include <iostream>

using namespace std;

int sequential_search(double data[], int n, double k) {
    int posisi = -1;
    int i = 0;
    int ketemu = 0;

    if (n <= 0) {
        posisi = -1;
    } else {
        for (i = 0; i < n; ++i) {
            if (data[i] == k) {
                posisi = i;
                ketemu = 1;
                break;
            }
        }
    }

    return posisi;
}

int main() {
    int n = 7;
    double data[] = {1.3, 0.9, 3.2, 2.1, 5.8, 7.7, 9.2};
    double k = 1;

    int posisi = sequential_search(data, n, k);

    if (posisi != -1) {
        cout << "Kunci " << k << " ditemukan pada posisi indeks ke-" << posisi << endl;
    } else {
        cout << "Kunci " << k << " tidak ditemukan" << endl;
    }
    return 0;
}
