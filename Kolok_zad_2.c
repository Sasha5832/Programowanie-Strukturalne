#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
#include<wchar.h>
#include <ctype.h>
#include <string.h>
int dlugosc2(char * tab)
{
 int sum=0;
 while (tab[sum]!=NULL)
  {
   sum+=1;
  }
 return sum;
}
char * chuj(char* napis)
{
    int dl = dlugosc2(napis);
    char* nowy = malloc((dl + 1) * sizeof(char));
    int j = 0;
    char pomoc;
    for (int i = 0; i < dl; i++) {
        nowy[j] = napis[i];
        j++;

        if (i < dl - 1 && ((napis[i] - napis[i + 1]) == 1 || (napis[i] - napis[i + 1]) == -1)) {
            nowy = realloc(nowy, (dl + 2) * sizeof(char));
            pomoc = napis[i+1];
            nowy[j] = 'W';
            j++;
            nowy[j] = pomoc;
            j++;
            i++;
        }
    }

    nowy[j] = '\0';

    return nowy;
}

int main() {
    char* napis = "doba";
    char* napis2 = "abazur";
    char* napis3 = "baba";
    char* napis4 = "baobab";
    printf("%s\n", chuj(napis));
    printf("%s\n", chuj(napis2));
    printf("%s\n", chuj(napis3));
    printf("%s\n", chuj(napis4));
    return 0;
}

