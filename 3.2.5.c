#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int suma (const int* x,int* y)
{
    return *x+*y;
}

int main()
{
    int a=17;
    int b=9;
    printf("%d",suma(&a,&b));

    return 0;
}


