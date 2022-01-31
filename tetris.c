#include "tetris.h"
#include <stdio.h>
void update(char grid[20][10]) {
    int i;
    int j;
    int l;
    int lkm = 0;
    char apu[10];
    for (i = 1; i < 20; ++i) {
        for (j = 0; j < 10; ++j) {
            if (grid[i][j] == ' ') {
                ++lkm;
            }
        }
        if (lkm == 0) {
            for (l = i; l >= 2; --l) {
                for (j = 0; j < 10; ++j) {
                    apu[j] = grid[l - 1][j];
                    ruudukko[l][j] = apu[j];
                    ruudukko[l - 1][j] = ' ';
                }
            }
        }
        lkm = 0;
    }
}
