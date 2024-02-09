#include <iostream>

using namespace std;

// Fungsi pencarian biner
int function_binary_search(int data[], int kunci, int length)
{
    int atas_051, bawah, tengah, posisi;

    bawah = 0;
    atas_051 = length - 1;
    posisi = -1;

    // Melakukan pencarian biner dalam larik data
    while (bawah <= atas_051)
    {
        tengah = (atas_051 + bawah) / 2;

        // Jika elemen di tengah larik sama dengan nilai kunci, set posisi dan keluar dari loop
        if (kunci == data[tengah])
        {
            posisi = tengah;
            break;
        }
        // Jika nilai kunci lebih kecil dari elemen di tengah, geser batas atas_051
        else if (kunci < data[tengah])
            atas_051 = tengah - 1;
        // Jika nilai kunci lebih besar dari elemen di tengah, geser batas bawah
        else if (kunci > data[tengah])
            bawah = tengah + 1;
    }

    return posisi;
}

int main()
{
    int n = 13;
    int data[] = {12102001, 12102002, 12102003, 12102004, 12102005, 12102006, 12102007, 12102008, 12102009, 12102010, 12102011, 12102012, 12102013};
    //Karena NIM di soalnya harus nyari 12102011 maka masukan NIM tersebut
    int k;
    cout << "Masukan NIM yang ingin anda cari: ";
    cin >> k;

    // Memanggil fungsi pencarian biner
    int posisi = function_binary_search(data, k, n);
    // Menampilkan hasil pencarian
    if (posisi != -1)
    {
        cout << "NIM " << k << " ditemukan, dalam indeks ke-" << posisi << endl;
    }
    else
    {
        cout << "NIM " << k << " tidak ditemukan pada kelas tersebut" << endl;
    }
    return 0;
}
