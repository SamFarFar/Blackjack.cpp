#include <stdio.h>
#include "Game.h"
#include "Player.h"
bool KEEP_PLAYING = true;
int main(int argc, char **argv)
{
    int ps = 0;
    std::cout << "How many players will be playing?" << std::endl;
    std::cin >> ps;
    Player players[ps];

    for (int i = 0; i < ps; i++)
    {
        players[i] = Player(i);
    }

    Game g;
    g.init(1);
    g.cardPrinter();
    return 0;
}