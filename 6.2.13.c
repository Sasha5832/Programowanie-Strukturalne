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
void zsumuj (unsigned int n, unsigned int m, int t[][m])
{
    int i,j;
    int suma=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            suma=suma+t[i][j];
        }
    }
    printf("%d",suma);
}
int main()
{
    int tab[2][3] = {{1,2,3},{4,5,6}};
    int n =2;
    int m =3;

    wypisz2(n,m,tab);
    zsumuj(tab,n,m);
}
