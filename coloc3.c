#include <stdio.h>
#include <stdlib.h>

void pokerowelove(int a, int b, int c, int d)
{
    int count[100]={0};
    count[a]++;
    count[b]++;
    count[c]++;
    count[d]++;

    int para=0;
    int trojka=0;
    int czworka=0;

    for(int i=0; i<=100;i++)
    {
        if(count[i]==2)
        {
            para++;
        } else if (count[i]==3)
        {
            trojka++;
        } else if (count[i]==4)
        {
            czworka++;
        }
    }
    if(czworka==1)
    {
        printf("Kareta\n");
    } else if(trojka==1)
    {
        printf("trojka\n");
    } else if(para==1)
    {
        printf("para\n");
    } else if(para==2)
    {
        printf("dwie pary\n");
    }
    else
    {
        printf("nic");
    }

}

int main()
{
    int x=25, y=25, z=25, w=25;
    printf("Wpisz 4 liczby mniejsze od 100: ");
    scanf("%d%d%d%d",&x,&y, &z, &w);
    pokerowelove(x, y, z, w);
}
