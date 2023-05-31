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
