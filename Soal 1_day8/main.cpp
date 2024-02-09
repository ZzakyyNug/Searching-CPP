#include <iostream>

using namespace std;
//Program mencari plat nomor dalam platbase
void sequential_search(string plat_051[], string kunci, int length)
{
    //Deklarasi
   int posisi, i, ketemu;
   //Mencari data menggunakan Sequential Search
   if ( length <= 0) {
        posisi = -1;
   } else {
    ketemu = 0;
    i = 0;
    while ( (i < length -1) && !ketemu) {
        if (plat_051[i] == kunci) {
            posisi = i;
            ketemu = 1;
        } else {
            i++;
        }
        if (!ketemu) {
            posisi = -1;
        }
    }
}
if (posisi != -1) {
    cout << "Kunci -> '" << kunci << "' ditemukan pada posisi indeks ke = " << posisi << endl;//Jika ditemukan
} else {
    cout << "Kunci -> '" << kunci << " tidak ditemukan" << endl;//jika tidak ditemukan
    }
}

void PrintArray (string arr[], int length)
{
    for (int i=0; i < length; i++) {
        cout << "[" << i << "] => " << arr[i] << endl;
    }
}

int main() {
    //Deklarasi
    int length;
    string plat_051[] = {"R 300 SR", "R 1234 DJ", "R 3218 RR", "R 701 LP", "R 007 TU", "R 3 ST", "R 999 RT", "R 210 RO", "R 1111 II", "R 4987 LH"};
    length = sizeof(plat_051)/sizeof(plat_051[0]);

    string kunci = "R 999 RS";
    //mencetak data
    cout << "DATA DI DALAM ARRAY" << endl;
    PrintArray(plat_051,length);
    //mencari data
    cout << endl << "DATA YANG DICARI -> " << kunci << endl;
    //pemanggilan prosedur
    sequential_search(plat_051, kunci, length);

    return 0;
}
