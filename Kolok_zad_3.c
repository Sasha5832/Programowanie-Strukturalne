#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<wchar.h>
#include <ctype.h>
#include <string.h>
int**wpisz(int**tab,unsigned int n, unsigned int m){
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%i",&tab[i][j]);
    }
  }
  return tab;
}
int**aloc(unsigned int n, unsigned int m){
  int**tab=malloc(n*sizeof(int*));
  for(int i=0;i<m;i++){
    tab[i]=malloc(m*sizeof(int));
  }
  return tab;
}
void wypisz(int**tab,unsigned int n, unsigned int m){
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      printf("%i ",tab[i][j]);
    }
    printf("\n");
  }
}
//zad 3 A
int slad(int**tab,unsigned int n){
  int suma=0;
  for(int i=0;i<n;i++){
    suma+=tab[i][i];
  }
  return suma;
}
//zad 3 B
int sumaParz(int m, int n, int** macierz) {
    int suma = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == m - 1 || j == 0 || j == n - 1) { // Sprawdzanie, czy element jest na brzegu
                if (macierz[i][j] % 2 == 0) { // Sprawdzanie, czy element jest parzysty
                    suma += macierz[i][j];
                }
            }
        }
    }

    return suma;
}

int main()
{
    int**tab=aloc(3,4);
    tab=wpisz(tab,3,4);
    wypisz(tab,3,4);
    //printf("%d\n", slad(tab,3));
    printf("%d\n", sumaParz(3,4,tab));

    return 0;
}
