#include <iostream>
using namespace std;

void rataRata(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Rata-rata: " << (float) sum / n << endl;
}

int main() {
    int n;
    
    cout << "Masukkan jumlah bilangan: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        do {
            cout << "Masukkan bilangan ke-" << i + 1 << ": ";
            cin >> arr[i];
            if(arr[i] < 0){
                cout << "Bilangan tidak boleh negatif!" << endl;
            }
        } while (arr[i] <= 0);
    }
    rataRata(arr, n);
}