#include <stdio.h>
#include <math.h>
//Dicky Baskara Hidayat
main(){
	int N;	
	printf("Masukan nilai N :");
	scanf ("%d", &N);
	
	int A = N;
	int var1 = N + 10, var2 = N + 25;
	if(A>50){
		printf("%d", var1);
	} else {
		printf("%d", var2);
	}
}
