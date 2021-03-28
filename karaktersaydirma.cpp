#include<iostream> 
using namespace std;
int main()
{
char dizi[100]; 
int h,g,k,b=1,t=1; 
int kackerecikti[100]={0}; 
cout<<"Lutfen bir kelime giriniz:"; 
gets(dizi);
while(dizi[b]!='\0')
{ 
t++;
b++; 
} 
for(h=0;h<t;h++)
{ 
if(kackerecikti[h]==0) 
{ 
for(g=h+1;g<t;g++) 
{ 
if(dizi[g]!=' ' && dizi[g]==dizi[h]) 
{ 
kackerecikti[h]++; 
kackerecikti[g]++; 
} 
} 
if(dizi[h]!=' ') 
cout<<endl<<dizi[h]<<"="<<kackerecikti[h]+1; 
} 
}
}
