#include<stdio.h>
#include<math.h>
#include<stdlib.h>


// zadanie 4.2.4


void wypisz(unsigned int n, int *tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t",tab[i]);
    }
    printf("\n");
}
float srednia_geometryczna(unsigned int n, int *tab)
{
    int i;
    int wynik=1;
    for(i=0;i<n;i++)
    {
        wynik=wynik * tab[i];
    }
    return pow(wynik,1.0/n);
}
float srednia_harmoniczna(unsigned int n, int *tab)
{
    int i;
    float wynik=0;
    for(i=0;i<n;i++)
    {
        wynik=wynik+1.0/tab[i];
    }
    return n/wynik;
}
int main()
{
    int tablica2[]={7,1,5,2};

    printf("%.2f\n",srednia_geometryczna(4,tablica2));
    printf("%.2f\n",srednia_harmoniczna(4,tablica2));

}
