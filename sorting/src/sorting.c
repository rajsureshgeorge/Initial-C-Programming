/*
 ============================================================================
 Name        : sorting.c
 Author      : Raj

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100];
			int i,limit,j,temp;
			printf("Enter the Array Limit: ");
			scanf("%d",&limit);
			printf("Enter the Array Numbers");
			for (i=0;i<limit;i++)
			{
			printf(": ");
				scanf("%d",&a[i]);
			}
			for(i=0;i<limit-1;i++)
			{
				for (j=i+1;j<limit;j++)
				{
					if(a[i]>a[j]){
						temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			printf("Sorted\n");
			for (i=0;i<limit;i++)
						{
						printf("%d\t",a[i]);
						}
}
