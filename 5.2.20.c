#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
// zadanie 5.2.13

char *godzina(int* godz, int* min, int*sek)
{
    char *wynik=malloc(9*sizeof(char));
    sprintf(wynik,"%02d:%02d:%02d",godz,min,sek);
    return wynik;
}
int main()
{
    int godz=6;
    int min=32;
    int sek=4;

    printf(godzina(godz,min,sek));

}

