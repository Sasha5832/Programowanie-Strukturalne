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

void odwroc2(unsigned int n, unsigned int m, int t[][m])
{
    int i,j,pom;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m/2;j++)
        {
            pom=t[i][j];
            t[i][j]=t[i][m-1-j];
            t[i][m-1-j]=pom;
        }
    }
}

int main()
{
    int** tablica = alokuj(2,3);
    wczytaj(tablica,2,3);
    printf("\n");
    wypisz2(tablica,2,3);
    odwroc2(2, 3, tablica);
    printf("\n");
    wypisz2(tablica,2,3);


}
