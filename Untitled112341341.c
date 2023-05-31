#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>


int dlugosc(char *napis)
{
    //zadanie 5.2.2
    char* wynik=malloc(100*sizeof(char));
    int i=0;
    int j=0;
    while(napis[i]!=0)
    {
        if(napis[i]!=32)
        {
            wynik[i]=napis[i];
        }
        else
        {
            wynik[i]=95;
        }
        i++;
    }
    wynik[i]=0;
    return wynik;
}
void dlugosc2(char *napis)
{
    int i=0;
    while(napis[i]!=0)
    {
        if(napis[i]==32)
        {
            napis[i]=95;
        }
        i++;
    }
}
int main()
{
    char *napis="programowamie to bardzo przyjemny przedmiot";

    printf(dlugosc(napis));
    printf("\n");
    dlugosc2(napis);
    printf(napis);

}
