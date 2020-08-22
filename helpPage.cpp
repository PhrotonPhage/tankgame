#include "helpPage.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <algorithm>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <pthread.h>
#include <conio.h>

using namespace std;

tankgamemain tankgamehelpObject;

void helpPage::helpPageMain()
{
    system("cls");
    cout << "HELP\n\n";
    cout << "TIP: ALWAYS CAPS LOCK\n";
    cout << "1 - SHOOTING\n2 - INVASION (COMING SOON)\n3 - CLASSIC (COMING SOON)\n4 - CHAOTIC (COMING SOON)\n5 - MINIMAL\n\n";
    cout << "6 - CHANGELOGS\n\n0 - BACK\n";
    if(kbhit()){
        switch(_getch()){
        case '1':
            shootingGame();
            system("cls");
            break;
        case '5':
            minimalGame();
            system("cls");
            break;
        case '6':
            changelogs();
            system("cls");
            break;
        case '0':
            tankgamehelpObject.mainMenu();
            system("cls");
            break;
        }
    }
    helpPageMain();
}

void helpPage::changelogs(){
    system("cls");
    cout << "HELP > CHANGELOGS\n\n";
    cout << "CHANGELOGS:\n\n";
    cout << "WHAT'S NEW IN VERSION " << VERSION_MAJOR << "." << VERSION_MINOR << "." << VERSION_REVISION << VERBUILD << " " << VERSION << " BUILD " << BUILD  << "?\n";
    cout << "RELEASE 0.2.0:\n";
    cout << "-ADDED MINIMAL GAME MODE. SIMILAR TO SHOOTING BUT SIMPLIER\n";
    cout << "-ADDED BEEP SOUNDS. (GAMEOVER, PROGRAM START, ENEMY HIT)\n";
    cout << "-ADDED RECOMMENDED SETTINGS PAGE\n";
    cout << "-ADDED NAVIGATION TEXT IN SOME PAGES\n";
    cout << "-MINOR CHANGES TO SHOOTING MODE\n";
    cout << "-BUG FIXES\n";
    cout << "\nFOR MORE INFO, CHECK README.TXT IN GAME FOLDER\n";
    cout << "0 - BACK\n" << endl;
    if(kbhit()){
        switch(_getch()){
        case '0':
            system("cls");
            helpPageMain();
            break;
        }
    }
    changelogs();
}

void helpPage::shootingGame(){
    system("cls");
    cout << "HELP > SHOOTING GAME\n\n";
    cout << "SHOOTING GAME:\n\n";
    cout << "CONTROLS:\n";
    cout << "CAPS LOCK REQUIRED\n";
    cout << "W - UP/SHOOT\n";
    cout << "A - LEFT\n";
    cout << "D - RIGHT\n";
    cout << "S - SHIELD\n\n";
    cout << "Q - BUY HEALTH (W - BUY, Q - CANCEL)\n";
    cout << "Z - PAUSE/UNPAUSE GAME\n";
    cout << "X - QUIT GAME (0 - NO, 1 - YES)\n";
    cout << "E - INVENTORY (A - ANTITANK, B - BOMB, R - ROCKET, W - WIDE ROCKET E - CLOSE)\n";
    cout << "F - BUY AMMUNITION (A - ANTITANK, B - BOMB, R - ROCKET, W - WIDE ROCKET F - BACK)\n\n";
    cout << "GAMEMODE SHOOTING:\n";
    cout << "W = ENEMY\t, = ENEMY AMMUNITION\n";
    cout << "M = PLAYER\t. = PLAYER AMMUNITON\n";
    cout << "MECHANICS:\n";
    cout << "SCORE REWARD AMMO1 = SCORE: 100 (EASY/NORMAL), 50 (HARD), 25 (EXPERT)\n";
    cout << "AMMUNITION REWARD AMMO1 = AMMUNITION: +10 EASY, +7 NORMAL, +5 HARD, +3 EXPERT\n";
    cout << "AMMO2: (SCORE+AMMO) EASY: 100+15, NORMAL: 100+9, HARD: 75+7, EXPERT: 25+5\n";
    cout << "AMMO3: (SCORE+AMMO) EASY: 125+20, NORMAL: 120+5, HARD: 50+5, EXPERT: 25+3\n";
    cout << "AMMO4: (SCORE+AMMO) EASY: 50+5, NORMAL: 50+5, HARD: 25+3, EXPERT: 10+2\n";
    cout << "HEALTH DAMAGE: EASY: 1 NORMAL: 2 HARD: 3 EXPERT: 5\n";
    cout << "ENEMY TANK MOVES VERY QUICKLY (VERY RANDOM). TRY TO AVOID IT AS YOU WANT\n";
    cout << "0 - BACK\n";
    if(kbhit()){
        switch(_getch()){
        case '0':
            system("cls");
            helpPageMain();
            break;
        }
    }
    shootingGame();
}

void helpPage::minimalGame(){
    system("cls");
    cout << "HELP > MINIMAL GAME\n\n";
    cout << "MINIMAL GAME:\n\n";
    cout << "MINIMAL MODE IS A SIMPLIER VERSION COMPARED TO SHOOTING GAME\n";
    cout << "CONTROLS:\nW - SHOOT\nA - LEFT\nD - RIGHT\nS - SHIELD\n";
    cout << "W - ENEMY\t, - ENEMY FIRE\n";
    cout << "M - PLAYER\t. - PLAYER FIRE\n";
    cout << "Z - PAUSE\tX - QUIT GAME\n";
    cout << "SCORE REWARD = SCORE: 25 (EASY/NORMAL), 10 (HARD), 5 (EXPERT)\n";
    cout << "AMMUNITION REWARD = AMMUNITION: +10 EASY, +7 NORMAL, +5 HARD, +3 EXPERT\n";
    cout << "HEALTH DAMAGE: EASY: 1 NORMAL: 2 HARD: 3 EXPERT: 5\n";
    cout << "ENEMY TANK MOVES VERY QUICKLY (VERY RANDOM). TRY TO AVOID IT AS YOU WANT\n";
    cout << "0 - BACK\n";
    if(kbhit()){
        switch(_getch()){
        case '0':
            system("cls");
            helpPageMain();
            break;
        }
    }
    minimalGame();
}

void helpPage::classicGame(){
    system("cls");
    cout << "HELP > CLASSIC GAME\n\n";
    cout << "CLASSIC GAME:\n\n";
    cout << "CLASSIC GAME IS TECHNICALLY NOT A CLASSIC GAME. IT WAS\n";
    cout << "SUPPOSED TO WORK LIKE SHOOTING GAMES IN A TETRIS DEVICE\n";
    cout << "DUE TO DEVELOPER'S LIMITED AMOUNT OF TIME, THIS HAS BEEN\n";
    cout << "SPLIT INTO 3 UPDATES: 0.3.0, 0.4.0 AND 1.0.0\n";
    cout << "W - SHOOT A - LEFT, D - RIGHT S - SCOPE\n";
    cout << "Q - BUY HEALTH Z - PAUSE X - EXIT E - UPDATE BLOCKS\n";
    cout << "ICONS:\n";
    cout << "I - BLOCKS M - TANK . - BULLET\n";
    cout << "PER MOVEMENT WILL DECREASE 1 SCORE\n";
    cout << "BLOCKS UPDATE IN SPEFICIED VALUE\n\n";
    cout << "X - BACK";
    if(kbhit()){
        switch(_getch()){

        }
    }
    classicGame();
}
