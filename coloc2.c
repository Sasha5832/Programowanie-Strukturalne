#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

void wypisz(unsigned int n,int tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}
void zamiana_parzystych(unsigned n, int tab[])
{
    int temp;
    for(int i=0;i<n/2;i++)
    {
        if(tab[i]%2==0 && tab[n-1-i]%2==0)
        {
            temp=tab[i];
            tab[i]=tab[n-1-i];
            tab[n-1-i]=temp;
        }
    }
}

int main()
{
    int tab[7]={12,2,4,6,8,14,20};
    zamiana_parzystych(7,tab);
    wypisz(7,tab);
}
