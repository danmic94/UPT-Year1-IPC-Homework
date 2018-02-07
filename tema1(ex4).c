#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    /**
        github url : https://github.com/danmic94/UPT-Year1-IPC-Homework
    **/
    int number_length,current_digit,i,digit_sum;
    float input_number;

    digit_sum = 0;

    printf("\n Introduceti numarul pentru a afla suma cifrelor lui \n");
    scanf("%f",&input_number);

    number_length = (int) floor(log10(abs(input_number))) + 1;

    for (i = 0; i < number_length; i++ ) {
        current_digit = (int) input_number % 10;
        input_number = input_number / 10;
        digit_sum += current_digit;
    }

    printf("\n Suma cifrelor numarului introdus este : %d \n",digit_sum);
}
