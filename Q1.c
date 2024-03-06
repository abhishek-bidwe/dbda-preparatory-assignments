/*Write a program to input n numbers on command line argument and 
calculate maximum of them.
*/

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int a = 0;
    int b;
    for(int i=1;i<argc;i++)
    {
        if(a<atoi(argv[i]))
        {
            a=atoi(argv[i]);
        }
    }
    printf("The Maximun number is %d", a);

    b = atoi(argv[1]);
    for(int i=2;i<argc;i++)
    {
        if(b>atoi(argv[i]))
        {
            b=atoi(argv[i]);
        }
    }
    printf("\nThe Minimum number is %d", b);
    return 0;
}