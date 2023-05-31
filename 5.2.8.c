#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>


void dodawanie(char* napis, char* wynik)
{
    int i,j;
    for(i=0;napis[i]!=0; i++)
    {
        if(napis[i]>=48&&napis[i]<=56)
        {
            if(napis[i]==57)
            {
                napis[i]=napis[i]-10;
            }
            napis[i]=napis[i]+1;
        }
    }
}

int main()
{
    printf("\n");
    char znaki[50]="ala ma 8969 korow 2 braci i 9 siostr";
    char plusjeden[60];
    dodawanie(znaki,plusjeden);
    printf(znaki);
    printf(plusjeden);
}
