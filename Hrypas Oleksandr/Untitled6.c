
#include<stdio.h>
#include<math.h>



int main()
{
    int n;
    scanf("%d",&n);
    int s=1;
    int i;
    for(i=2;i<=n;i=i+2)
    {
        s=s*i;

    }
    printf("%d",s);
    return 0;
}
