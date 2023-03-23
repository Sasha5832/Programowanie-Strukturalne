#include<stdio.h>
#include<math.h>
// zadanie 2.2.24

int wyraz(int n)
{
    int wynik=0;
    if (n==0||n==1)
        return 1;
    for (int i=0;i<n;i++)
    {
        wynik=wynik+wyraz(i);
    }
    return wynik;
}
int main()
{

    int n;
    for(n=0;n<10;n++)
    printf("wynik: %d\n",wyraz(n));
    return 0;
}
