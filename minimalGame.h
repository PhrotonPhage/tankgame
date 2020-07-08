#include <iostream>
#include <string>
#include <string.h>
#include <conio.h>
#include <windows.h>

#ifndef MINIMALGAME_H
#define MINIMALGAME_H
#include "tankgamemain.h"
#include "tankGameStructure.h"

using namespace std;

class minimalGame
{
    public:
        void audio(int audio);
        void minimalGameVariablePass(std::string playerName, int playerNameDisplay);
        void mainGame();
        void gameOverMini();
        void difficulty();
    protected:

    private:
};

#endif // MINIMALGAME_H
