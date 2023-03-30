#include<stdio.h>
#include<math.h>

int main()
{
    int liczba=-505;
    printf("wartosc %d\n", liczba);
    printf("Adres  %p\n\n", &liczba);

    int *wskaznik=&liczba;
    printf("wartosc %d\n", liczba);
    printf("Adres  %p\n\n", &liczba);
    printf("Adres w wskazniku  %p\n", wskaznik);
    printf("Wskazywana wartosc  %d\n", *wskaznik);


    int i=0;
    const int *a=&i;
    int * const b=&i;
    int const * const c=&i;

    *b=1;
    a=b;
    a=&liczba;
}
