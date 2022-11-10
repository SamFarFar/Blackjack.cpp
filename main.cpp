#include <stdio.h>
#include "Game.h"
bool KEEP_PLAYING = true;
int main(int argc, char **argv)
{

    Game g;
    g.cardSetter();
    g.cardPrinter();
    return 0;
}