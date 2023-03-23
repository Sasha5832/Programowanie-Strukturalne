#include<stdio.h>
#include<math.h>
int adres_minimum (int* x, int* y)
{
    if(*x>*y)
    return y;
    return x;
}

int main()
{
    int a=17;
    int b=9;
    printf("%p\n",&a);
    printf("%p\n",&b);

    printf("%p",adres_minimum(&a,&b));
    return 0;
}
