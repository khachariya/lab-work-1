#include<stdio.h>
#include<conio.h>

main()
{
 clrscr();
 int x=60,y=54,z=87,xyz;
 xyz=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));
 printf("xyz=%d",xyz);
 getch();
}