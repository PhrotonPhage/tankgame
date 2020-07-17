#include "minimalGame.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <algorithm>
#include <thread>

tankgamemain tankgamemainMiniGameObject;
tankGameStructure tankGameStructureObjectMiniGame;

static int moveAtimes05;
static int moveDtimes05;
static int moveStimes05;
static int shootingTimes05;
static int death05;

namespace miniGame{
    char tank = 'M';
    char enemyTank = 'W';
    int difficulty;
    int movement = 10;
    static char controllerA = 0;
    static char controllerB = 1;

    int score = 0;
    int healthPoint = 25;
    int ammunition = 100;

    int highscore;
    int recentScore;

    int x, y, enemyTankX, enemyTankY;
    int width = 20;
    int height = 18;
}

namespace miniGameShoot{
    int shootPlayer;
    char shootPlayerPtr;
    int enemyShoot;
    char enemyShootPtr;
}

namespace miniGameGUI{
    int playerNameDisplay = 0;
    string playerName = "PLAYER";
    int uiWidth = 30;

    static int audio = 1;
}

namespace miniGameEnemyShoot{
    int randomEnemyShootChance;
}

static int recentScore05 = miniGame::recentScore;
static int highscore05 = miniGame::highscore;
void minimalGame::audio(int audio){
    miniGameGUI::audio = audio;
}

void minimalGame::minimalGameVariablePass(string playerName, int playerNameDisplay){
    miniGameGUI::playerName = playerName;
    miniGameGUI::playerNameDisplay = playerNameDisplay;
    tankGameStructureObjectMiniGame.gamemode5Stats(death05,moveAtimes05,moveDtimes05,moveStimes05,shootingTimes05,recentScore05,highscore05);
}

void minimalGame::difficulty(){
    system("cls");
    cout << "GAMEMODE 5: MINIMAL\n\n";
    cout << "CHOOSE DIFFICULTY:\n\n";
    cout << "0 - BACK\n\n";
    cout << "1 - EASY\n";
    cout << "2 - NORMAL\n";
    cout << "3 - HARD\n";
    cout << "4 - EXPERT\n\n";
    if(kbhit()){
        switch(_getch()){
        case '0':
            system("cls");
            tankGameStructureObjectMiniGame.tankDifficulty();
            break;
        case '1':
            system("cls");
            miniGame::difficulty = 1;
            mainGame();
            break;
        case '2':
            system("cls");
            miniGame::difficulty = 2;
            mainGame();
            break;
        case '3':
            system("cls");
            miniGame::difficulty = 3;
            mainGame();
            break;
        case '4':
            system("cls");
            miniGame::difficulty = 4;
            mainGame();
            break;
        }
    }
    difficulty();
}

