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


int main()
{
    int tablica[4];
    int tabliczka[100];
    printf("%d\n",sizeof(tabliczka));
    tablica[0]=1;
    tablica[1]=7;
    tablica[2]=4;
    tablica[3]=8;
    wypisz(4, tablica);

    int tablica2[]={7,9,51,-208};
    printf("%d\n",sizeof(tabliczka)/sizeof(int));  // prawidlowy rozmiar tablicy
    wypisz(4,tablica2);
    int *tabb=malloc(4*sizeof(int));
    tabb[0]=1;
    tabb[1]=3;
    tabb[2]=5;
    tabb[3]=7;
    wypisz(4, tabb);
    return 0;
}
