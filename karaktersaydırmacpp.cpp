#include <stdio.h>
int main()
{
	char dizi[100];
	int h,b,g,l=1,p=1;
	int kackerecikti[100]={0};
	printf("luften bir kelime giriniz:");
	gets(dizi);
	while(dizi[l]!='\0')
	{
		p++;
		l++;
		
	}
	for(h=0;h<p;h++)
	{
	if(kackerecikti[h]==0)
	{
	for(b=h+1;b<p;b++)
	{
	if(dizi[b]!=' '&&dizi[b]==dizi[h])
	{
		kackerecikti[h]++;kackerecikti[b]++;
  	}
	}
	if (dizi[h]!=' ')
	printf("%c(%d)\n",dizi[h],kackerecikti[h]+1);
	}
	}
}

	
	
	
	
	
	
	
	
	
