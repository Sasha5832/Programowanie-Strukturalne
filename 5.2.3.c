#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>



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
                return 1;
            }
        }
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *napis1="pieczywko";
    char *napis2="pieczywko";

    printf(porownaj(napis1,napis2));

}
