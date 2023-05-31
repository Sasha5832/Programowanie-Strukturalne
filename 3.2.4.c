#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void zamien(int* x,int* y)
{
    if(*x>*y)
    {
    int t;
    t=*x;
    *x=*y;
    *y=t;
    }
}

int main()
{
    int a=17;
    int b=9;

    printf("%d\n",a);
    printf("%d\n",b);
    zamien(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}

