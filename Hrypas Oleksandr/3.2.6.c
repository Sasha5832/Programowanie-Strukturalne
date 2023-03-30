#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void przypisz (int n, int* w)
{
    *w=n;
}

int main()
{
    int x=5;
    przypisz(3,&x);
    printf("%d",x);
    return 0;
}



