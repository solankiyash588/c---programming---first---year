#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks :");
    scanf("%d",&marks);

    if(marks>=0 && marks <= 33)
    printf("FAIL");
    else if(marks>= 33 && marks <= 100)
    printf("PASS");
    else
    printf("wrong marks");
    return 0;
}