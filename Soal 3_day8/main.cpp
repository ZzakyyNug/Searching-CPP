#include <iostream>

using namespace std;

void bubble_sort(int arr[], int length)
{
    int j, i;
    int tmp;
    for (i = 0; i < length - 1; i++) {
        for (j = 0; j < length-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                //alternative : u can use swap function
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}

int function_binary_search(int data[], int n, int k)
{
    int atas, bawah, tengah, posisi;
    bool ada;

    ada = false;
    bawah = 0;
    atas = n - 1;
    posisi = -1;

    while (bawah <= atas)
    {
        tengah = (atas + bawah) / 2;
        if (k == data[tengah])
        {
            posisi = tengah;
            break;
        }
        else if (k < data[tengah])
            atas = tengah - 1;
        else if (k > data[tengah])
            bawah = tengah + 1;
    }

    return posisi;
}

void print_array_after_ordered(int a[], int length) {
    cout << "Setelah diurutkan : " << endl;
    for (int i=0; i < length; i++) {
        cout << a[i] << "\t";
    }

    cout << endl;

}

int main() {
    int dafbil[] = {21, 61, 28, 72, 44, 68, 37, 52, 75, 75};

    int n_051 = 10;
    int k;


    bubble_sort(dafbil, n_051);
    print_array_after_ordered(dafbil, n_051);

    cout << "Masukan bilangan yang ingin anda cari : ";
    cin >> k;


    int posisi = function_binary_search(dafbil, n_051, k);
    if (posisi != -1){
        cout << "Bilangan " << k << " di posisi indeks ke-" << posisi << endl;
    } else {
        cout << "Bilangan " << k << " tidak ditemukan" << endl;
    }
    return 0;
}
