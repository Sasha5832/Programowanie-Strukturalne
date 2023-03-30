#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int* rezerwuj ()
{
    return malloc(sizeof(int));
}

int main()
{
    int* wsk=rezerwuj();
    printf("%p\n",wsk);
    printf("%d",*wsk);
    return 0;
}




