// wap to find perimeter of circle

#include<stdio.h>
#include<conio.h>

void main(){

	const float pi=3.14;
	float r;
	clrscr();
	printf("Enter the value of r:");
	scanf("%f",&r);
	printf("The Perimeter of circle is %.2f",2*pi*r);
	getch();
}