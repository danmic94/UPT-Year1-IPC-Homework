#include <stdio.h>
#include <string.h>

/*Se citesc de la tastatură 10 cuvinte.
  Să se afişeze un avertisment pentru cele care sunt mai mari (în sens lexicografic) decât primul cuvânt.*/
int main ()
{
    char input[256],word_counter = 10;
    int limit,current_word_length;

    do
    {
        printf ("Enter a word: ");
        gets (input);
        current_word_length = (unsigned)strlen(input);
        //remember the first word
        if(word_counter == 10)
        {
            limit = (unsigned)strlen(input);
        }

        if(current_word_length > limit && word_counter < 10)
        {
            printf ("The word entered is %d characters long which is larger than the limit %d.\n",current_word_length,limit);
        }

        word_counter--;
    }
    while(word_counter != 0);

    return 0;
}
