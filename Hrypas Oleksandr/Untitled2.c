#include<stdio.h>
#include<math.h>



int main()
{
printf("Wczytaj 3 liczb calkowitych: ");
int a,b,c;
int D;
float x1,x2;
scanf("%d %d %d",&a,&b,&c);


printf("Zdefi... rownanie\n");


if(a==1)
{
    printf("x^2");
}
else if(a==-1)
{
    printf("-x^2");

}
else
{
    printf("%d*x^2");
}

if(b==1)
{
    printf("+x");
}
else if(b==-1)
{
    printf("-x");
}
else if(b<0)
{
    printf("%d*x",b);
}

if(c>0)
{
    printf("+%d",c);
}
else if(c<0)
{
    printf("%d",c);
}


D = b*b-4*a*c;

if(D==0)
{
    printf("Sprzecznosc");
    return 0;
}
else if (D<0)
{
    printf("Brak rozwionzan");
    return 0;
}

x1 = (-b + sqrt(D))/(2*a);
x2 = (-b - sqrt(D))/(2*a);


printf("rozwjazanie jest x1=%f x2=%f",x1,x2);
return 0;
}

