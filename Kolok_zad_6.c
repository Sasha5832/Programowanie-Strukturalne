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

void deleteMiddleElement(struct Element** lista) {
    if (*lista == NULL || (*lista)->nastepny == NULL) {
        return;  // Pusta lista lub lista jednoelementowa
    }

    struct Element* slowPtr = *lista;
    struct Element* fastPtr = *lista;
    struct Element* prev = NULL;

    while (fastPtr != NULL && fastPtr->nastepny != NULL) {
        fastPtr = fastPtr->nastepny->nastepny;
        prev = slowPtr;
        slowPtr = slowPtr->nastepny;
    }

    if (fastPtr == NULL) {
        // Liczba elementów listy jest parzysta, usuwamy dwa środkowe elementy
        prev->nastepny = slowPtr->nastepny;
        free(slowPtr);
    } else {
        // Liczba elementów listy jest nieparzysta, usuwamy jeden środkowy element
        prev->nastepny = slowPtr->nastepny;
        free(slowPtr);
    }
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
    dodaj(&lista, 6);
    dodaj(&lista, 7);
    dodaj(&lista, 5);
    dodaj(&lista, 4);
    dodaj(&lista, 9);

    printf("Lista wejściowa: ");
    wyswietl(lista);

    deleteMiddleElement(&lista);

    printf("Lista wynikowa: ");
    wyswietl(lista);

    zwolnijPamiec(lista);

    return 0;
}
