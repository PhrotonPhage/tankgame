#include "classicMode.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <windows.h>
#include <conio.h>
#include <thread>

using namespace std;

tankgamemain tankgamemainClassicGameObject;
tankGameStructure tankGameStructureClassicGameObject;

namespace classicGame{
    int difficulty;

    char tank = 'M';
    char blocks = 'W';
    int movement = 10;

    int score = 0;

    int uiWidth = 30;
}

void classicMode::difficulty(){
    system("cls");
    cout << "GAMEMODE 3: CLASSIC MODE\n\n";
    cout << "DIFFICULTY:\n\n";
    cout << "1 - EASY\n";
    cout << "2 - NORMAL\n";
    cout << "3 - HARD\n";
    cout << "4 - VERY HARD\n\n";
    cout << "0 - BACK\n";
    if(kbhit()){
        switch(_getch()){
        case '0':
            system("cls");
            tankGameStructureClassicGameObject.tankDifficulty();
            break;
        case '1':
            classicGame::difficulty = 1;
            mainGame();
            break;
        }
    }
    difficulty();
}

void classicMode::mainGame(){
    system("cls");
    cout << "--------------------\tSCORE: " << classicGame::score << endl;
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout << "\n";
    cout.width(classicGame::movement);
    cout << classicGame::tank;
    cout << "\n";
    cout << "--------------------" << endl;

    //CONTROLS
    if(kbhit()){
        switch(_getch()){
        case 'W':
            cout << "COMING SOON";
            if(classicGame::tank=='W'){
                classicGame::tank='M';
            }
            break;
        case 'A':
            if(classicGame::tank!='W'){
              classicGame::movement--;
            }
            while(classicGame::movement<1){
                classicGame::movement=1;
            }
            break;
        case 'D':
            if(classicGame::tank!='W'){
               classicGame::movement++;
            }
            while(classicGame::movement>20){
                classicGame::movement=20;
            }
            break;
        case 'S':
            classicGame::tank = 'W';
            break;
        case 'Z':
            system("cls");
            tankgamemainClassicGameObject.mainMenu();
            break;
        }
    }
    mainGame();
}
