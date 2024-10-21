#include <stdio.h>
#include <math.h>
//Dicky Baskara
main(){
	double x,y;
	x = 1.9;
	y = trunc(x); 
	// Fungsi trunc() mengembalikan nilai double, kita casting ke int
	printf ("%f", y);
}
