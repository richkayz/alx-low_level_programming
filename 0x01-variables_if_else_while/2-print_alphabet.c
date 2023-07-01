#include <stdio.h>
#include <ctype.h>
/*prints the alphabet in lowercase, followed by a new line
 *
 *use only putchar
 *
 *Return - 0
 */
int main()
{
    char letter = 'a';

    while(letter < 'z')
    {

        tolower(putchar("%c", letter));
        letter++;

    }
    putchar("\n");
    
    return 0;
}
