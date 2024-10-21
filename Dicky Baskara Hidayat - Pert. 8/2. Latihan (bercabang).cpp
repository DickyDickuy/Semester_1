#include<iostream>
using namespace std;
//Dicky Baskara Hidayat
main(){
	int a,b,c;
	cout<<"Pilih tipe makanan yang kamu inginkan";
	cout<<"\nKetik 	1 untuk Makanan Indonesia, \n	2 untuk Makanan Barat : "; cin>>a;
	
	if (a<2)
		{cout<<"Baiklah, ketik 	1 untuk Nasi Goreng, \n		2 untuk Nasi Uduk : "; cin>>b;
		if (b<2)
			cout<<"\nSiap bos, Nasi Gorengmu sedang dibuat";
		else
			cout<<"\nBaik bos Nasi Udukmu Segera di antar";}
	else
		{cout<<"Baiklah, ketik 	1 untuk Pizza, \n		2 untuk Burger : "; cin>>c;
		if (c<2) 
			cout<<"\nSiap bos, Pizza sedang dibuat";
		else
			cout<<"\nBaik bos Burger anda akan segera di antar";}

}

