#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>


void sklej(char* napis1, char* napis2, char* napis3)
{
    int i,j;
    for(i=0; napis1[i]!=0; i++)
    {
        napis3[i]=napis1[i];
    }
    for(j=0;napis2[j]!=0;j++,i++)
    {
        napis3[i]=napis2[j];
    }
    napis3[i]=0;
}

void male_na_duze(char* napis)
{
    int i;
    for(i=0;napis[i]!=0; i++)
    {
        if(napis[i]>=97&&napis[i]<=122)
        {
            napis[i]=napis[i]-32;
        }
    }
}

int main()
{
    char* napis1= "Hello ";
    char* napis2= "World";
    char* napis3[50];
    sklej(napis1,napis2,napis3);
    printf(napis3);
    printf("\n");
    char znaki[50]="ala MA KOTA duze";
    male_na_duze(znaki);
    printf(znaki);

}

