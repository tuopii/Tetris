#include <stdio.h>
#include "tetris.h"

/* 20x10 static char array, where full squares are marked with 'x'. */
char grid[20][10] = {"          ",  /* First row.                */
                         "  x   x   ",  /* Second row.       */
                         " xx   xxx ",  
                         "xxx xxxxxx",
                         "xxxxxxxxxx",  /* Full row. */
                         "xxxxxxxxxx",  
                         "xxxxxx xxx",
                         "xxxxxxx xx",
                         "x xxxxxxxx",
                         "xxx xxx xx",
                         "xxxxxx xxx",
                         "x xx xxx x",
                         "xxxxxxxxx ",
                         "xxx xxx xx",
                         "xxxxx xx x",
                         " xxxxxxxxx",
                         "xxx xxx xx",
                         "x xxxx xxx",
                         "xxxxx xxxx",  
                         "xxxxxxxx x"}; /* Last row. */

int main(void)
{
  int i = 0;
  update(grid);       
  for(i = 0; i < 20; ++i)  
  {
    printf("%.10s\n", grid[i]); 
  }
  return 0;
}
