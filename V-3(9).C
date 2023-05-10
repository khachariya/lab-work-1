#include<stdio.h>
#include<conio.h>

main()
{
   clrscr();
   int x=56,y=76,xy;
   xy=(x*x*x)+(3*x*y)*(x+y)+(y*y*y);

   printf("xy=%d",xy);
   getch();
}