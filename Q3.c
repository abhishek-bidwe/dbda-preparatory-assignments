/*Write a program to calculate Fibonacci Series up to n numbers*/
#include<stdio.h>
void Fibonacci(int n); //function declaration
int main()
{
    int num;
    printf("Enter Nth term for fibonacci series\n");
    scanf("%d", &num);
    Fibonacci(num);
    return 0;
}
void Fibonacci(int n)
{
    printf("0\t1\t");
    int n1=0;
    int n2=1;
    int n3;
    for(int i=0;i<(n-2);i++)
    {
        n3=n1+n2;
        printf("%d\t", n3);
        n1=n2;
        n2=n3;
    }
}