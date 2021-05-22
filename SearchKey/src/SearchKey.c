/*
 ============================================================================
 Name        : SearchKey.c
 Author      : Raj
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100];
		int i,limit,searchkey=0,flag=0;
		printf("Enter the Array Limit: ");
		scanf("%d",&limit);
		printf("Enter the Array Numbers");
		for (i=0;i<limit;i++)
		{
		printf(": ");
			scanf("%d",&a[i]);
		}
		printf("Enter Search Key:");
		scanf("%d",&searchkey);

		for(i=0;i<limit;i++)
		{
			if (searchkey==a[i])
			{
				printf("Found at %d position",i+1);
				flag=1;
				break;
			}
		}
		if (flag==1)
		{
			printf("\n Value %d was there at %d postion",a[i],i+1);

		}
		else
		{
			printf("Not Found");
		}
	return EXIT_SUCCESS;
}
