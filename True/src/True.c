#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;
	printf("The Application For Basic Maths\n");
	printf("Enter Your Choice\n");
	printf("1. Addition \n2.Substraction \n3.Multiplication \n4.division \nEnter What You Need:");
	scanf("%d",&c);
	if (c>4){
		printf("The Entered Number Is Not Available");
	}
	else {
	printf("Enter 2 Number");
	scanf("%d%d",&a,&b);
	if (c==1){
		c=a+b;
		printf("Sum is %d",c);
	}
	else if(c==2){
		c=a-b;
		printf("Sub is %d",c);
	}

	else if(c==3){
		c=a*b;
		printf("mul is %d",c);
	}
	else if(c==4){
		c=a/b;
		printf("div is %d",c);
	}
	else{
		printf("Error 401!!!! \nNot Found");
	}

	}
}
