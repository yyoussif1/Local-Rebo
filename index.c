#include <stdio.h>

int main ()
{
    int x =50 , y=40 , sum;

    printf("Hello !\n");
    sum = add( x , y );
    printf("%d\n" , sum);

    return 0;
}

int add(int a , int b)
{
    return a/b;
}