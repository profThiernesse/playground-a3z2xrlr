#include <stdio.h>
#include <stdlib.h>
#include "paper.h"

int main()
{
    init_paper(20,20,25);
    move_to(0,7);
    colorize();
    move_right();
    change_color(0,155,0);
    colorize();
    repeat (19) {
        move_down();
        colorize();
        change_color(125,55,10);
    } loop;

    display_paper();

    return 0;
}

