#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int dlugosc(char *napis)
{
    int i=0;
    while(napis[i]!=0)
    {
        i++;
    }
    return i;
}


int porownaj(char *napis1, char *napis2)
{
    int i=0;
    int d11=dlugosc(napis1);
    int d12=dlugosc(napis2);
    if(d11==d12)
    {
         for(i=0;i<=d12-1;i++)
         {
             if(napis1[i]!=napis2[i])
             {
                 return 0;
             }
             else
             {

             }
             return 1;
         }
    }
    else
    {
        return 0;
    }
}

int porownaj2(char *nap1, char *nap2)
{
    int i;
    for(i=0;(nap1[i]!=0)&&(nap2[i]!=0);i++)
        if(nap1[i]!=nap2[i])
            return(nap1[i]<nap2[i]?1:i);
    if (nap1[i!=0])
        return 0;
    else
        return 1;
}

int main()
{
    char *napis1="pietzyjko";
    char *napis2="pieczywko";

    printf("%d\n",porownaj(napis1,napis2));

}

