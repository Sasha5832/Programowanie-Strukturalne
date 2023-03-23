
#include<stdio.h>
#include<math.h>



int main()
{
    int k;
    scanf("%d",&k);
    int s=0;
    int i=0;
    while(s<k)
{
    i=i+1;
    s=s+i*i;
}
    printf("%d %d",i-1,s-i*i);
    return 0;
}
