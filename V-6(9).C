#include<stdio.h>
#include<conio.h>

main()

{
   clrscr();
   int x=6,y=7,z=8,xyz;
   xyz=(x*x*x)-(y*y*y)-(z*z*z)-(3*(x+y))+(3*(y+z))+(3*(z+x));
   printf("xyz=%d",xyz);
   getch();
}