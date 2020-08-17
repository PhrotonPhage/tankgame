#ifndef TANKGAMESTRUCTURE_H
#define TANKGAMESTRUCTURE_H
#include <string>
#include "tankgamemain.h"
#include "minimalGame.h"
#include "classicMode.h"

using namespace std;

class tankGameStructure
{
    public:
        void gamemode5Stats(int death05,int moveAtimes05,int moveDtimes05,int moveStimes05,int shootingTimes05,int recentScore05,int highscore05);
        void gamemode3Stats(int death03,int shootingTimes03,int moveAtimes03,int moveDtimes03,int moveStimes03,int recentScore03,int highscore03);
        void tankDifficulty();
        void difficultySelection();
        void mainGame();
        void gameOverVoid();
        void debugModeDirect(int debug);
        void playerProperties();
        void videoSettings();
        void statistics();
        void experimentalGameplay();
        void controls();
        void generalSettings();
        void saveNow();
        void loadSettings();
    protected:
        void recommendedSettings();
    private:
};

#endif // TANKGAMESTRUCTURE_H
