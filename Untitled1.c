#include<stdio.h>
#include<math.h>



int main()
{
printf("Wczytaj 6 liczb calkowitych: ");
int a,b,c,d,e,f;
int W, Wx, Wy;
float x, y;
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);


printf("rownanie \n%d*x+%d*y=%d\n %d*x+%d*y=%d\n",a,b,c,d,e,f);

W = a*e-b*d;
Wx = c*e-b*f;
Wy = a*f-c*d;

if(W==0)
{
    return("Sprzecznosc");
}

x = (float)(Wx)/W;
y = (float)(Wy)/W;

printf("rozwjazanie jest x=%f y=%f",x,y);



return 0;
}
