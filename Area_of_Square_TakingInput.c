#include <stdio.h>
int main()
{
    int side, Area;
    printf("Enter the side of the square:- ");
    scanf("%d", &side);

    Area = side * side;
    printf("The area of the square is:- %d\n ", Area);
    return 0;
}