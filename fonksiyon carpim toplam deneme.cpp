#include <stdio.h>
int carpim(int x,int y)
{
	int sonuc=x*y;
}
int toplam(int z, int d)
{
	int sonucc=z+d;
}
int main()
{
	int sayi1,sayi2,carp,topla;
	printf("sayi1:");
	scanf("%d",&sayi1);
	printf("sayi2:");
	scanf("%d",&sayi2);
	carp=carpim(sayi1,sayi2);
	printf("carpim=%d\n",carp);
	topla=toplam(sayi1,sayi2);
	printf("toplam=%d",topla);
}

