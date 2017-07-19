//
// Created by Deven Selzer on 4/23/17.
//
#include <iostream>
#include <string>

using namespace std;

#ifndef LOCK_N_ROLL_ROLL_H
#define LOCK_N_ROLL_ROLL_H

struct Die{
    int Number;
    int Color;
    Die();
    Die newDie();

};

class Game{
public:
    Game();
    Game(Die newBoard [4][4]);
    void setDie(Die, int i, int j);
    void printBoard();
    static string getColor(int Col);


private:
    Die board [4][4];
};
#endif //LOCK_N_ROLL_ROLL_H
