/*
 ============================================================================
 Name        : Switch.c
 Author      : Raj
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b,c;
	int d;
		printf("The Application For Selecting Vaccine\n");
		printf("Enter Your Choice\n");
		printf("1. Cowaxin \n2.Covishield \n3.Tutanota \n4.Cow Dung \nEnter What You Need:");
		scanf("%f",&c);
		if (c>4){
				printf("The Entered Number Is Not Available");
			}
		else {
			int d=c;
			switch(d){
			case 1:
				printf("You Will Survive \n You have chosen the best vaccine Available");
				break;
			case 2:
				printf("You May or May not Survive \nYou have chosen the Second best vaccine Available");
				break;
			case 3:
				printf("You Will Survive \nYou have chosen the third best vaccine Available");
				break;
			case 4:
				printf("You Will Die by Taking the Vaccine \nYou have chosen the WORST");
				break;
			default:
				printf("fool");
				break;
			}
		}
}
