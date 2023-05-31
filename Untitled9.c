#include<stdio.h>
#include<math.h>



int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int i=0;
    int s;
    for(i;i<=y;i++)
    {
        if((x%i==0)&&(y%i==0))
        {
            s=i;
        }
    }

    printf("%d ",s);
    return 0;
}


