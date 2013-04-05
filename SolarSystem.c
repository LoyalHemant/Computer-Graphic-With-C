 //Project By:Hemant Gupta
//Solar System using Computer Graphics

#include <GRAPHICS.H>
#include <stdio.h>
#include<math.h>
#include<conio.h>
#include<dos.h>
int stangle = 0, endangle = 360;
int xr = 100, yr = 50,xr2=120,yr2=60,xr3=160,yr3=70,xr4=180;
int yr4=80,xr5=200,yr5=100,xr6=220,yr6=120,xr7=240,yr7=140,xr8=260,yr8=160;
void main()
{ clrscr();
int gd=DETECT,gm;
float xc=300,yc=200,x,y,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6,x7,y7,x8,y8,l,r,a,i,rad;
initgraph(&gd,&gm,"f:\\TC\\bin\\BGI");
printf("\nEnter the length\n");  //length
scanf("%f",&l);
printf("\nEnter radius\n");     //radius of planets
scanf("%f",&r);
printf("\nEnter angle\n");     //angle =180 for solar system
scanf("%f",&a);
a=a/2;

while(!kbhit())
{

for(i=-a;i<=a;i++)
{  outtextxy(100,100,"solar system") ;
setcolor(14);
 circle(xc,yc,14);
 outtextxy(290,200,"sun");


rad=(3.14*i)/180;
x=xc+(xr*sin(rad));
y=yc+(yr*cos(rad));
x=xc-(xr*sin(rad));
y=yc+(yr*cos(rad));
    line(xc,yc,x,y); //if u wanted to remove the line then remove this//
circle(x,y,r);
setcolor(2);
 ellipse(xc, yc, stangle, endangle,xr, yr);
 outtextxy(400,200,"mercury");

 putpixel(120,120,18);
 putpixel(130,120,18);
 putpixel(120,20,11);
 putpixel(200,150,1);
 putpixel(200,200,3);
 putpixel(200,300,5);
 putpixel(12,12,11);
 putpixel(100,20,9);

x2=xc+(xr2*sin(rad));
y2=yc+(yr2*cos(rad));
x2=xc-(xr2*sin(rad));
y2=yc+(yr2*cos(rad));

circle(x2,y2,1.1*r);
setcolor(3);
ellipse(xc, yc, stangle, endangle,xr2, yr2);
outtextxy(420,210,"venus");

putpixel(200,300,11);
putpixel(120,300,2);
putpixel(100,300,7);
putpixel(80,300,8);
putpixel(60,300,10);
putpixel(40,300,9);
putpixel(20,300,7);
putpixel(10,300,9);
putpixel(300,300,19);
putpixel(300,320,23);

x3=xc+(xr3*sin(rad));
y3=yc+(yr3*cos(rad));
x3=xc-(xr3*sin(rad));
y3=yc+(yr3*cos(rad));
circle(x3,y3,1.2*r);
setcolor(4);
 ellipse(xc, yc, stangle, endangle,xr3, yr3);
 outtextxy(430,220,"earth");
 putpixel(300,12,9);
putpixel(220+r,204,15);
putpixel(220+r,205,15);
putpixel(220+r,206,15);
putpixel(235+r,204,15);
putpixel(235+r,205,15);
putpixel(235+r,206,15);
putpixel(230-r,206,15);
putpixel(230-r,335,12);
putpixel(220-r,335,7);

x4=xc+(xr4*sin(rad));
y4=yc+(yr4*cos(rad));
x4=xc-(xr4*sin(rad));
y4=yc+(yr4*cos(rad));
circle(x4,y4,1.3*r);
putpixel(140,440,5);
putpixel(242,443,6);
putpixel(244,440,7);
putpixel(248,443,8);
putpixel(140,240,9);
putpixel(142,343,6);
setcolor(5);
 ellipse(xc, yc, stangle, endangle,xr4, yr4);
 outtextxy(440,230,"mars");
x5=xc+(xr5*sin(rad));
y5=yc+(yr5*cos(rad));
x5=xc-(xr5*sin(rad));
y5=yc+(yr5*cos(rad));
circle(x5,y5,1.4*r);
setcolor(6);
ellipse(xc, yc, stangle, endangle,xr5, yr5);
outtextxy(450,240,"jupiter") ;
x5=xc+(xr5*sin(rad));
y6=yc+(yr6*cos(rad));
x6=xc-(xr6*sin(rad));
y6=yc+(yr6*cos(rad));
circle(x6,y6,1.5*r);
putpixel(140,240,5);
putpixel(142,243,6);
putpixel(144,240,7);
putpixel(148,343,8);
putpixel(140,240,9);
putpixel(142,343,6);
setcolor(11);
ellipse(xc, yc, stangle, endangle,xr6, yr6);
outtextxy(460,250,"saturn") ;
x7=xc+(xr7*sin(rad));
y7=yc+(yr7*cos(rad));
x7=xc-(xr7*sin(rad));
y7=yc+(yr7*cos(rad));
circle(x7,y7,1.6*r);
setcolor(12);
ellipse(xc, yc, stangle, endangle,xr7, yr7);
outtextxy(470,260,"uranus") ;
x8=xc+(xr8*sin(rad));
y8=yc+(yr8*cos(rad));
x8=xc-(xr8*sin(rad));
y8=yc+(yr8*cos(rad));
circle(x8,y8,1.7*r);
setcolor(9);
ellipse(xc, yc, stangle, endangle,xr8, yr8);
outtextxy(480,270,"neptune") ;
delay(5);
cleardevice();

}
for(i=a;i>=-a;i--)
{

   outtextxy(100,100,"solar system") ;
setcolor(14);
 circle(xc,yc,14);
 outtextxy(290,200,"sun");
rad=(3.14*i)/180;
x=xc+(xr*sin(rad));
y=yc+(yr*cos(rad));
x=xc-(xr*sin(rad));
y=yc-(yr*cos(rad));

circle(x,y,r);
setcolor(2);
 ellipse(xc, yc, stangle, endangle,xr, yr) ;
 outtextxy(190,200,"mercury");
 putpixel(320,230,12);
 putpixel(120,120,13);
 putpixel(120,180,14);
 putpixel(12,180,18);
 putpixel(160+r,120,20);
 putpixel(120+r,190,11);
x2=xc+(xr2*sin(rad));
y2=yc+(yr2*cos(rad));
x2=xc-(xr2*sin(rad));
y2=yc-(yr2*cos(rad));
putpixel(140,340,5);
putpixel(142,343,6);
putpixel(144,340,7);
putpixel(148,343,8);
putpixel(140,240,9);
putpixel(142,343,6);
circle(x2,y2,1.1*r);
setcolor(3);
 ellipse(xc, yc, stangle, endangle,xr2, yr2) ;
 outtextxy(170,210,"venus");
x3=xc+(xr3*sin(rad));
y3=yc+(yr3*cos(rad));
x3=xc-(xr3*sin(rad));
y3=yc-(yr3*cos(rad));
putpixel(230,120,5);
putpixel(230,200,14);
circle(x3,y3,1.3*r);
setcolor(4);
 ellipse(xc, yc, stangle, endangle,xr3, yr3) ;
 outtextxy(150,220,"earth");
x4=xc+(xr4*sin(rad));
y4=yc+(yr4*cos(rad));
x4=xc-(xr4*sin(rad));
y4=yc-(yr4*cos(rad));
circle(x4,y4,1.4*r);
putpixel(230,230,1);
putpixel(200,210,2);
putpixel(230,120,3);
putpixel(200,180,4);
setcolor(5);
 ellipse(xc, yc, stangle, endangle,xr4, yr4) ;
 outtextxy(130,230,"mars");
x5=xc+(xr5*sin(rad));
y5=yc+(yr5*cos(rad));
x5=xc-(xr5*sin(rad));
y5=yc-(yr5*cos(rad));
circle(x5,y5,1.5*r);
setcolor(6);
ellipse(xc, yc, stangle, endangle,xr5, yr5) ;
outtextxy(120,240,"jupiter");
putpixel(120,240,5);
putpixel(122,243,6);
putpixel(124,240,7);
putpixel(128,243,8);
putpixel(130,240,9);
putpixel(132,243,6);
x6=xc+(xr6*sin(rad));
y6=yc+(yr6*cos(rad));
x6=xc-(xr6*sin(rad));
y6=yc-(yr6*cos(rad));
circle(x6,y6,1.6*r);
setcolor(11);
 ellipse(xc, yc, stangle, endangle,xr6, yr6) ;
 outtextxy(110,250,"saturn");
x7=xc+(xr7*sin(rad));
y7=yc+(yr7*cos(rad));
x7=xc-(xr7*sin(rad));
y7=yc-(yr7*cos(rad));
circle(x7,y7,1.7*r);
putpixel(140,240,5);
putpixel(142,243,6);
putpixel(144,240,7);
putpixel(148,343,8);
putpixel(140,240,9);
putpixel(142,343,6);
setcolor(12);
 ellipse(xc, yc, stangle,endangle,xr7, yr7) ;
 outtextxy(90,260,"uranus");
x8=xc+(xr8*sin(rad));
y8=yc+(yr8*cos(rad));
x8=xc-(xr8*sin(rad));
y8=yc-(yr8*cos(rad));
circle(x8,y8,1.8*r);
putpixel(140,140,5);
putpixel(342,143,6);
putpixel(344,140,7);
putpixel(348,143,8);
putpixel(340,140,9);
putpixel(342,143,6);
setcolor(9);
 ellipse(xc, yc, stangle, endangle,xr8, yr8) ;
 outtextxy(80,270,"neptune");
delay(5);
      cleardevice();
}
}
getch();itprofessionalsrocks.blogspot.com
}
