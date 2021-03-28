#include <iostream>
using namespace std;
int main()
{
	char dizi[100];
	int z,art=0,r;
	z='a'-'A'; 
	cout<< "....HOSGELDINIZ..."<<endl ;
	cout<<"Lutfen metini giriniz : ";
	gets(dizi); 
	int w=0;
	while(dizi[w]!='\0')
	{
		w++;
		art++;
	}
	int h=0;
	while(h<art)
	{
		
		int g=h+1; 
		while(g<art)
		{
			if(dizi[h]>dizi[g])
			{
				r=dizi[h];
				dizi[h]=dizi[g];
				dizi[g]=r;
			}
			g++;
		}
	h++;	
	}
	puts(dizi);
}
