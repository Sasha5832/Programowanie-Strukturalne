
#include<stdio.h>
#include<math.h>
// zadanie 2.2.26

int wyraz(int n)
{
    int wynik=0;
    if (n<3)
        return 1;
    if(n%3==0)
    {
        return wyraz(n-1)+wyraz(n-2);
    }
    if(n%3==1)
    {
        return 5*wyraz(n-1)+4;
    }
    return wyraz(n-1)+1;
}
int main()
{

    int n;
    for(n=0;n<10;n++)
    printf("wynik: %d\n",wyraz(n));
    return 0;
}

