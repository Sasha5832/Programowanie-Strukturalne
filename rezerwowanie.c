#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>


void zamien_spacje(char* napis)
{
    int i;
    for(i=0; napis[i]!=0; i++)
    {
        if(napis[i]==32)
        {
            napis[i]=95;
        }
    }
}

int main()
{
    char napis[50]= "tu chcemy zamienic spacje";
    printf(napis);
    printf("\n");
    zamien_spacje(napis);
    printf(napis);
}
