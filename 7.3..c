#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<wchar.h>

//to 7.3.1,2,3,4,5,24,20,25,6,7,31,30,32
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
int min(struct element * Lista)
{
    int sum=0;
    while(Lista!=NULL)
    {
        if(Lista->i<sum)
        {
            sum=Lista->i;
        }
        Lista=Lista->next;
    }
    return sum;
}
struct element * znajdz(struct element * Lista, int a)
{
    while((Lista!=NULL)&&(Lista!=a))
    {
        Lista=Lista->next;
    }
    return Lista;
}
// 7_3_7
struct element * usun(struct element * Lista, int a)
{
    struct element * wsk, *wsk2;
    if(Lista=NULL)
    {
        return Lista;
    }
    wsk=Lista;
    if(Lista->i==a)
    {
        Lista=Lista->next;
        free(wsk);
    }
    else
    {
        while((wsk->next!=NULL)&&(wsk->next->i!=a))
        {
            wsk=wsk->next;
        }
        if(wsk->next!=NULL)
        {
            wsk2=wsk->next;
            wsk->next=wsk2->next;
            free(wsk2);
        }
    }
    return Lista;
};
// 7_3_31
struct element * odwroc(struct element * Lista)
{
    struct element *pom1, *pom2;
    if ((Lista==NULL)||(Lista->next==NULL))
    {
        return Lista;
    }
    pom1=Lista->next;
    pom2=pom1->next;
    Lista->next=NULL;
    pom1->next=Lista;
    while(pom2!=NULL)
    {
        Lista=pom1;
        pom1=pom2;
        pom2=pom2->next;
        pom1->next=Lista;
    }
    return pom1;
};
// 7_3_30
struct element * sklej(struct element * Lista1, struct element * Lista2)
{
    struct element *pom;
    if ((Lista1==NULL))
    {
        return Lista2;
    }
    pom=Lista1;
    while(pom->next!=NULL)
    {
        pom=pom->next;
    }
    pom->next=Lista2;
    return Lista1;
};
// 7_3_32
struct element * sklej2(struct element * Lista1, struct element * Lista2)
{
    struct element *pom, *pom2;
    if (Lista1==NULL)
    {
        return NULL;
    }
    pom=pom2=Lista1;
    Lista1=Lista1->next;
    pom2->next=Lista2;
    pom2=Lista2;
    Lista2=Lista2->next;
    while(Lista1!=NULL)
    {
        pom2->next=Lista1;
        pom2=Lista1;
        Lista1=Lista1->next;
        pom2->next=Lista2;
        pom2=Lista2;
        Lista2=Lista2->next;
    }
    return pom;
};
int main()
{
    //7_3_1
    struct element * lista=utworz();
    struct element * lista2=utworz();
    struct element * lista3=utworz();
    //7_3_4
    lista=dodajnakomiec(lista,4);
    wypisz(lista);
    lista=dodajnakomiec(lista,15);
    wypisz(lista);
    lista=dodajnakomiec(lista,3);
    wypisz(lista);
    lista=dodajnakomiec(lista,-7);
    wypisz(lista);
    lista=dodajnakomiec(lista,9);
    wypisz(lista);
    lista=dodajnakomiec(lista,-2);
    wypisz(lista);
    // 7_3_3
    lista=dodajnapoczatek(lista,6);
    wypisz(lista);
    printf("%d \n", suma(lista));
    // zeroj(lista);
    wypisz(lista);
    printf("%d \n", dlugosc(lista));
    wypisz_adresy(lista);
    wypisz(lista);
    printf("%d \n", min(lista));
    wypisz(lista);
    //lista = usun(lista, 4);
    //wypisz(lista);
    lista2 = odwroc(lista);
    wypisz(lista2);
    //lista3 = sklej(lista, lista2);
    //wypisz(lista3);
    //lista3 = sklej2(lista, lista2);
    //wypisz(lista3);
}
