//Find out the area of a triangle:
#include<stdio.h>
int main()
{
    float base;
    float height;
    float area;

    printf("Enter the value of base:");
    scanf("%f", &base);

    printf("Enter the value of height:");
    scanf("%f", &height);

    area = 0.5* base* height;
    printf("The area is : %f", area);

    return 0;

}