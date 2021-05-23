/*
 ============================================================================
 Name        : functions.c
 Author      : Raj
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sum();
int main(void) {
	int num1,num2;
	printf("Enter 2 Numbers");
	scanf("%d%d",&num1,&num2);
	sum(num1,num2);
	return EXIT_SUCCESS;
}
void sum(int a,int b)
{
	int summ;
	summ=a+b;
	printf("%d",summ);
}
