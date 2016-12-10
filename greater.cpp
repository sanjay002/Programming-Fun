/*
Student Name:Sanjay Adhikari
Subject:Programming Fundamental
Lab Sheet No:07
Progam:WAP to enter marks of seven subjects
Date:28 Nov,2016
*/
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c;
	printf("enter first number\n");
	scanf("%d",&a);
	printf("enter second number\n");
	scanf("%d",&b);
		printf("enter third number\n");
	scanf("%d",&c);
	
	if(a > b && a>c){
		
		printf(" ais gretart");
		
	}else if (b>a && b>c){
		printf("b is greater");
		
	}else{
		printf("c is greATER");
	}
	
}
