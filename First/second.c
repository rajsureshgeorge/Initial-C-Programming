#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
    const int x=2;
    double y=2.9;
    y=PI;
    printf("x=%d\n",x);
    printf("y=%lf\n",y);

    printf("the Adrress of y %d",&y);

}
