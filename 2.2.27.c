
#include<stdio.h>
#include<math.h>
// zadanie 2.2.27

int wyraz(int n,int m)
{
   if(m==0)
    return n;
   if(n==0)
    return m;
   return wyraz(n-1,m)+wyraz(n,m-1)+wyraz(n-1,m-1);
}
int main()
{

    printf("wynik: %d\n",wyraz(5,7));
    return 0;
}
