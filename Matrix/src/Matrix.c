/*
 ============================================================================
 Name        : Matrix.c
 Author      : Raj
 Version     :
 Copyright   : 
 Description :
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,n;
	n=10;

	for (i=1;i<=n;i++)
	{
	for (j=0;j<i;j++)
	{
			printf("* ");
		}
	printf("\n");
	}
	return EXIT_SUCCESS;
}
