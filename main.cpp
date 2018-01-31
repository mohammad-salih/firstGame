
#include <iostream>
#include <string>
////// SFML Graphics library
#include <SFML/Graphics.hpp>
///// my won game library 
#include "game.hpp"


using namespace std;
using namespace sf;
using namespace game;

void game_thread(void); /// the game 

int main(){

        Game Play(game_thread);
        Play.play();
        
        return 0;
};
