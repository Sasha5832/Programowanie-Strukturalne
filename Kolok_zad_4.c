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
void odwrocKolumny(int**tab,unsigned int n, unsigned int m) {
    for (int j = 0; j < m; j++) {
        int poc = 0;
        int kon = n - 1;

        while (poc < kon) {
            int temp = tab[poc][j];
            tab[poc][j] = tab[kon][j];
            tab[kon][j] = temp;

            poc++;
            kon--;
        }
    }
}

void shiftColumns(int**tab,unsigned int n, unsigned int m) {
    int temp1[n], temp2[n];
    for (int i = 0; i < n; i++) {
        temp1[i] = tab[i][m - 2];
        temp2[i] = tab[i][m - 1];
    }
    for (int i = m - 1; i >= 2; i--) {
        for (int j = 0; j < n; j++) {
            tab[j][i] = tab[j][i - 2];
        }
    }
    for (int i = 0; i < n; i++) {
        tab[i][0] = temp2[i];
        tab[i][1] = temp1[i];
    }
}
int main() {
    int**tab=aloc(4,4);
    tab=wpisz(tab,4,4);
    wypisz(tab,4,4);
    printf("\n");
    odwrocKolumny(tab, 4, 4);
    wypisz(tab,4,4);
    printf("\n");
    shiftColumns(tab, 4, 4);
    wypisz(tab,4,4);
    return 0;
}
