#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<wchar.h>

struct trojkat
{
    double a,b,c;
};
double przepisz(struct trojkat t1, struct trojkat *t2)
{
    *t2=t1;
}
void wypisz(struct trojkat tr1)
{
    printf("%f", tr1.a);
    printf("%f", tr1.b);
    printf("%f", tr1.c);
    printf("\n");
}

int main()
{
    struct trojkat tr1;
    tr1.a=1;
    tr1.b=1;
    tr1.c=1;
    struct trojkat tr2;
    tr1.a=3;
    tr1.b=4;
    tr1.c=5;
    struct trojkat *wsk2=&tr2;
    wypisz(tr1);
    wypisz(tr2);
    przepisz(tr1,wsk2);
    printf("po zmiane: \n");
    wypisz(tr1);
    wypisz(*wsk2);

}

