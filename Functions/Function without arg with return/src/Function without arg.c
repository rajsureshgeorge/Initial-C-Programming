/*
 ============================================================================
 Name        : Function.c
 Author      : Raj
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void)
{
	int output;
	output=sum();
	printf("sum is %d",output);
	return EXIT_SUCCESS;
}
int sum(int a,int b)
{
	int num1,num2;
	printf("Enter 2 Numbers");
	scanf("%d%d",&num1,&num2);
	int summ;
	summ=num1+num2;
	return(summ);
}
