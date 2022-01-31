#include "tetris.h"
#include <stdio.h>
void update(char grid[20][10]) {
    int i;
    int j;
    int l;
    int count = 0;
    char tmp[10];
    for (i = 1; i < 20; ++i) {
        for (j = 0; j < 10; ++j) {
            if (grid[i][j] == ' ') {
                ++count;
            }
        }
        if (count == 0) {
            for (l = i; l >= 2; --l) {
                for (j = 0; j < 10; ++j) {
                    tmp[j] = grid[l - 1][j];
                    grid[l][j] = tmp[j];
                    grid[l - 1][j] = ' ';
                }
            }
        }
        count = 0;
    }
}
