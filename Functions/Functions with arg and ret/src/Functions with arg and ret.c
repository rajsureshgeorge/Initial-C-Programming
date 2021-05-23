/*
 ============================================================================
 Name        : Functions.c
 Author      : Raj

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum(int,int);
int main(void)
{
	int num1,num2,output;
	printf("Enter 2 Numbers");
	scanf("%d%d",&num1,&num2);
	output=sum(num1,num2);
	printf("sum is %d",output);
	return EXIT_SUCCESS;
}
int sum(int a,int b)
{
	int summ;
	summ=a+b;
	return(summ);
}
