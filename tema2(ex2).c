#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Se citesc de la tastatură elementele unei matrice.
 Să se afişeze matricea şi să se numere câte dintre elementele acesteia sunt mai mari decât media lor aritmetică.*/
void main()
{
    int rows = 0,columns = 0,current_number = 0;

    do
    {
        printf("Please insert the number of rows in the 2d array : ");
        scanf("%d",&rows);
        printf("Please insert the number of columns in the 2d array : ");
        scanf("%d",&columns);
        printf("\n");
    }
    while(rows < 1 && columns < 1);

    int matrix_array[rows][columns];
    int number_count = rows * columns;
    int numbers_total = 0, higher_than_avg_count = 0;
    int i,j,row_counter = 0,column_counter = 0 ,average;

    for(i=0; i<rows; i++)
    {
        row_counter++;
        for(j=0; j<columns; j++)
        {
            column_counter++;
            printf("Please insert the number located in %d row on %d colum : ",row_counter,column_counter);
            scanf("%d",&current_number);
            matrix_array[i][j] = current_number;
            numbers_total += current_number;
        }
    }

    average = numbers_total / number_count;


    for(i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
            printf("%3d",matrix_array[i][j]);
            if(matrix_array[i][j]>average)
            {
                higher_than_avg_count++;
            }
        }
        printf("\n");
    }

    printf("Tere are %d numbers higher than the average being %d!",higher_than_avg_count,average);

    exit(0);
}
