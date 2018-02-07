#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    /** Using this as reference
    int a[3][4] = {
    {0, 1, 2, 3} ,     initializers for row indexed by 0
    {4, 5, 6, 7} ,     initializers for row indexed by 1
    {8, 9, 10, 11}     initializers for row indexed by 2
   **/
   int rows = 0,columns = 0;

   do(){
       printf("Please insert the number of rows in the 2d array : ");
       scanf("%d",&rows);
       printf("\n");
       printf("Please insert the number of columns in the 2d array : ");
       scanf("%d",&columns);
   }while(rows > 1 && coulmns > 1)

   int matrix_array[rows][columns];

   //@TODO for to populate table
   //@TODO inside calculate the avreage of the numbers
   //@TODO itterate again and find how many numbers are above average

}
