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

void zeruj(unsigned int n, int *tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab[i]=0;
    }

}
void indeksowanie(unsigned int n, int *tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab[i]=i;
    }

}
void podwoicz(unsigned int n, int *tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab[i]=tab[i]*2;
    }

}
/*void podwoj_i_zeroj(unsigned int n, int *tab)
{
    int i;
    int a;
    a=n/2;
    a=(n+1)/2;

    for(i=0;i<n/2;i++)
    {
        tab[i]=2*tab[i];
    }
    for(i=n/2+1;i<n;i++)
    {
        tab[i]=0;
    }

}
*/
void modul(unsigned int n, int *tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        tab[i]=abs(tab[i]);
    }
}
int main()
{
    int tablica2[]={7,9,51,-208};
    wypisz(4,tablica2);
    podwoicz(4,tablica2);
    wypisz(4,tablica2);
    indeksowanie(4,tablica2);
    wypisz(4,tablica2);
    zeruj(4,tablica2);
    wypisz(4,tablica2);
    /*int tablicanieparzysta[]={5,9,2,4,3};
    podwoj_i_zeroj(5,tablicanieparzysta);
    wypisz(5,tablicanieparzysta);
    */
    int tablica3[]={7,9,51,-208};
    modul(4,tablica3);
    wypisz(4,tablica3);


}
