#include<stdio.h>
#include<ctype.h> // For isDigit() function

int main()
{
    char character;
    printf("Enter a character: ");
    scanf("%c", &character);

    // Check the character is digit or not.
    if(isdigit(character)){
        printf("The character '%c' is a digit.\n", character);
    }
    else{
        printf("The character '%c' is not a digit.\n", character);
    }

    return 0;
}