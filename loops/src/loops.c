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
		//printf("2 Numbers are %d and %d\n",a,b);
		//a=b++;
		//printf("2 Numbers are %d and %d",a,b);
	for(i=0;i<=a;i++)
	{
		if (i%2==0){
			printf("%d",i);
		}
		else{
	printf(".");
		}
	}
}
