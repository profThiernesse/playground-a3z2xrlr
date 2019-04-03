#include <stdio.h>
#include <stdlib.h>
#include "paper.h"

int main()
{
    init_paper(3,3,50);
    
    colorize();

    move_down();
    move_right();
    change_color(255,0,0);
    colorize();
    
    move_down();
    move_right();
    change_color(0,255,0);
    colorize();
    
    display_paper();
    
    return 0;
}
