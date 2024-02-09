#include <iostream>

using namespace std;

// Fungsi pencarian biner
int function_binary_search (int data [], int n, char k)
{
    int atas,bawah,tengah,posisi;
    bool ada;

    ada = false;
    bawah = 0;
    atas = n - 1;
    posisi = -1;

    // Melakukan pencarian biner dalam larik data
    while (bawah <= atas) {
        tengah = (atas + bawah) /2;

        // Jika elemen di tengah larik sama dengan nilai k, set posisi dan keluar dari loop
        if(k == data[tengah]) {
            posisi = tengah;
            break;
        }
    // Jika nilai k lebih kecil dari elemen di tengah, geser batas atas
    else if(k < data[tengah]) atas = tengah -1;
    // Jika nilai k lebih besar dari elemen di tengah, geser batas bawah
    else if(k > data[tengah]) bawah = tengah +1;
    }

    return posisi;
}
int main()
{
    int n = 7;
    int data[] = {1,2,3,4,5,6,7};
    int k = 6;

    // Memanggil fungsi pencarian biner
    int posisi = function_binary_search(data, n, k);
    // Menampilkan hasil pencarian
    if(posisi != -1) {
        cout << "kunci " << k << " ditemukan pada posisi indeks ke-" << posisi << endl;
    } else {
        cout << "kunci " << k << " tidak ditemukan" << endl;
    }
    return 0;
}
