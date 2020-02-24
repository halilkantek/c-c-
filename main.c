#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi1,sayi2;
	for(sayi1=1; sayi1<=10; sayi1=sayi1+1)
	{
	printf("%d-%d\n",sayi1,(sayi1*2));
}
	getch();
	return 0;
}