void minimalGame::mainGame(){
    system("cls");
    ///A game mode that is simplier than default game mode
    //cout << miniGame::x << " " << miniGame::y << " " << miniGameGUI::uiWidth << " " << miniGame::enemyTankX << endl;
    cout << "--------------------  "; //<< endl;
    if(miniGameGUI::playerNameDisplay>=1&&miniGameGUI::playerName!="CLS"){
        //cout.width(miniGameGUI::uiWidth-33);
        cout << miniGameGUI::playerName << endl;
    }else{
        cout << "\n";
    }

    if(miniGame::score>miniGame::highscore){
        miniGame::highscore = miniGame::score;
        highscore05 = miniGame::highscore;
        tankGameStructureObjectMiniGame.gamemode5Stats(death05,moveAtimes05,moveDtimes05,moveStimes05,shootingTimes05,recentScore05,highscore05);
    }
    ///ENEMY MOVEMENT
    miniGame::enemyTankX = miniGame::width / 2;
    miniGame::enemyTankY = miniGame::height / 2;
    miniGame::x = miniGame::enemyTankX;
    miniGame::y = miniGame::enemyTankY;
    miniGame::enemyTankY++;

    if(miniGame::enemyTankY>=1){
        miniGame::x = rand() % 20;
        miniGame::y = rand() % 18;
        cout.width(miniGame::x);
    }

    miniGameEnemyShoot::randomEnemyShootChance = miniGame::enemyTankX;
    miniGameEnemyShoot::randomEnemyShootChance = rand() % 10;
    if(miniGameEnemyShoot::randomEnemyShootChance==5){
        miniGameShoot::enemyShootPtr = ',';
        miniGameShoot::enemyShoot = 1;
        if(miniGameShoot::enemyShoot==1){
            if(miniGameShoot::enemyShootPtr==','){
                miniGameShoot::enemyShoot = 0;
            }
            miniGameShoot::enemyShoot = 0;
        }

    }

    int mguiAxis;
    int mguiAxis2;

    mguiAxis = miniGameGUI::uiWidth - miniGame::x;
    mguiAxis2 = miniGameGUI::uiWidth - miniGame::movement;

    //ENEMY SHOOTING
    if(miniGame::x==miniGame::movement&&miniGameShoot::shootPlayerPtr=='.'){
        if(miniGame::difficulty==0){
            cout << "ERROR 02\n";
        }
        if(miniGame::difficulty==1){
            miniGame::score += 25;
            miniGame::ammunition += 10;
        }if(miniGame::difficulty==2){
            miniGame::score += 25;
            miniGame::ammunition += 7;
        }if(miniGame::difficulty==3){
            miniGame::score += 10;
            miniGame::ammunition += 5;
        }if(miniGame::difficulty==4){
            miniGame::score += 5;
            miniGame::ammunition += 3;
        }
        if(miniGameGUI::audio==1){
            Beep(300,400);
        }
    }
    if(miniGame::x==miniGame::movement&&miniGameShoot::enemyShootPtr==','&&miniGame::tank!='W'){
        if(miniGame::difficulty==1){
            miniGame::healthPoint -= 1;
        }if(miniGame::difficulty==2){
            miniGame::healthPoint -= 2;
        }if(miniGame::difficulty==3){
            miniGame::healthPoint -= 3;
        }if(miniGame::difficulty==4){
            miniGame::healthPoint -= 5;
        }
    }
    if(miniGame::healthPoint==0){
        gameOverMini();
    }if(miniGame::healthPoint<=-1){
        miniGame::healthPoint = 0;
    }
    cout << miniGame::enemyTank;
    cout.width(mguiAxis-1);
    cout << "SCORE: " << miniGame::score;
    cout << "\n";
    if(miniGameShoot::shootPlayerPtr!='.'){
                cout.width(miniGame::x);
                cout << miniGameShoot::enemyShootPtr;
    }
    if(miniGameShoot::enemyShootPtr!=','){
        cout.width(mguiAxis);
    }if(miniGameShoot::enemyShootPtr==','){
        cout.width(mguiAxis);
    }if(miniGameShoot::shootPlayerPtr=='.'){
        cout.width(miniGameGUI::uiWidth);
    }
    cout << "  HEALTH: " << miniGame::healthPoint;
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    cout.width(mguiAxis2+4);
    cout << "  AMMUNITION: " << miniGame::ammunition;
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    cout.width(mguiAxis2+3);
    cout << "HIGHSCORE: " << miniGame::highscore;
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    static int miniGamePause;
    if(miniGamePause>=1){
        cout.width(mguiAxis2-2);
        cout<<"PAUSED";
    }
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    if(miniGamePause>=1){
        cout.width(mguiAxis2+4);
        cout<<"Z - CONTINUE";
        switch(_getch()){
                case 'Z':
                    miniGamePause = 0;
                    break;
                }
    }
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGameShoot::shootPlayerPtr;
    cout << "\n";
    cout.width(miniGame::movement);
    cout << miniGame::tank;
    cout << "\n";
    cout << "--------------------" << endl;
    //CONTROLS
    miniGameShoot::shootPlayerPtr = ' ';
    if(kbhit()){
    switch(_getch()){
        if(miniGame::controllerA==1){
            case 72:
                miniGame::tank = 'M';
                miniGame::tank = 'M';
                miniGameShoot::shootPlayer++;
                if(miniGameShoot::shootPlayer>=1){
                    miniGameShoot::shootPlayerPtr = '.';
                    miniGameShoot::shootPlayer = 0;
                }
                shootingTimes05++;
                tankGameStructureObjectMiniGame.gamemode5Stats(death05,moveAtimes05,moveDtimes05,moveStimes05,shootingTimes05,recentScore05,highscore05);
                miniGame::ammunition -= 1;
                break;
            case 80:
                miniGame::tank = 'W';
                moveStimes05++;
                tankGameStructureObjectMiniGame.gamemode5Stats(death05,moveAtimes05,moveDtimes05,moveStimes05,shootingTimes05,recentScore05,highscore05);
                break;
            case 75:
                if(miniGame::tank!='W'){
                    miniGame::movement--;
                }
                if(miniGame::movement<1){
                    miniGame::movement = 1;
                }
                moveAtimes05++;
                tankGameStructureObjectMiniGame.gamemode5Stats(death05,moveAtimes05,moveDtimes05,moveStimes05,shootingTimes05,recentScore05,highscore05);
                break;
            case 77:
                if(miniGame::tank!='W'){
                    miniGame::movement++;
                }
                if(miniGame::movement>20){
                    miniGame::movement = 20;
                }
                moveDtimes05++;
                tankGameStructureObjectMiniGame.gamemode5Stats(death05,moveAtimes05,moveDtimes05,moveStimes05,shootingTimes05,recentScore05,highscore05);
                break;
            }
            if(miniGame::controllerB==1){
            case 'D':
                if(miniGame::tank!='W'){
                    miniGame::movement++;
                }
                if(miniGame::movement>20){
                    miniGame::movement = 20;
                }
                moveDtimes05 += 1;
                tankGameStructureObjectMiniGame.gamemode5Stats(death05,moveAtimes05,moveDtimes05,moveStimes05,shootingTimes05,recentScore05,highscore05);
                break;
            case 'A':
                if(miniGame::tank!='W'){
                    miniGame::movement--;
                }
                if(miniGame::movement<1){
                    miniGame::movement = 1;
                }
                moveAtimes05++;
                tankGameStructureObjectMiniGame.gamemode5Stats(death05,moveAtimes05,moveDtimes05,moveStimes05,shootingTimes05,recentScore05,highscore05);
                break;
            case 'W':
                miniGame::tank = 'M';
                shootingTimes05++;
                tankGameStructureObjectMiniGame.gamemode5Stats(death05,moveAtimes05,moveDtimes05,moveStimes05,shootingTimes05,recentScore05,highscore05);
                miniGameShoot::shootPlayer++;
                if(miniGameShoot::shootPlayer>=1){
                    miniGameShoot::shootPlayerPtr = '.';
                    miniGameShoot::shootPlayer = 0;
                }
                miniGame::ammunition -= 1;
                if(miniGame::ammunition<=0){
                    miniGame::ammunition = 0;
                }
                if(miniGame::ammunition<=0&&miniGameShoot::shootPlayerPtr=='.'){
                    miniGame::healthPoint -= 5;
                }
                if(miniGame::healthPoint<=0){
                    gameOverMini();
                }
                break;
            case 'S':
                miniGame::tank = 'W';
                moveStimes05++;
                tankGameStructureObjectMiniGame.gamemode5Stats(death05,moveAtimes05,moveDtimes05,moveStimes05,shootingTimes05,recentScore05,highscore05);
                break;
            case 'X':
                Beep(500,200);
                cout << "ARE YOU SURE DO YOU WANT TO QUIT? 1 - YES 0 - NO\n";
                switch(_getch()){
                case '1':
                    gameOverMini();
                    break;
                case '0':
                    mainGame();
                    break;
                }
                break;
            case 'Z':
                miniGamePause = 1;
                break;
            }
        }
    }

    //OTHERS
    mainGame();
}

