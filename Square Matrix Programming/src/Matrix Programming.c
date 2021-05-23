/*
 ============================================================================
 Name        : Matrix.c
 Author      : Raj

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,limit,j;
			printf("Enter the Square Matrix size: ");
			scanf("%d",&limit);

			if (limit<=5){
			int temp[limit][limit];
			printf("Enter the Array Numbers");
			for (i=0;i<limit;i++)
			{
				for (j=0;j<limit;j++)
				{
					printf(":");
					scanf("%d",&temp[i][j]);
				}
			}
			printf("Entered Values:\n");
			for (i=0;i<limit;i++)
			{
				for (j=0;j<limit;j++)
				{
				printf("   %d\t",temp[i][j]);
				}
				printf("\n");

			}
			}
			else {
				printf("Matrix Size Exceeded - Only upto 5*5 Matrix");
			}
}
