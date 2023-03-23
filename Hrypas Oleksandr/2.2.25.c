
#include<stdio.h>
#include<math.h>
// zadanie 2.2.25

int wyraz(int n)
{
    int wynik=0;
    if (n==0||n==1)
        return 1;
    if (n%2==0)
    {
        return wyraz(n-1)+n;
    }

    return wyraz(n-1)*n;
}
int main()
{

    int n;
    for(n=0;n<10;n++)
    printf("wynik: %d\n",wyraz(n));
    return 0;
}
