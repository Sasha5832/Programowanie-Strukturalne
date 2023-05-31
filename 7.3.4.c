#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<wchar.h>

//to 7.3.1,2,3,4,5,24
struct element
{
    int i;
    struct element *next;
};

struct element *utworz()
{
    return NULL;
};
void wyczysc (struct element* Lista)
{
    struct element *wsk =Lista;
    while(Lista!=NULL)
    {
        Lista=Lista->next; // *Lista.i.next
        free(wsk);
        wsk=Lista;
    }
}

struct element * dodajnapoczatek(struct element* Lista, int a)
{
    struct element *wsk = malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=Lista;
    return wsk;
};
struct element * dodajnakomiec(struct element* Lista, int a)
{
    struct element *wsk;
    if(Lista==NULL)
    {
        Lista=wsk=malloc(sizeof(struct element));
    }
    else
    {
        wsk=Lista;
        while(wsk->next!=NULL)
        {
            wsk=wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return Lista;
};
struct element * dodajw(struct element* Lista,struct element* elem, int a)
{
    struct element * wsk=malloc(sizeof(struct element));
    wsk->i=a;
    if(elem=NULL)
    {
        wsk->next=Lista;
        Lista=wsk;
    }
    else
    {
        wsk->next=elem->next;
        elem->next=wsk;
    }
    return Lista;
};
void wypisz(struct element* Lista)
{
    while(Lista!=NULL)
    {
        printf("%d ",Lista->i);
        Lista=Lista->next;
    }
    printf("\n");
}
// 7_3_24
int suma(struct element * Lista)
{
    int sum=0;
    while(Lista!=NULL)
    {
        sum=sum+Lista->i;
        Lista=Lista->next;
    }
    return sum;
}
// 7_3_20
void zeroj(struct element * Lista)
{
    while(Lista!=NULL)
    {
        Lista->i=0;
        Lista=Lista->next;
    }
}
int dlugosc(struct element * Lista)
{
    int sum=0;
    while(Lista!=NULL)
    {
        sum += 1;
        Lista=Lista->next;
    }
    return sum;
}
void wypisz_adresy(struct element* Lista)
{
    while(Lista!=NULL)
    {
        printf("%p ",&Lista->i);
        Lista=Lista->next;
    }
    printf("\n");
}
int main()
{
    //7_3_1
    struct element * lista=utworz();
    //7_3_4

    int i=1;
    while(i<10)
    {
        lista=dodajnakomiec(lista,i-i/2);
        i++;
        wypisz(lista);
    }


}
