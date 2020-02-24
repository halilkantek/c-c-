#include <stdio.h>
int main()
{
int n;
printf("eleman sayisi:"); 
scanf("%d",&n);
int dizi[n];
int i;
for(i=0;i<n;i++)
{
	printf("dizinin %d indisli elemani:",i);
	scanf("%d",&dizi[i]);
}
printf("\ndizi elemanlari: \n");
for(i=0; i<n;i++)
printf("dizinin %d indisli elemani:%d\n",i,dizi[i]);
return 0;
}
