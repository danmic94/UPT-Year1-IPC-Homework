#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void main(void)
{
    /**
        github url : https://github.com/danmic94/UPT-Year1-IPC-Homework
    **/

    float a, b, c, b1, d, delta;

    printf("Introduceti coeficientii ecuatiei de gradul 2 mai jos pe rand.\n");
    printf("Coeficientul a este: ");
    scanf("%f", &a);
    printf("\nCoeficientul b este: ");
    scanf("%f", &b);
    printf("\nCoeficientul c este: ");
    scanf("%f", &c);

    b1 = -b / (2 * a);
    delta = pow(b1,2.00) - c / a;

    if (delta == 0)
    {
        printf("Solutie dubla: %f\n", b1);
    }
    else if (delta > 0)
    {
        d = sqrt(delta);
        printf("Solutii: %.1f si %.1f\n", b1 + d, b1 - d);
    }
    else /* cand delta este mai mic decat zero*/
    {
        d = sqrt(-delta);
        printf("Solutii: %.1f+%.1fi si %.1f-%.1fi\n", b1, d, b1, d);
    }
}
