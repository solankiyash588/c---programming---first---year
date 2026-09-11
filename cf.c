#include<stdio.h>
int main()
{
    float celsuis,fahrenheit;
    printf(" Enter temprature in celsuis:");
    scanf("%f",&celsuis);

    fahrenheit = 1.8 * celsuis + 32;
    printf(" Tmparature in fahrenheit = %.2f\n",fahrenheit);
    return 0;
}