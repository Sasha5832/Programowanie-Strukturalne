#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<wchar.h>


//to 7.2.10


union super_int
{
    int i;
    unsigned int u;
};
struct wiele_int
{
    int i;
    unsigned int u;
};


int main()
{
    struct wiele_int x;
    union super_int y;
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(unsigned int));
    // struktura
    printf("%d\n",sizeof(x));
    printf("%d\n",sizeof(x.i));
    printf("%d\n",sizeof(x.u));
    // unia
    printf("%d\n",sizeof(y));
    printf("%d\n",sizeof(y.i));
    printf("%d\n",sizeof(y.u));


}
