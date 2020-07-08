#ifndef TANKGAMESTRUCTURE_H
#define TANKGAMESTRUCTURE_H
#include <string>
#include "tankgamemain.h"
#include "minimalGame.h"

using namespace std;

class tankGameStructure
{
    public:
        void gamemode5Stats(int death05,int moveAtimes05,int moveDtimes05,int moveStimes05,int shootingTimes05,int recentScore05,int highscore05);
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
