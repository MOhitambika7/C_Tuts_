#include<stdio.h>
int main()
{
    int P, T, R, SI;
    printf("Enter the principle amount:- ");
    scanf("%d", &P);

    printf("Enter the time in years:- ");
    scanf("%d", &T);

    printf("Enter the rate amount:- ");
    scanf("%d", &R);

    SI = (P*T*R)/100;
    printf("The value of simple interest is:- %d", SI);
    return 0;
}