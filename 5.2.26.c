#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<wchar.h>
// zadanie 5.2.13

void maleduze(char* napis)
{
    int i;
    for(i=0;napis[i]!=0;i++)
    {
        napis[i]=towupper(napis[i]);
    }
}
int main()
{
    char napis1[50]= "arbuz";
    maleduze(napis1);
    printf(napis1);

}


