#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int n = 0;/*number of grade*/
    int current_grade;
    int i,j,counter = 0,average = 0;

    do
    {
        printf( "Please type number of grades for the current student that need to be added :");
        scanf("%d", &n);
    }
    while( n < 0 );

    int grades[n];

    for ( i = 0; i < n; i++ )
    {
        counter++;
        printf( "Please type the grade %d :",counter);
        scanf("%d", &current_grade);
        if(current_grade >= 5 && current_grade <= 10)
        {
            grades[ i ] = current_grade;
            average += current_grade;
        }
        else
        {
            printf("The grade %d you have entered is not valid it must be higher or equal to 5 \n", current_grade);
            i--;
            counter--;
        }
    }

    printf("The students average is %d", average/n);
}
