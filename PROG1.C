// wap to find area of circle

#include<stdio.h>
#include<conio.h>

void main(){

	const float pi=3.14;
	float r;
	clrscr();
	printf("Enter the value of the radius:");
	scanf("%f",&r);
	printf("The area of the circle is %.2f",pi*r*r);
	getch();
}