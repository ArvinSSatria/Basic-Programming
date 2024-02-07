#include <iostream>
using namespace std;

int main(){
	int baris, jumlahBaris, spasi, bintang;
	cout << "Masukkan Panjang Baris : "; 
	cin >> jumlahBaris;
	
	cout << "Membuat Segitiga Siku-Siku" << endl;
	for(baris = 1; baris <= jumlahBaris; baris++){
		for (spasi = 1; spasi <= jumlahBaris - baris; spasi++){
			cout << " ";
		}
		for (bintang = 1; bintang <= baris; bintang++){
			cout << "* ";
		}
		cout << endl;
	}
	
	cout << "\nMembuat Segitiga Sama Kaki" << endl; 
	for(baris = 1; baris <= jumlahBaris; baris++){
		for(spasi = jumlahBaris; spasi > baris; spasi--){
			cout << " ";
		}
		for(bintang = 1; bintang <= baris; bintang++){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "\nMembuat Segitiga Sama Kaki" << endl; 
	for(baris = 1; baris <= jumlahBaris; baris++){
		for(spasi = 2; spasi <= baris; spasi++){
			cout << " ";
		}
		for(bintang = jumlahBaris; bintang >= baris; bintang--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "\nMembuat Segitiga Ketupat" << endl;
	for(baris = 1; baris <= jumlahBaris; baris++){
		for (spasi = 1; spasi <= jumlahBaris - baris; spasi++){
			cout << " ";
		}
		for (bintang = 1; bintang <= baris; bintang++){
			cout << "* ";
		}
		cout << endl;
	}
	
	for(baris = 1; baris <= jumlahBaris; baris++){
		for (spasi = 1; spasi <= baris; spasi++){
			cout << " ";
		}
		for (bintang = 1; bintang <= jumlahBaris - baris; bintang++){
			cout << "* ";
		}
		cout << endl;
	}
	
	return 0;	
}