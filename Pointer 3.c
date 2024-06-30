#include<stdio.h>

void swap(int *num1 , int *num2)
{
    int temp ;
    temp = *num1 ;
    *num1 = *num2 ;
    *num2 = temp ;
}

int main()
{
    int num1 , num2 ;

    printf("Enter first number please\n");
    scanf("%d" , &num1);

    printf("\nEnter second number please\n");
    scanf("%d" , &num2);

    printf("\nBefore swapping two numbers are %d & %d\n" , num1 , num2);


    printf("\nAfter swapping two numbers are %d & %d\n" , num1 , num2);
     swap(&num1 , &num2);

    return 0 ;
}
