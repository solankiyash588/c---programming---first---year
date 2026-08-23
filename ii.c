#include<stdio.h>
int main()
{
     char character;
    printf(" Enter a character :");
    scanf(" %c",&character);

    if( (character >= 'a') && (character <= 'z') || (character >= 'A') && (character <= 'Z') )
    printf("%c is Alphabet\n ",character);
    else
    printf("%c is not Alphabet\n",character);
    return 0;
}