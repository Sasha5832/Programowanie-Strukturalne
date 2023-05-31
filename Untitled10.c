#include<stdio.h>
#include<math.h>

unsigned int NWD (unsigned int p, unsigned int d)
{
    while(p!=d)
    {
        if(p>d)
        {
            p=p-d;
        }
        else
        {
            d=d-p;
        }
    }
    return p;
}
unsigned int suma(unsigned int n)
{
    int i;
    int sum=0;
    for(i=2;i<n;i++)
    {
        if(NWD(i,n)==1)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int n;
    printf("Wpisz liczbe: ");
    scanf("%d",&n);
    printf("wynik: %d\n",suma(n));
    return 0;
}
