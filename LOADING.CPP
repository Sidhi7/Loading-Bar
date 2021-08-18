#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>

int main(){

	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	outtextxy(200,200,"LOADING That ARPIT is a SHIT");
	rectangle(150,180,450,280);
	rectangle(200,240,400,220);
	for(int i=1; i<=200; i++){
		setcolor(2);
		rectangle(200,240,200+i,220);
		delay(50);

	}

	getch();
}