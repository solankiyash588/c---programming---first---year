#include<stdio.h>
int main()
{
    char  character;
    printf("Enter a character :");
    scanf("%c",&character);

    if(character >='a' && character <= 'z')
    printf(" %c is lower case character!",character);
    else if( character >= 'A' && character <= 'Z')
    printf("  %c is higher case character",character);
    else
    printf("this is not character!");
    
    return 0;
}