#include <iostream>
using namespace std;

/* CONTOH PROGRAM PERULANGAN

	- FOR
	- WHILE
	- DO WHILE

	MENGGUNAKAN SISTEM BREAK & CONTINUE
*/

int main(){

	// FOR 
	// adalah perulangan suatu pernyataan

	cout << "\nPERULANGAN FOR menggunakan (break)\n" << endl; //pakai fungsi for
	for (int i = 0; i <= 10; i++){
		if (i == 5)
			break; // jika i = 5 maka loop akan berhenti (break) di angka 4
		cout << i << endl;}


	// WHILE 
	/*	adalah program yang akan terus melakukan perulangan 
		dengan mengeksekusi pernyataan target selama kondisi tertentu bernilai benar. */
	
	cout << "\nPERULANGAN WHILE menggunakan (continue)\n" << endl; // pakai fungsi while 
	int i = 0;
	while (i <= 10){
		i++; //untuk (while loop) increment harus ditaruh dahulu sebelum continue
		if (i == 5)
			{continue;} //ini pakai continue penjelasan ada diatas
		cout << i << endl;
	}

	// do while
	// adalah membaca aksi dahulu lalu ke syarat kemudian baru looping kembali 

	cout << "\nPERULANGAN DO WHILE\n" << endl;

	int a = 1;
	do 			// uniknya do walaupun salah (false) aksi akan tetap dieksekusi minimal 1x
	{
	cout << a << endl;
	a++;} //pakai assigment (++) agar variabel (a) otomatis betambah 1
	while (a <= 10); //ini agar loop berhenti di angka 10

	cout << "\nterima kasih sudah menonton\nAYO LIKE & SUBSCRIBE\n" << endl;



	return 0;
}