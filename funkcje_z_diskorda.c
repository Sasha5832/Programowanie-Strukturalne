/* połoncz tabele
#include <stdio.h>
#include <stdlib.h>

void concat(int*tab,int*tab2,double*tab3,unsigned int n){
  for(int i=0;i<n;i++){
    tab3[i]=tab[i];
  }
  int temp=0;
  for(int b=n;b<2*n;b++){
    tab3[b]=tab2[temp];
    temp++;
  }
}

int main()
{
    int tab[4]={1,2,3,4};
    int tab2[4]={5,6,7,8};
    int n = 4;
    double tab3[8];
    concat(tab,tab2,tab3,n);
    for(int i=0;i<2*n;i++){
      printf("%lf ",tab3[i]);
    }
}



 dlogosc
Int dlugosc(struct element *Lista)
    {
    Int sum=0;
    While (Lista!=NULL)
    {
        sum=sum+1;
        Lista=Lista->next;
    }
    Printf("\n");
}


DLUGOSC STRINGA
int dlugosc(char * tab)
{
    int sum=0;
    while (tab[sum]!=NULL)
    {
        sum+=1;
    }
    return sum;
}


FUNKCJA NA WPISYWANIE DO TABLICY TABLIC
int**wpisz(int**tab,unsigned int n, unsigned int m){
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%i",&tab[i][j]);
    }
  }
  return tab;
}

FUNKCJA NA ALOKACJĘ PAMIĘCI TABLICY TABLIC
int**aloc(unsigned int n, unsigned int m){
  int**tab=malloc(n*sizeof(int*));
  for(int i=0;i<m;i++){
    tab[i]=malloc(m*sizeof(int));
  }
  return tab;
}


FUNKCJA NA WYPISYWANIE WARTOŚCI Z TABLICY TABLIC
void wypisz(int**tab,unsigned int n, unsigned int m){
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("%i",tab[i][j]);
    }
    printf("\n");
  }
}


FUNKCJA NA STWORZENIE PUSTEJ LISTY (po prostu stworzenie listy)
struct element *utworz(){
return NULL;
}


FUNKCJA NA DODANIE ELEMENTU DO LISTY
struct element *dodajNaPoczatek(struct element* e1, int a){
    struct element *wsk=malloc(sizeof(struct element));
    wsk->i=a;
    wsk->next=e1;
    return wsk;
}


FUNKCJA NA WYCZYSZCZENIE (usunięcie) LISTY
void wyczysc(struct element* Lista){
    struct element *wsk = Lista;
    while(Lista!=NULL){
        Lista=Lista->next;
        free(wsk);
        wsk=Lista;
    }
}

FUNKCJA NA DODANIE ELEMENTU DO LISTY (na koniec)
struct element* DodajNaKoniec(struct element*Lista,int a){
    struct element *wsk;
    if(Lista==NULL){
        Lista=wsk=malloc(sizeof(struct element));
    }else{
        wsk=Lista;
        while(wsk->next!=NULL){
            wsk=wsk->next;
        }
        wsk->next=malloc(sizeof(struct element));
        wsk=wsk->next;
    }
    wsk->i=a;
    wsk->next=NULL;
    return Lista;
}


CZYSZCZENIE LISTY
void wyczysc(struct element* Lista){
    struct element *wsk = Lista;
    while(Lista!=NULL){
        Lista=Lista->next;
        free(wsk);
        wsk=Lista;
    }
}

WYPISYWANIE LISTY
void WypiszListe(struct element*Lista){
  int number=1;
  while(Lista!=NULL){
    printf("Element na indeksie %i to: %i\n",number,Lista->i);
    Lista=Lista->next;
    number++;
  }
}




zad 5

#include <stdio.h>
#include <stdlib.h>

struct Element {
    int dane;
    struct Element* nastepny;
};

void dodaj(struct Element** lista, int dane) {
    struct Element* nowyElement = (struct Element*)malloc(sizeof(struct Element));
    nowyElement->dane = dane;
    nowyElement->nastepny = NULL;

    if (*lista == NULL) {
        *lista = nowyElement;
    } else {
        struct Element* aktualny = *lista;
        while (aktualny->nastepny != NULL) {
            aktualny = aktualny->nastepny;
        }
        aktualny->nastepny = nowyElement;
    }
}

void wyswietl(struct Element* lista) {
    struct Element* aktualny = lista;
    while (aktualny != NULL) {
        printf("%d ", aktualny->dane);
        aktualny = aktualny->nastepny;
    }
    printf("\n");
}

struct Element* coDrugiElement(struct Element* lista) {
    if (lista == NULL) {
        return NULL;
    }

    struct Element* wynik = NULL;
    struct Element* aktualny = lista;
    int licznik = 0;

    while (aktualny != NULL) {
        if (licznik % 2 == 0) {
            dodaj(&wynik, aktualny->dane);
        }
        licznik++;
        aktualny = aktualny->nastepny;
    }

    return wynik;
}

void zwolnijPamiec(struct Element* lista) {
    struct Element* aktualny = lista;
    while (aktualny != NULL) {
        struct Element* temp = aktualny;
        aktualny = aktualny->nastepny;
        free(temp);
    }
}

int main() {
    struct Element* lista = NULL;
    dodaj(&lista, 1);
    dodaj(&lista, 5);
    dodaj(&lista, 8);
    dodaj(&lista, 7);
    dodaj(&lista, 2);

    printf("Lista wejściowa: ");
    wyswietl(lista);

    struct Element* wynik = coDrugiElement(lista);

    printf("Lista wynikowa: ");
    wyswietl(wynik);

    zwolnijPamiec(lista);
    zwolnijPamiec(wynik);

    return 0;
}

*/
