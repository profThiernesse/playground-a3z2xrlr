#include <stdio.h>
#include <stdlib.h>
#include "paper.h"

int main()
{
    init_paper(10,10,50);
    repeat(10) {
        colorize();
        move_down();
        move_right();
    } loop;

    display_paper();

    return 0;
}
