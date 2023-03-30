#include<stdio.h>
#include<math.h>
// zadanie ilorazy

int wyraz(int n)
{
    if (n==0||n==1)
        return 1;
    return wyraz(n-1)+ wyraz(n-2);
}
void ilorazy(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("a_%d/a_%d = %f\n",i+1,i,(float)(wyraz(i+1))/wyraz(i));
    }
}
int main()
{

    ilorazy(20);
    printf("\n Zlota liczba: %f",(1+sqrt(5))/2);

    return 0;
}




