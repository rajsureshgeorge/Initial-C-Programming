/*
 ============================================================================
 Name        : Sum.c
 Author      : Raj
 Version     :
 Copyright   : 
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100];
	int i,limit,sum=0;
	printf("Enter the Array Limit: ");
	scanf("%d",&limit);
	printf("Enter the Array Numbers");
	for (i=0;i<limit;i++){
	printf(": ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<limit;i++){
		sum=sum+a[i];

	}
	printf("\nsum is %d\n",sum);
	return EXIT_SUCCESS;
}
