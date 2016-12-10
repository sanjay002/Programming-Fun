/*
Student Name:Sanjay Adhikari
Subject:Programming Fundamental
Lab Sheet No:07
Progam:WAP to enter marks of seven subjects
Date:28 Nov,2016
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
 
int main()
{
	int height,base,area;
	
	
	printf("enter the height of triangle\n");
	scanf("%d",&height);
	
	
	printf("enter the base of triangle\n");
	scanf("%d",&base);
	
	area = 0.5*height*base;

	
	printf("area of triangle is :: %d",area);
	getch();
	return 0;
}
