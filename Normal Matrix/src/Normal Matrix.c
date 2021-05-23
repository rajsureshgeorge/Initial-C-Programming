/*
 ============================================================================
 Name        : Normal.c
 Author      : Raj

 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,limit,j,row,column;
	printf("Program For Matrix\n");
			printf("Enter the Matrix row: ");
			scanf("%d",&row);
			printf("Enter the Matrix column: ");
			scanf("%d",&column);
			if (row<=5)
			{
				if(column<=5)
				{
			int temp[row][column];
			printf("Enter the Array Numbers");
			for (i=0;i<row;i++)
				{
				for (j=0;j<column;j++)
				{
					printf(":");
					scanf("%d",&temp[i][j]);
				}
				}
			printf("Matrix:\n");
			for (i=0;i<row;i++)
				{
				for (j=0;j<column;j++)
				{
				printf("   %d\t",temp[i][j]);
				}
				printf("\n");
				}
			}
				else{
					printf("Column Size Exceeded - Only 5 Column Matrix Available");
			}
			}
			else {
				printf("Row Size Exceeded - Only 5 Column Matrix Available");
			}
}
