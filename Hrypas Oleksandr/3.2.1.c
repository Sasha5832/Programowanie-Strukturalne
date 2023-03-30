#include<stdio.h>
#include<math.h>
int minimum (int* x, int* y)
{
    if(*x>*y)
    return *y;
    return *x;
}

int main()
{
    int x=25;
    int y=24;
    printf("%d",minimum(&x,&y));
    return 0;
}
