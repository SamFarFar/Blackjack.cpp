#ifndef GAME
#define GAME

#include <stdlib.h>
#include <string>
#include <cstdlib>

#include <string.h>
#include <iostream>
#include <vector>
#include "Player.h"
#define TOTAL_CARDS 13
#define SUITS 4
class Game
{
private:
    int numPlayers;
    int deck[TOTAL_CARDS][SUITS];
    int cards_left;
    std::vector<Player> players;
    // rand()
public:
    Game();
    ~Game();
    void freshDeck();
    void cardPrinter();
    void init(int np);
    void updateCardCount();
    void drawCard(Player &p);
};

void Game::init(int np)
{
    numPlayers = np;
    freshDeck();
}
Game::Game()
{
    numPlayers = 0;
}
Game::~Game()
{
    numPlayers = 0;
    players.clear();
}
void Game::drawCard(Player &p)
{
}
void Game::cardPrinter()
{
    std::cout << "Cards are as follows:" << std::endl;
    for (size_t i = 0; i < SUITS; i++)
    {
        std::cout << "| ";
        for (size_t j = 0; j < TOTAL_CARDS; j++)
        {
            std::cout << std::to_string(deck[j][i]) << " | ";
        }
        std::cout << std::endl;
    }
}

void Game::updateCardCount()
{
    int total = 0;
    for (size_t i = 0; i < TOTAL_CARDS; i++)
        for (size_t j = 0; j <= SUITS; j++)
            if (deck[i][j] == 1)
                total++;
    cards_left = total;
}
void Game::freshDeck()
{
    for (size_t i = 0; i < TOTAL_CARDS; i++)
        for (size_t j = 0; j < SUITS; j++)
            deck[i][j] = 1;
    cards_left = 52;
};

#endif