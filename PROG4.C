//wap to find simple interst

#include<stdio.h>
#include<conio.h>

void main(){

	float p,r,n;
	clrscr();
	printf("Enter the value of p:");
	scanf("%f",&p);
	printf("Enter the value of r:");
	scanf("%f",&r);
	printf("Enter the value of n:");
	scanf("%f",&n);
	printf("The simple interst is %.2f",p*r*n/100);
	getch();
}