#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<wchar.h>

void wypisz2(unsigned int n, unsigned int m, int t[][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void wczytaj (int** t, unsigned int n, unsigned int m)
{
    int i,j;
        for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&t[i][j]);
        }
    }
}
void zerujaca (unsigned int n, unsigned int m, int t[][m])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            t[i][j]=0;
        }
    }
}
int** alokuj(unsigned int n, unsigned int m)
{
     int **t=malloc(n*sizeof(int*));
     int i;
     for(i=0;i<n;i++)
     {
         t[i]=malloc(m*sizeof(int));
     }
     return t;
}

void przepisac(int **pirwsza, int **druga, unsigned int n, unsigned int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            druga[i][j]=pirwsza[i][j];
        }
    }

}
int main()
{
    int tablica = alokuj(3,4);
    int tab = alokuj(3,4);
    wczytaj(tablica,3,4);
    przepisac(tablica, tab, 3, 4);
    wypisz2(5,3,tab);

}

