#include <stdlib.h>
#include <string>
#include <string.h>
#include <iostream>
#define TOTAL_CARDS 13
#define SUITS 4
class Game
{
private:
    int numPlayers;
    std::string cards[TOTAL_CARDS][SUITS];

public:
    Game(int np);
    Game();
    ~Game();
    void cardSetter();
    void cardPrinter();
};

Game::Game(int np)
{
    numPlayers = np;
}
Game::Game()
{
    numPlayers = 1;
}
Game::~Game()
{

}

void Game::cardPrinter()
{
    std::cout << "Cards are as follows:" << std::endl;
    for (size_t i = 0; i < SUITS; i++)
    {
        std::cout << "| ";
        for (size_t j = 0; j <= TOTAL_CARDS; j++)
        {
            std::cout << cards[j][i] << " | ";
        }
        std::cout << std::endl;
    }
}
void Game::cardSetter()
{
    for (size_t i = 0; i < SUITS; i++)
    {
        for (size_t j = 0; j <= TOTAL_CARDS; j++)
        {
            if (j == 0)
                cards[j][i] = 'A';
            else if (j < 11)
            {
                cards[j][i] = std::to_string(j + 1);
            }
            else if (j == 11)
                cards[j][i] = 'J';
            else if (j == 12)
                cards[j][i] = 'Q';
            else if (j == 13)
                cards[j][i] = 'K';
        }
    }
}