void minimalGame::gameOverMini(){
    system("cls");
    death05++;
    tankGameStructureObjectMiniGame.gamemode5Stats(death05,moveAtimes05,moveDtimes05,moveStimes05,shootingTimes05,recentScore05,highscore05);
    miniGame::recentScore = miniGame::score;
    recentScore05 = miniGame::recentScore;
    tankGameStructureObjectMiniGame.gamemode5Stats(death05,moveAtimes05,moveDtimes05,moveStimes05,shootingTimes05,recentScore05,highscore05);
    if(miniGameGUI::audio==1){
        Beep(600,1000);
    }
    cout << "GAME OVER!\n\n";
    cout << "SCORE: " << miniGame::score << "\tHIGHSCORE: " << miniGame::highscore << endl;
    cout << "0 - QUIT 1 - RETRY\n\n";
    switch(_getch()){
    case '0':
        miniGame::healthPoint = 25;
        miniGame::ammunition = 100;
        miniGame::score = 0;
        miniGame::movement = 10;
        system("cls");
        cout << "RECENT SCORE: " << miniGame::recentScore << endl;
        this_thread::sleep_for(chrono::seconds(1));
        system("cls");
        tankgamemainMiniGameObject.mainMenu();
    case '1':
        miniGame::healthPoint = 25;
        miniGame::ammunition = 100;
        miniGame::score = 0;
        miniGame::movement = 10;
        system("cls");
        mainGame();
        break;
    default:
        system("cls");
    }
    gameOverMini();
}
