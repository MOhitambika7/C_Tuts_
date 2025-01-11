#include <stdio.h>
int main()
{
    float radius, Area;
    printf("Enter the radius of the circle:- ");
    scanf("%f", &radius);

    Area = 3.14 * radius * radius;
    printf("The area of the circle is:- %f\n ", Area);
    return 0;
}