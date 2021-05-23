/*
 ============================================================================
 Name        : Functions.c
 Author      : Raj

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum();
int main(void) {
	sum();
	return EXIT_SUCCESS;
}

void sum(){
	int num1,num2,sum;
	printf("Enter 2 Numbers");
	scanf("%d%d",&num1,&num2);
	sum =num1+num2;
	printf("sum is %d",sum);
}
