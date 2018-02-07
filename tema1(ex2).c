#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    /**
        github url : https://github.com/danmic94/UPT-Year1-IPC-Homework
    **/

    float x;
    int option;
    bool infinite_loop;

    infinite_loop = true;

    while ( infinite_loop ){
        printf("\n Va rog alegeti opţiunea dorita din meniu: \n");
        printf("1 - ex \n");
        printf("2 - ln(x) \n");
        printf("3 - |x| \n");
        printf("4 - 10x \n");
        printf("0 - Ieşire \n \n \n ");

        printf("\t Introduceti optiunea dorita: \n");
        scanf("\t %d",&option);

        if(option == 0 || option < 0 || option > 4){
            printf("0 - Ieşire \n \n \n ");
            break;
        }

        printf("\t Numarul care o sa fie calculat: \n");
        scanf("\t %f",&x);

        switch(option) {
            /* Exponentiala lui x*/
           case 1:
            printf("1 - ex = %.02f \n", exp(x));
            continue;
           /* Logaritm natural a lui x*/
           case 2:
            if(x > 0){
              printf("2 - ln x = %.02f \n", log(x));
              continue;
            }
            printf("2 - ln x = Introduceti un x pentru care opertiunea de logaritm natural e calculabila");
            continue;
           /* Modulul lui x*/
           case 3:
            printf("3 - |x| = %d \n", (int)abs(x));
            continue;
           /* 10 inmultit cu x*/
           case 4:
            printf("4 - 10x = %.02f \n", 10*x);
            continue;
        }
    }
}
