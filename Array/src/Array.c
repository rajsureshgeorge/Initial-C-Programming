/*
 ============================================================================
 Name        : Array.c
 Author      : Raj
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[5],i;
	printf("enter value ");
	for (i=0;i<5;i++){
		scanf("%d ",&a[i]);
	}
	for (i=0;i<5;i++){
	printf("Entered Nummbers %d\n",a[i]);

	}
}
