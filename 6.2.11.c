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
int main()
{
    int tab[2][3] = {{1,2,3},{4,5,6}};
    int n =2;
    int m =3;
    wczytaj(tab,n,m);
    wypisz2(n,m,tab);
    zerujaca(n,m,tab);
    wypisz2(n,m,tab);



}
