#include<stdio.h>
#include<math.h>



int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int i;
    for(i=m/n*n+n;i<k;i=i+n)
    {
         printf("%d ",i);
    }

    return 0;
}
