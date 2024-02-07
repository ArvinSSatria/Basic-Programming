#include <iostream>
using namespace std;

// ------------------------------------- FUNGSI ------------------------------------- //


// Kalkulator Sederhana //

void penjumlahan(int a, int b) {
    cout << "Masukkan Angka Pertama : ";
    cin >> a;
    cout << "Masukkan Angka Kedua   : ";
    cin >> b;
    cout << "Hasil Penjumlahan : " << a + b << endl;
}

void pengurangan(int a, int b) {
    cout << "Masukkan Angka Pertama : ";
    cin >> a;
    cout << "Masukkan Angka Kedua   : ";
    cin >> b;
    cout << "Hasil Pengurangan : " << a - b << endl;
}

void pembagian(int a, int b) {
    cout << "Masukkan Angka Pertama : ";
    cin >> a;
    cout << "Masukkan Angka Kedua   : ";
    cin >> b;
    cout << "Hasil Pembagian : " << a / b << endl;
}

void perkalian(int a, int b) {
    cout << "Masukkan Angka Pertama : ";
    cin >> a;
    cout << "Masukkan Angka Kedua   : ";
    cin >> b;
    cout << "Hasil Perkalian : " << a * b << endl;
}

void pangkat(int a, int b) {
    cout << "Masukkan Angka Pertama : ";
    cin >> a;
    cout << "Masukkan Angka Kedua   : ";
    cin >> b;

    int hasil = 1;
    for (int i = 0; i < b; i++) {
        hasil *= a;
    }
    cout << "Hasil Pangkat : " << hasil << endl;
}

void faktorial(int a){
    cout << "Masukkan Angka : ";
    cin >> a;

    for(int i = a - 1; i > 0; i--){
        a *= i;
    }
    cout << "Hasil faktorial adalah " << a << endl;
}

void prima(int i, int a) {
  bool is_prime = true;

  cout << "Enter a positive integer: ";
  cin >> a;

  // 0 and 1 are not prime numbers
  if (a == 0 || a == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (i = 2; i <= a/2; ++i) {
    if (a % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << a << " is a prime number";
  else
    cout << a << " is not a prime number";
    cout << endl;
}

// Menghitung Luas Bangun Datar //

void persegiPanjang(int a, int b) {
    cout << "Masukkan Panjang : ";
    cin >> a;
    cout << "Masukkan Lebar   : ";
    cin >> b;
    cout << "Luas Persegi Panjang : " << a * b << endl;
}

void segitiga(int a, int b) {
    cout << "Masukkan Alas   : ";
    cin >> a;
    cout << "Masukkan Tinggi : ";
    cin >> b;
    cout << "Luas Segitiga : " << a * b / 2 << endl;
}

void lingkaran(int a) {
    cout << "Masukkan Jari-jari : ";
    cin >> a;
    cout << "Luas Lingkaran : " << 3.14 * (a * a) << endl;
}


// ------------------------------------- FUNGSI ------------------------------------- //

int main() {
    char kembali;
    do {
        system("cls");
        int pilihan, a, b, i;

        cout << "======== APLIKASI RUPA ANGKA ========" << endl;
        cout << "1. Kalkulator Sederhana" << endl;
        cout << "2. Menghitung Luas Bangun Datar" << endl;
        cout << "3. Keluar Program" << endl;
        cout << "====================================" << endl;
        cout << "Pilih Menu : ";
        cin >> pilihan;
        
        system("cls");

        switch (pilihan) {
            case 1:
                int pilihanKalkulator;    
                cout << "======= KALKULATOR SEDERHANA =======" << endl;
                cout << "1. Penjumlahan" << endl;
                cout << "2. Pengurangan" << endl;
                cout << "3. Pembagian" << endl;
                cout << "4. Perkalian" << endl;
                cout << "5. Pangkat" << endl;
                cout << "6. Faktorial" << endl;
                cout << "7. Cek Bilangan Prima" << endl;
                cout << "8. Keluar Program" << endl;
                cout << "====================================" << endl;
                cout << "Pilih Menu : ";
                cin >> pilihanKalkulator;

                if (pilihanKalkulator == 1) {
                    penjumlahan(a, b);
                } else if (pilihanKalkulator == 2) {
                    pengurangan(a, b);
                } else if (pilihanKalkulator == 3) {
                    pembagian(a, b);
                } else if (pilihanKalkulator == 4) {
                    perkalian(a, b);
                } else if (pilihanKalkulator == 5) {
                    pangkat(a, b);
                } else if (pilihanKalkulator == 6){
                    faktorial(a);
                } else if (pilihanKalkulator == 7) {
                    prima(i, a);
                } else {
                    cout << "Pilihan Tidak Tersedia" << endl;                       
                }
                break;
            case 2:
                int pilihanBangunDatar;

                cout << "======= KALKULATOR SEDERHANA =======" << endl;
                cout << "1. Persegi Panjang" << endl;
                cout << "2. Segitiga" << endl;
                cout << "3. Lingkaran" << endl;
                cout << "4. Keluar Program" << endl;
                cout << "====================================" << endl;
                cout << "Pilih Menu : ";
                cin >> pilihanBangunDatar;

                if (pilihanBangunDatar == 1) {
                    persegiPanjang(a, b);
                } else if (pilihanBangunDatar == 2) {
                    segitiga(a, b);
                } else if (pilihanBangunDatar == 3) {
                    lingkaran(a);
                } else {
                    cout << "Pilihan Tidak Tersedia" << endl;
                }
                break;
            case 3:
                cout << "Terima Kasih" << endl;
                return 0; // Keluar dari program setelah pesan terima kasih
            default:
                cout << "Pilihan Tidak Tersedia" << endl;
                break;
        }

        cout << "Kembali ke menu awal? (y/n): ";
        cin >> kembali;

    } while (kembali == 'y' || kembali == 'Y');

    return 0;
}
