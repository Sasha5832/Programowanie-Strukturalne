#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>


void wytnij2(char *napis,int n, int m)
{
    int i,j;
    for(j=0; napis[j]!=0; j++)
    {
        //
    }
        if(j+1>m)
        {
            for(i=0; i+m<j; i++)
            {
                napis[n+1]=napis[m+i+1];
            }
        }
        else if((n<j)&&(j+1<=m))
        {
            napis[n]=0;
        }
}
void wytnij(char *napis, int n, int m){
   int i,j;

   for (j=0;napis[j]!=0;j++)
    {
 ///ustala dlugosc napisu
    }
       if(j+1>m) ///jesli napis jest wystarczajaco dlugi aby wycianac srodek
       {
           for (i=0;i+m<j;i++)
           {
               napis[n+i]=napis[m+i+1]; ///n=5 m=15,   0 1 2 3 4 <- 0 1 2 3 4, 5 6 7 8 ... <- 16 17 18 19
           }
       }
       else if((n<j)&&(j+1<=m)) ///jesli jest sredniej dlugosci i wycinamy koncowke
       {
           napis[n]=0;
       }
}

int main()
{
    char napis1[50]= "abcfgwefadfew";
    wytnij(napis1,3,5);
    printf(napis1);

}

