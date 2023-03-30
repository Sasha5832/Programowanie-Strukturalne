#include<stdio.h>
#include<math.h>
// zadanie 2.2.17||19
void zlicz(int x)
{
    static int ile=0;
    ile=ile+x;
    printf("Funkcja zostala wywolana na argumencie %d razy\n",ile);
}

int main()
{
    zlicz(5);
    zlicz(7);
    zlicz(8);
    return 0;
}

