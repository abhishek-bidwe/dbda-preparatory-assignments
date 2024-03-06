/* Write a program to calculate a Factorial of a number. */
#include<stdio.h>
int fact(int n)     // function declaration and defination
{
    if(n>0)
    {
        n=n*fact(n-1);  // calculating Factorial
    }
    else
        return 1;
    return n;
}
int main()
{
    int num, factorial;
    printf("Enter a number = ");
    scanf("%d", &num);
    factorial = fact(num);
    //printf("Factorial of %d = %d",num, factorial);
    printf("\nFactorial of %d = ",num);
    for(int i=num;i>0;i--)
    {
        printf("%d * ", i);
    }
    printf("\b\b= %d", factorial);
    return 0;
}