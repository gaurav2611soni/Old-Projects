#include<iostream.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int j,a,b,c,i;
   char t[1][10];
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   /* read result of initialization */
   errorcode = graphresult();
   /* an error occurred */
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
   a=getmaxx()/10;
   b=getmaxy()/10;
   if(a>=b)
   a=b;
   setcolor(getmaxcolor());
   for(i=1;i<=9;i++)
   sprintf(t[i-1],"",i);
    b=a/2;
   for(i=0,b=a/2;i<=9*a;i+=a,b+=a)
   {
   line(a,b,10*a,b);
   line(a+i,a/2,a+i,(19*a)/2);
   }
    j=a+(a/2);
   outtextxy(j,2*a,"9");
   /* clean up */
   setcolor(5);
   line((23*a)/2,a/2,(23*a)/2,(19*a)/2);
   line((21*a)/2,a/2,(21*a)/2,(19*a)/2);

   for(i=0;i<=9;i++)
   {
   line((21*a)/2,(i*a)+a/2,(23*a)/2,(i*a)+a/2);
   setcolor(15);
   if(i!=0)
   outtext(t[i-1]);
   }
   getch();
   closegraph();
   return 0;
}
