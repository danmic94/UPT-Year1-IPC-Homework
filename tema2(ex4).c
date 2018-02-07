#include <stdio.h>
#include <string.h>
/*
Se defineşte o structură care descrie o dată calendaristică prin trei câmpuri (an, lună, zi).
Să se scrie o funcţie care compară două date calendaristice primite ca argument.
Funcţia va returna 0 dacă datele sunt egale şi 1 în caz contrar.
*/
struct date
{
    short unsigned int day;
    char month[3];
    short unsigned int year;
};

int main()
{
    struct date date1;
    struct date date2;

   /* date 1 information */
   strcpy( date1.month, "ian");
   date1.day = 30;
   date1.year = 1994;

   /* date 2 information */
   strcpy( date2.month, "ian");
   date2.day = 30;
   date2.year = 1994;

   compareDates(date1,date2);
};

int compareDates(struct date date1,struct date date2)
{
    short unsigned int validation_counter = 0;

    if(date1.day == date2.day)
    {
        validation_counter++;
    }

    if(strcmp(date1.month,date1.month) == 0)
    {
        validation_counter++;
    }

    if(date1.year == date2.year)
    {
        validation_counter++;
    }

    if(validation_counter == 3){
        return 1;
    }

    return 0;
}
