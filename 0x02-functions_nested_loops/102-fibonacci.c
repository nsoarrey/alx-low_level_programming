#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */

int main(void)
{
  int i, fnum=0;

    for (i =0, i <= 50 && fnum <= 50, i++)
    {
       fnum = i + (i + 1);
       if(fnum != 49)
       {
         printf("%d, ",fnum);
       }
       else
       {
	 printf("%d",fnum);
       } 
       printf("\n");
    }
     return (0);
}
       
