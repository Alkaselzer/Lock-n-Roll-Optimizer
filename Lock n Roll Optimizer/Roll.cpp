//
// Created by Deven Selzer on 4/23/17.
//
#include <random>
#include "Roll.h"

Die::Die() {
    Color = 0;
    Number = 0;
}


Die Die::newDie() {
    mt19937 rng;
    rng.seed(std::random_device()());
    uniform_int_distribution<mt19937::result_type> dist4(1,4); // distribution in range [1, 4]

    Number = dist4(rng);
    Color = dist4(rng);

    cout << Game::getColor(Color) << " " << Number << endl;

}

string Game::getColor(int Col) {

     string s;

     switch(Col){
         case 0 : return s = "X";
         case 1 : return s = "R";
         case 2 : return s = "B";
         case 3 : return s = "Y";
         case 4 : return s = "G";

     }
return s;
}

Game::Game() {
    printBoard();
}

void Game::printBoard() {
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << board[i][j].Number <<getColor(board[i][j].Color)<< " ";
        }
        cout << endl;
    }

}

