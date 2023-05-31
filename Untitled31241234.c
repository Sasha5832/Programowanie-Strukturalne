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

int porownaj(char *nap1, char *nap2)
{
    int i;
    for(i=0;nap1[i]!=0 && nap2[i]!=0;i++)
    {
        if(nap1[i]!=nap2[i])
        {
            if(nap1[i]<nap2[i])
            {
                return 1;
            }
            else if(nap1[i]>nap2[i])
            {
                return 0;
            }
        }
    }
    if(nap1[i]!=0)
    {
        return 0;
    }
        if(nap2[i]!=0)
    {
        return 0;
    }
}

int main()
{
    printf("%d\n",porownaj("arbiter","arbuz"));
    printf("%d\n",porownaj("arbiter","arbiter"));
    printf("%d\n",porownaj("sama","sam"));
}
