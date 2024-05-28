#include<iostream>
#include<graphics.h>
using namespace std;
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"");

setcolor(RED);
circle(300,200,70);
setfillstyle(1,GREEN);
floodfill(315, 215, RED);

setcolor(WHITE);
circle(275,170,12);
setfillstyle(1,BLACK);
floodfill(276,171,WHITE);

setcolor(WHITE);
circle(320,170,12);
setfillstyle(1,BLACK);
floodfill(325,171,WHITE);

setcolor(WHITE);
line(285, 200, 305, 200);
line(285,200, 295, 210);
line(295,210,305,200);
setfillstyle(1,BLACK);
floodfill(290,203,WHITE);

setcolor(RED);
line(280,230,310,230);
ellipse(295,230,180,360,15,11);
setfillstyle(4,BLACK);
floodfill(296,231,RED);

getch();
closegraph();

}
