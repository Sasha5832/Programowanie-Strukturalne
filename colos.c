#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

void wypisz(unsigned int n, int *tab)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",tab[i]);
    }
    printf("\n");
}


void unikalne(int n,int *tab)
{
    int licznik=0;
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(tab[i]==tab[j])
                    licznik=licznik+1;
            }
            if(licznik==1)
                printf("%d ",tab[i]);
            licznik=0;
        }
}


int main()
{
    int tab[4]={2,5,2,6};
    unikalne(4,tab);
}
