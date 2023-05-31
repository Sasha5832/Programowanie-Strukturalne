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
int main()
{
    char napis1[50]= "abcfgwefadfew";
    wytnij(napis1,3,5);
    printf(napis1);

}
