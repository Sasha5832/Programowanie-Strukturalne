#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void wypisz(unsigned int n, int *tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",tab[i]);
    }
    printf("\n");
}
int suma(unsigned int n, int *tab)
{
    int i;
    int wynik=0;
    for(i=0;i<n;i++)
    {
        wynik=wynik + tab[i];
    }
    return wynik;
}
int suma_kwadratow(unsigned int n, int *tab)
{
    int i;
    int wynik=0;
    for(i=0;i<n;i++)
    {
        wynik=wynik + (tab[i]*tab[i]);
    }
    return wynik;
}
float srednia_liczba(unsigned int n, int *tab)
{
    int i;
    int wynik=0;
    for(i=0;i<n;i++)
    {
        wynik=wynik + tab[i];
    }
    return (float)(wynik)/n;
}
int main()
{
    int tablica2[]={7,1,5,-2};
    printf("%d\n",suma(4,tablica2));
    printf("%d\n",suma_kwadratow(4,tablica2));
    printf("%f\n",srednia_liczba(4,tablica2));

}
