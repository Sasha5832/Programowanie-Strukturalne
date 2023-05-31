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
int index_maksemalnej_srednej (unsigned int n, unsigned int m, int t[][m])
{
    int i,j;
    int suma;
    int maksimum;
    int index;
    for(i=0;i<n;i++)
    {
        suma=0;
        for(j=0;j<m;j++)
        {
            suma=suma+t[i][j];
        }

        if(i==0)
        {
            maksimum=suma;
            index=0;
        }
        if(maksimum<suma)
        {
            index=i;
            maksimum=suma;
        }

    }
    return index;
}
int main()
{
    int tab[5][3] = {{4,7,6},{5,2,9},{5,20,9},{5,12,9},{15,2,9}};
    int n =2;
    int m =3;
    wypisz2(5,3,tab);
    printf("%d",index_maksemalnej_srednej(5,3,tab));

}
