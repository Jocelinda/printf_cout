#include <iostream>
using namespace std;
 
int main (){
	string nama;
	int induk;
	float tugas;
	float uts;
	float uas;
	//float ptugas= 0.25;
	//float puts= 0.30;
	//float puas= 0.45;
	

	
	cout <<"Hitung nilai mahasiswa:\n";
	cout << "Masukkan nama Anda:\n";
	cin >> nama;
	cout <<"Masukkan nomor induk Anda:\n";
	cin >> induk;
	cout << "Nilai Tugas:\n";
	cin >> tugas;
	cout << "Nilai uts:\n";
	cin >> uts;
	cout <<"Nilai Uas:\n";
	cin >> uas; 
	
	// float nilai = (tugas*ptugas) + (uts*puts) + (uas*puas); or bawah juga bisa.
	float nilai = (tugas*0.25)+(uts*0.30)+(uas*0.45);
	cout << "Total nilai akhir:" << nilai; 
	
	
}
