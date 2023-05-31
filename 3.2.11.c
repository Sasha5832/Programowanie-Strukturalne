#include<stdio.h>
#include<math.h>
#include<stdlib.h>

// zadanie 3.2.11
int* rezerwuj (int n)
{
    return malloc(n*sizeof(int));
}

int main()
{
    int* wsk=rezerwuj(10);
    printf("%p\n",wsk);
    printf("%d",*wsk);
    return 0;
}
