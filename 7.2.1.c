#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<wchar.h>

struct trojkat
{
    double a,b,c;
};
double obwod(struct trojkat t)
{
    return t.a+t.b+t.c;
}

int main()
{
    struct trojkat t1;
    t1.a=3;
    t1.b=4;
    t1.c=5;
    printf("Obwod: %f\n", obwod(t1));
    printf("%d\n", sizeof(double));
    printf("%d\n", sizeof(struct trojkat));

}
