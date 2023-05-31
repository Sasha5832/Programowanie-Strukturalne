#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<wchar.h>


//to 7.2.7


struct punkt
{
    double x,y,z;
};


struct zespolone
{
    double a;
    double b;
};
void wyswietl_liczbe_zespolona(struct zespolone liczba)
{
    printf("%f+%f i\n", liczba.a, liczba.b);
}
void wczytaj_liczbe_zespolona(struct zespolone liczba)
{
    scanf("%lf",&liczba.a);
    scanf("%lf",&liczba.b);
}
double modul(struct zespolone liczba)
{
    return pow((liczba.a*liczba.a+liczba.b*liczba.b),0.5);
}

struct zespolone dodaj(struct zespolone liczba1, struct zespolone liczba2)
{
    struct zespolone suma;
    suma.a=liczba1.a+liczba2.a;
    suma.b=liczba1.b+liczba2.b;
    return suma;
};
int main()
{
    struct zespolone x;
    x.a=2;
    x.b=7;
    wyswietl_liczbe_zespolona(x);
    printf("modul %f\n", modul(x));
    struct zespolone y;
    y.a=4;
    y.b=8;
    wyswietl_liczbe_zespolona(y);
    struct zespolone z;
    z=dodaj(x,y);
    wyswietl_liczbe_zespolona(z);


}
