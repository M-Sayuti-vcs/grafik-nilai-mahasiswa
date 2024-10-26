#include <iostream>
#include <array>

using namespace std;

int main(){
	
	array<int,10> nilai;
	
//	memasukkan jumlah mahasiswa yang mendapatkan nilai 1 sampai 100 
	
	cout << "ini adalah program menampilkan grafik nilai" << endl << endl;
	
	for(int i = 0; i <= nilai.size(); i++){
		cout << "jumlah mahasiswa dengan nilai ";
		if(i == 0){
			cout << "0-9: ";
		}else if(i == 10){
			cout << "100: ";
		} else {
			cout << i * 10 << "-" << (i*10) +9 << ": ";
		}
		cin >> nilai[i];
	}
	
//	buat grafik untuk jumlah mahasiswa yang mendapatkan nilai tertentu
	cout << endl;
	cout << "ini adalah grafik nilai Mahasiswa" << endl;
	
	for(int i = 0; i <= nilai.size(); i++){
		if(i == 0){
			cout << "0-9  : ";
		}else if(i == 10){
			cout << "100  : ";
		} else {
			cout << i * 10 << "-" << (i*10) +9 << ": ";
		}
		for(int star = 0; star < nilai[i]; star++){
			cout << "*";
		}
		cout << endl;
	}
	 
//	 buat nilai akhir yang sudah di konversi menjadi nilai huruf
	cout << endl;
	cout << "berikut jumlah mahasiswa yang mendapatkan nilai, " << endl; 
	cout << "yang sudah di konversi ke nilai huruf" << endl << endl;
	for(int i = 1; i <= nilai.size(); i++){
		if(i == 1){
			int E = (nilai[i-1]) + (nilai[i]);
			cout << "jumlah Mahasiswa yang mendapatkan nilai E ada : " << E << " Orang";
		}else if(i == 2){
			cout << "jumlah Mahasiswa yang mendapatkan nilai D ada : " << nilai[i] << " Orang";
		}else if(i == 3){
			cout << "jumlah Mahasiswa yang mendapatkan nilai C- ada: " << nilai[i] << " Orang";
		}else if(i == 4){
			cout << "jumlah Mahasiswa yang mendapatkan nilai C ada : " << nilai[i] << " Orang";
		}else if(i == 5){
			cout << "jumlah Mahasiswa yang mendapatkan nilai C+ ada: " << nilai[i] << " Orang";
		}else if(i == 6){
			cout << "jumlah Mahasiswa yang mendapatkan nilai B- ada: " << nilai[i] << " Orang";
		}else if(i == 7){
			cout << "jumlah Mahasiswa yang mendapatkan nilai B ada : " << nilai[i] << " Orang";
		}else if(i == 8){
			cout << "jumlah Mahasiswa yang mendapatkan nilai B+ ada: " << nilai[i] << " Orang";
		}else if(i == 9){
			cout << "jumlah Mahasiswa yang mendapatkan nilai A- ada: " << nilai[i] << " Orang";
		}else{
			cout << "jumlah Mahasiswa yang mendapatkan nilai A ada : " << nilai[i] << " Orang";
		}
		cout << endl;
	
	}
	cin.get();
	return	0;
}
