#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    /*Se introduc de la tastatură notele pentru n studenţi. Să se afişeze câţi studenţi au promovat examenul.*/
    int numar_elevi,elevi_promovati,elev_curent;
    float nota;

    elevi_promovati = 0;
    numar_elevi = 0;
    elev_curent = 1;

    printf(" Introduceti numarul de elevi din clasa: \n");
    scanf("%d",&numar_elevi);

    do
    {
      printf("\n Introduceti nota pentru elevul curent cu numarul %d \n", elev_curent);
      scanf("%f",&nota);

      if( nota <= 0 || nota > 10){
        printf("\n Va rog introduceti o nota valida! \n");
        continue;
      }

      if( nota >= 4.50){
        elevi_promovati++;
      }

      numar_elevi--;
      elev_curent++;
    }
    while (numar_elevi > 0);

   printf(" \n Numarul elevilor promovati este de %d\n", elevi_promovati);

}
