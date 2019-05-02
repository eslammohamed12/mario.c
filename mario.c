#include <cs50.h>
#include <stdio.h>

int main(void)
{


int i, d, j;

       do{
           j = get_int("Hight: ");
       }
       while(j < 1 || j > 8);

            for(i = 0; i < j; i++)
            {

                for(d = 0; d < j - 1 - i; d++)
                {
                    printf(" ");
                }

                for(d = 0; d < i + 1; d++)
                {
                    printf("#");
                }

                printf("\n");
            }

}