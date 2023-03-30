#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int fun (int x)
{
    return x-1;
}

int kwad (int x)
{
    return (x-1)*(x-1)*(x-1);
}

int gie(int (*f)(int x), int (*g)(int x), int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        if(f(i)!=g(i));
        return 0;
    }
    return 1;

}
int main()
{
    printf("%d",gie(&fun,&kwad,1));
    return 0;
}
