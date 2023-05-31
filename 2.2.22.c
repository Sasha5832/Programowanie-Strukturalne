#include<stdio.h>
#include<math.h>
// zadanie 2.2.22

int wyraz(int n)
{
    if (n==0||n==1)
        return 1;
    return wyraz(n-1)+2*wyraz(n-2)+3;
}
int main()
{

    int n;
    for(n=0;n<10;n++)
    printf("wynik: %d\n",wyraz(n));

    return 0;
}


