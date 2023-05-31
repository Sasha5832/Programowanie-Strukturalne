#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<wchar.h>

void wypisz2(int **t, unsigned int n, unsigned int m)
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

void wiersze_w_dol(int **t, unsigned int n, unsigned int m)
{
    int i,j,pom;
    for(j=0;j<m;j++)
    {
        pom=t[n-1][j];
        for(i=n-1;i>0;i--)
        {
            t[i][j]=t[i-1][j];
        }
        t[0][j]=pom;
    }
}

int main()
{
    int** tablica = alokuj(2,3);
    wczytaj(tablica,2,3);
    printf("\n");
    wypisz2(tablica,2,3);
    wiersze_w_dol(2, 3, tablica);
    printf("\n");
    wypisz2(tablica,2,3);


}
