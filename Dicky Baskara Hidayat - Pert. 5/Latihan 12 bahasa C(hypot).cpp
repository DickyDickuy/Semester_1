#include <stdio.h>
#include <math.h>
//Dicky Baskara
main(){
	int x1,x2; double y;
	x1 = 2 * 2;
	x2 = 4 * 4;
	y = hypot(x1, x2);
	// Menghitung panjang hipotenusa dari dua sisi
	printf ("%2f\n", y);
}
