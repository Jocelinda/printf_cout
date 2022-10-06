#include <stdio.h>
using namespace std; 
int main(){
	char nama[19];
	int nilai; 
	
	printf("Masukkan Nama: ");
	scanf("%s", &nama);
	
	printf("Masukkan Nilai: ");
	scanf("%d", &nilai);
	
	printf("\n Mahasiswa dengan nama %s nilainya adalah %d", nama, nilai); 
	return 0; 
	
}
