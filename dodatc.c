#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<wchar.h>

struct trojkat
{
    double a,b,c;
};
bool czy_troj(struct trojkat t)
{
    if(t.a>0||t.b>0||t.c>0)
    {
        return true;
    }
    return false;
}

int main()
{
    struct trojkat t1;
    t1.a=3;
    t1.b=4;
    t1.c=5;
    printf("czy_troj: %d\n", czy_troj(t1));


}
