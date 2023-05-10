#include<stdio.h>
#include<conio.h>

main()
{
 clrscr();
 int x=3,y=2,z=8,xyz;
 xyz=(x*x*x)+(y*y*y)+(z*z*z)+(3*(x+y)*(y+z)*(z+x));
 printf("xyz=%d",xyz);
 getch();
}