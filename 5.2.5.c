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

void przepisz(char *a, char *b)
{
   int i;
   for(i=0;i<dlugosc(a);i++)
   {
       b[i]=a[i];
   }
   b[dlugosc(a)]=0;
}

int main()
{
    char* a="arbuz";
    char b[20]="arbiter";
    przepisz(a,b);
    printf("%d\n",a);
    printf("%d\n",b);
}
