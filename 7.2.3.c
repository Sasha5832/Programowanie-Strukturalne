#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<wchar.h>

struct punkt
{
    double x,y,z;
};


double minimum (struct punkt tab[], int n)
{
    int i,j;
    double pom;
    double min = sqrt(pow(tab[1].x-tab[0].x,2)+pow(tab[1].y-tab[0].y,2)+pow(tab[1].z-tab[0].z,2));
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            pom = sqrt(pow(tab[j].x-tab[i].x,2)+pow(tab[j].y-tab[i].y,2)+pow(tab[j].z-tab[i].z,2));
        }
        if(pom<min)
        {
            min=pom;
        }
    }
    return min;
}

int main()
{
    struct punkt p;
    p.x=1;
    p.y=3;
    p.z=5;
    struct punkt q;
    q.x=4;
    q.y=2;
    q.z=9;
    struct punkt r;
    r.x=5;
    r.y=0;
    r.z=0;
    struct punkt tab[3]={p,q,r};
    printf("%f", minimum(tab,3));

}
