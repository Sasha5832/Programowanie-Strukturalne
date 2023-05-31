#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
// zadanie 5.2.13

void wytnij2(char* napis1, char* napis2)
{
    int i,dl;
    for(dl=0; napis2[dl]!=0; dl++)
    {
        for(i=0;napis1[i]!=0;i++)
        {
           if(porownaj(napis1,napis2,i))
           {
               wytnij(napis1,i,i+dl-1);
               return;
           }
        }

    }
}
int main()
{
    char napis1[50]= "arbuz";
    char napis2[50]= "arbit";
    wytnij2(napis1,napis2);
    printf(napis1);

}
