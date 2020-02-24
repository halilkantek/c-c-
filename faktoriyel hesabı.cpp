#include <stdio.h>
int main()
{
int i,n,f;
printf("sayi gir:");
scanf("%d",&n);
for(i=n; i>=1; i--)
{
f=f*i;
}	
printf("%d",f);
return 0;
}


