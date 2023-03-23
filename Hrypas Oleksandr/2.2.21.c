#include<stdio.h>
#include<math.h>
// zadanie 2.2.21

int wyraz(int n)
{
    if (n==0)
        return 1;
    return 2* wyraz(n-1)+5;
}
int main()
{

    int n;
    for(n=0;n<10;n++)
    printf("wynik: %d\n",wyraz(n));

    return 0;
}


