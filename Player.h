#ifndef PLAYER
#define PLAYER

#include <vector>
#include "Game.h"
class Player{

    private:
    int player_ID; 
    std::vector<int> hand;
    int total;
    int ace_total;
    float chips;
    float bet;

    public:
    Player(int id){
    player_ID = id;
    }
    Player(){
    player_ID = -1;
    }
    ~Player(){};
friend class Game;
};
#endif