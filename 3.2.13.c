#include<stdio.h>
#include<math.h>
#include<stdlib.h>


double fun (int x)
{
    return 3*x;
}

double gie(double (*f)(int x),int n)
{
    return f(n);
}
int main()
{
    printf("%f",gie(fun,8));
    return 0;
}
