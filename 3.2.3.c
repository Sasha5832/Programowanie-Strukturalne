#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void zamien(int* x,int* y)
{
    int* t=malloc(sizeof(int));
    *t=*x;
    *x=*y;
    *y=*t;
}

int main()
{
    int a=17;
    int b=9;
    printf("%d\n",sizeof(int));
    printf("%d\n",a);
    printf("%d\n",b);
    zamien(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}
