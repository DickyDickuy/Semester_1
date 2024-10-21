#include <stdio.h>
#include <math.h>
//Dicky Baskara Hidayat
main(){
	int a,b,c;
	printf("Pilih tipe makanan yang kamu inginkan : ");
	printf("\nKetik 	1 untuk Makanan Indonesia, \n	2 untuk Makanan Barat : ");
	scanf("%d", &a);
	
	if (a<2)
		{printf("Baiklah, ketik 	1 untuk Nasi Goreng, \n		2 untuk Nasi Uduk : ");
		scanf("%d", &b);
		if (b<2)
			printf("\nSiap bos, Nasi Gorengmu sedang dibuat");
		else
			printf("\nBaik bos Nasi Udukmu Segera di antar");}
	else
		{printf("Baiklah, ketik 	1 untuk Pizza, \n		2 untuk Burger : ");
		scanf("%d", &c);
		if (c<2) 
			printf("\nSiap bos, Pizza sedang dibuat");
		else
			printf("\nBaik bos Burger anda akan segera di antar");}

}
