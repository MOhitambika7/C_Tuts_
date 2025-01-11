#include<stdio.h>
int main()
{
    float a, b, c, AVG;
    printf("Enter the number a:- ");
    scanf("%f", &a);

    printf("Enter the second number b:- ");
    scanf("%f", &b);

    printf("Enter the number c:- ");
    scanf("%f", &c);

    AVG = (a+b+c)/2;
    printf("The average of three numbers is:- %f", AVG);
    return 0;
}