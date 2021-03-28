#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <conio.h>
using namespace std;
int main()
{
int h,g;
do 
{
for (h=0; h<g; h++) 
cout<<" ";
cout<<"hello world";
g++;
system("CLS");
if (g==100-strlen("Hello world")) 
g=0;
} 
while (!kbhit()); 
}
