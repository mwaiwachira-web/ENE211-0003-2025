#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare variable
    double area;
    const double pi=3.142;
    double r;
    //request radius
    printf("Please provide radius\n");//output
    scanf("%lf", &r);//input
    area=pi*r*r;
    printf("The area is %lf",area);
    return 0;
}
