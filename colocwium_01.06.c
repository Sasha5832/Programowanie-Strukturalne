#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<wchar.h>

// zadanie 1

int dlugosc2(char * tab)
{
 int sum=0;
 while (tab[sum]!=NULL)
  {
   sum+=1;
  }
 return sum;
}

char* formatujDaneOsobowe(char* daneOsobowe) {
    int dlugosc = dlugosc2(daneOsobowe);
    int spacjaIndeks = -1;
    char* wynik = malloc((dlugosc + 2) * sizeof(char));
    for (int i = 0; i < dlugosc; i++) {
        if (daneOsobowe[i] == ' ') {
            spacjaIndeks = i;
            break;
        }
    }
    wynik[spacjaIndeks] = '.';
    wynik[0] = toupper(daneOsobowe[0]);
    for (int i = 1; i < spacjaIndeks; i++) {
        wynik[i] = tolower(daneOsobowe[i]);
    }
    wynik[spacjaIndeks + 1] = toupper(daneOsobowe[spacjaIndeks + 1]);
    for (int i = spacjaIndeks + 2; i < dlugosc; i++) {
        wynik[i] = tolower(daneOsobowe[i]);
    }
    wynik[dlugosc] = '\0';
    return wynik;
}

int main() {
    char* daneOsobowe = "KAMIL NOWAK";
    printf("%s\n", formatujDaneOsobowe(daneOsobowe));  // Wypisze "Kamil. Nowak"
    return 0;
}
