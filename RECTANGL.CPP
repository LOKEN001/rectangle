#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
 int gd=DETECT,gm;
 int x, y, x1, y1;
 initgraph(&gd,&gm,"c://TURBOC3//BGI");
 printf("\nEnter the first cordination point and second cordination point:\n");
 scanf("%d %d %d %d",&x,&y,&x1,&y1);
 rectangle(x,y,x1,y1);
 getch();
 closegraph();
 return 0;
}