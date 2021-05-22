/*
 ============================================================================
 Name        : loops.c
 Author      : Raj
 Version     :
 Copyright   : 
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,sum=0,i;
		printf("Enter a Number");
		scanf("%d",&a);
	for(i=2;i<a/2;i++)
	{
		if (a%i==0){
			sum=1;
			break;
		}

	}
	if (sum==0){
		printf("Prime");
	}
	else{
		printf("Not Prime");
	}
}
