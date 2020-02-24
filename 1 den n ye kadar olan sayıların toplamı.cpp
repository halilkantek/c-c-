#include <stdio.h>
int main()
{
char a;
	printf("haftanin gun numarasi giriniz:");
	scanf("%d",&a);
	switch(a)
		{
			case 1:	printf("yazdiginiz gun:pazartesi");
			break;
			case 2:	printf("yazdiginiz gun:sali");
			break;
			case 3:	printf("yazdiginiz gun:carsamba");
			break;
			case 4:	printf("yazdiginiz gun:persembe");
			break;
			case 5:	printf("yazdiginiz gun:cuma");
			break;
			case 6:	printf("yazdiginiz gun:cumartesi");
			break;
			case 7:	printf("yazdiginiz gun:pazar");
			break;
		}
		return 0;
}
