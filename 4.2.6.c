#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

void wypisz(unsigned int n, int *tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",tab[i]);
    }
    printf("\n");
}

void przepisz(unsigned int n, int *tab1, int *tab2)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab2[i]=tab1[i];
    }

}
void przepisz_odwrotnie(unsigned int n, int *tab1, int *tab2)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab2[i]=tab1[n-1-i];
    }

}

int main()
{
    int tablica[]={2,8,10,15};
    int tablica2[]={5,3,17,13};
    wypisz(4,tablica);
    wypisz(4,tablica2);
    przepisz(4,tablica,tablica2);
    wypisz(4,tablica);
    wypisz(4,tablica2);
    przepisz_odwrotnie(4,tablica,tablica2);
    wypisz(4,tablica);
    wypisz(4,tablica2);

}
