#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

void wyczysc(char *napis)
{
    // zadanie 5.2.1
    napis[0]=0;
}
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
            wynik[j]=napis[i];
            j++;
        }
        i++;
    }
    return wynik;
}

bool porownaj(char *napis1, char *napis2)
{
    // zadanie 5.2.3
    if(napis1==napis2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(wchar_t));
    printf("%d\n", 'A');
    printf("%d\n", '!');
    printf("%d\n", '*');
    printf("%d\n", '2');
    printf("%d\n", '#');
    printf("%d\n", '"');
    int i;
    for(i=0;i<=127;i++)
    {
        printf("%d %c \n",i,i);
    }
    printf("%c\n", 1);
    char *napis1="pieczywko";
    char *napis2="pieczywko";
    printf(napis1);
    printf("\n");
    wyczysc(napis1);
    printf(napis1);
    printf("\n");
    printf(dlugosc(napis1));

}
