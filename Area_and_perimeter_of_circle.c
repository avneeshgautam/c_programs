// To find Area and perimeter of circle

#include<stdio.h>
int main()
{
    float r,area,perimeter;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);

    // AREA OF CIRCLE
    area = 3.14*r*r;
    perimeter = 2*3.14*r;

    // printing value of area and circle

    printf("Area of circle = %f\n Perimeter of circle =%f",area,perimeter);
    return 0;
}
