#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks :");
    scanf("%d",&marks);

    if(marks < 30 && marks >= 0)
    printf(" Grade C\n");
     if(marks >= 30 && marks < 70)
    printf("Grade B\n");
    if(marks >= 70 && marks < 90)
    printf("Grade A");
    if(marks>=90 && marks < 100)
    printf("Grade A+");
    
    
    return 0;
}