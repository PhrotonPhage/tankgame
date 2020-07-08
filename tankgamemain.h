#ifndef TANKGAMEMAIN_H
#define TANKGAMEMAIN_H
#include "tankGameStructure.h"
#include "helpPage.h"
#include "minimalGame.h"

#define VERMAJOR 0
#define VERMINOR 2
#define REVISION 0
#define VERBUILD ""
#define VERSION "ALPHA"
#define BUILD 952

class tankgamemain
{
    public:
        void getVariable1(int audio);
        void menuInfo();
        void mainMenu();
        void play();
        void settings();
        void info();
        void playerSettings();
        void debugMode();
        void antiDebugMode();
    protected:

    private:
        void quit();
};

#endif // TANKGAMEMAIN_H
