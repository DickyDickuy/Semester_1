#include <iostream>
using namespace std;
//Dicky Baskara Hidayat

main() {
	string nama, kategori; 
	int usia;
	
	cout<<"Masukkan nama : "; 
	getline(cin, nama); 
	
	cout<<"Masukkan usia : "; cin>>usia;
	
	if (usia<13){
		kategori = "Anak-anak";}
	else if (usia >= 13 && usia <= 19){
		kategori = "Remaja";}
	else if (usia >= 20 && usia <= 64){
		kategori = "Dewasa";}
	else {
		kategori = "Lansia";}
	
	cout<< "\nNama: " << nama;
	cout<< "\nUsia: " << usia << "tahun";
	cout<< "\nKategori: "<< kategori;
	
	return 0;
}
