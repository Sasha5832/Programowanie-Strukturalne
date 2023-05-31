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
}

int main()
{
    int i,j;
    int n =2;
    int m =2;
    int t[2][2]={{1,4},{5,2}};
    wypisz2(n,m,t);

}
