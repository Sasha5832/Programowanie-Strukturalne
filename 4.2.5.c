#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
void wypisz(unsigned int n, bool *tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d, %d\t",i,tab[i]);
    }
    printf("\n");
}
void sito_Eratostenesa(unsigned int n)
{
    bool liczby[n];
    for(int i=0;i<n;i++)
    {
        liczby[i]=true;
    }
    int j,k,i;
    int wynik;
    for(j=2;j<n;j++)
    {
        for(k=2*j;k<n;k=k+j)
        {
            liczby[k]=false;
        }

    }
    wypisz(n,liczby);

}

int sito_Eratostenesa2(unsigned int n)
{
    bool liczby[n];
    for(int i=0;i<n;i++)
    {
        liczby[i]=true;
    }
    int j,k,i;
    int wynik;
    for(j=2;j<n;j++)
    {
        for(k=2*j;k<n;k=k+j)
        {
            liczby[k]=false;
        }

    }
    for(i=2;i<n;i++)
    {
        if(liczby[i])
        {
            wynik=wynik+1;
        }
    }
    return wynik;

}


int main()
{
    int tablica2[]={7,1,5,2};
    sito_Eratostenesa(100);

    printf("%d",sito_Eratostenesa2(1000));
}
