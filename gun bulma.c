#include <stdio.h>
int main()
{
int a;
git:
	printf("----------");
printf("\ngun sayisini giriniz:");
scanf("%d",&a);
switch(a)
{
	case 1:
		printf("pazartesi");
		break;
		case 2:
			printf("sali");
				break;
			case 3:
				printf("carsamba");
					break;
				case 4:
					printf("persembe");
						break;
					case 5:
						printf("cuma");
							break;
						case 6:
							printf("cumartesi");
								break;
							case 7:
								printf("pazar");
									break;
									default:
										printf("1-7 arasi deger giriniz");
										break;
								
										}	
										goto git;
	
return 0;
}
