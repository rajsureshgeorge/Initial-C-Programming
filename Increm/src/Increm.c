/*
 ============================================================================
 Name        : Increm.c
 Author      : Raj
 Version     :
 Copyright   : 
 Description :Increment and Decrement
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a,b=0;
	printf("Enter a Number");
	scanf("%d",&a);
	printf("2 Numbers are %d and %d\n",a,b);
	a=b++;
	printf("2 Numbers are %d and %d",a,b);


}
