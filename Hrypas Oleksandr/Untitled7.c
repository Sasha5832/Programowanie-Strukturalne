
#include<stdio.h>
#include<math.h>



int main()
{
    int n;
    scanf("%d",&n);
    int x,y,tmp;
    x=1;
    y=1;
    int i;
    for(i=1;i<=n;i++)
    {
        tmp=x;
        x=y;
        y=y+tmp;

    }
    printf("%d ",tmp);
    return 0;
}

