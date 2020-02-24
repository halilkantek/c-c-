#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int onluk, kalan, ikilik,i;
	printf("sayi gir:");
	scanf("%d",&onluk);
	git:
	{
		kalan=onluk%2;
		ikilik=ikilik+(kalan*i);
		onluk=onluk/2;
		i=i*10;
		if(onluk>2)
		goto git;
		}
		printf("%d",ikilik);
	return 0;
}
