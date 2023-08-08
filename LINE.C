#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,x,y;
printf("enter the cordinate ");
scanf("%d%d%d%d",&x1,&y1,&x2,&y1);
initgraph(&gd,&gm,"C://TURBOC3/BGI");
line(x1,y1,x2,y2);
printf("enter translation cordinate");
scanf("%d%d",&x,&y);
x1=(x1*x);
y1=(y1*y);
x2=(x2*x);
y2=(y2*y);
printf("the line is after translation:");
line(x1,y1,x2,y2);
getch();
closegraph();
}
