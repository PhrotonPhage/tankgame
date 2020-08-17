#include "tankGameStructure.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <algorithm>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <pthread.h>
#include <sstream>
#include <fstream>
#include <istream>
#include <ostream>
#include <streambuf>

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

//#define NUM_THREADS 1
using namespace std;

int ammo1 = 1;
int wideRocket, ammo2;
int rocket, ammo3;
int bomb, ammo4;

static int gameMode;
static int difficulty = 0;
char tank = 'M';
char enemyTank;
int score = 0;
int highscore;
int recentScore;
int healthPoint = 25;
int ammunition = 100;
const int width = 60;
const int height = 18;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
bool gameOver = false;
int movement = 30;
int enemyMovement;
int shootPlayer;
char shootPlayerPtr;
int enemyShoot;
char enemyShootPtr;
char enemyShootPtr2;
int x, y, enemyTankX, enemyTankY;
static char gameCursor;
int directDebug;
static char debugCursor;
bool debugText;
int debugVariable;
int playerNameDisplay;
string playerName = "PLAYER";
char playerColor;
static string tankColor = "color 0f";
static char video1 = '1', video2, video3, video4, video5;
static char AVideo = '0';
static char controllerA = '0';
static char controllerB = '1';
static int death;
int randomEnemyShootChance;
static int experimentalFeatures;
int enemyTankStatic;
int shootingTimes;
int moveDtimes;
int moveAtimes;
int moveStimes;
static char controllerSettings;
int debugEnable;
int debugSlowMode;
int chanceExceed = 0;
int audio = 1;

tankgamemain tankgamemainObject;
minimalGame minimalGameObject;
classicMode classicModeObject;

static int death5 = 0;
static int shootingTimes5 = 0;
static int moveDtimes5 = 0;
static int moveAtimes5 = 0;
static int moveStimes5 = 0;
static int recentScore5 = 0;
static int highscore5 = 0;

static int death3 = 0;
static int shootingTimes3 = 0;
static int moveDtimes3 = 0;
static int moveAtimes3 = 0;
static int moveStimes3 = 0;
static int recentScore3 = 0;
static int highscore3 = 0;

std::string ipName;
int nR, nC;

std::ifstream fin("config.txt");
std::string line;
std::istringstream sinM;

fstream file;
ofstream fileOpen;

const char config[] = "playerName=Anonymous\n"
                    "videoTheme=1\n"
                    "displayHighscore=0\n"
                    "highscore=0\n"
                    "experimental=0\n"
                    "debugA=0\n"
                    "debugB=0\n"
                    "debugC=0\n"
                    "controls=1\n"
                    "statisticW=0\n"
                    "statisticA=0\n"
                    "statisticS=0\n"
                    "statisticD=0\n"
                    "recentScore=0";

const WORD color[] = {
        0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
    };

    HANDLE hstdin  = GetStdHandle( STD_INPUT_HANDLE  );
	HANDLE hstdout = GetStdHandle( STD_OUTPUT_HANDLE );
	WORD   index   = 0;

    CONSOLE_SCREEN_BUFFER_INFO csbi;

void tankGameStructure::gamemode5Stats(int death05,int moveAtimes05,int moveDtimes05,int moveStimes05,int shootingTimes05,int recentScore05, int highscore05){
    death5 = death05;
    moveAtimes5 = moveAtimes05;
    moveDtimes5 = moveDtimes05;
    moveStimes5 = moveStimes05;
    shootingTimes5 = shootingTimes05;
    recentScore5 = recentScore05;
    highscore5 = highscore05;
}

void tankGameStructure::gamemode3Stats(int death03,int shootingTimes03,int moveAtimes03,int moveDtimes03,int moveStimes03,int recentScore03,int highscore03){
    death3 = death03;
    moveAtimes3 = moveAtimes03;
    moveDtimes3 = moveDtimes03;
    moveStimes3 = moveDtimes03;
    shootingTimes3 = shootingTimes03;
    recentScore3 = recentScore03;
    highscore3 = highscore03;
}

void tankGameStructure::playerProperties(){
    GetConsoleScreenBufferInfo( hstdout, &csbi );
    cout << "SETTINGS > PLAYER\n\n";
    cout << "PLAYER SETTINGS\n";
    cout << "N - NAME";
    if(playerName!=" "||playerName!=""||playerName!="PLAYER"){
        cout << " - " << playerName << endl;
    }else{
        cout << "\n";
    }
    if(experimentalFeatures==1){
    cout << "C - TANK COLOR\n";
    }
    cout << "X - BACK\n";
    static char playerSettingsCursor;
    cin >> playerSettingsCursor;
    while((playerSettingsCursor=='N')|(playerSettingsCursor=='n'))
    {
        cout << "TO CLEAR PLAYERNAME, WRITE CLS\n";
        cout << "PLAYERNAME:";
        cin >> playerName;
        minimalGameObject.minimalGameVariablePass(playerName,playerNameDisplay);
        cout << playerName << " - PLAYERNAME SET\n"  << endl;
        playerNameDisplay = 1;
        minimalGameObject.minimalGameVariablePass(playerName,playerNameDisplay);
        if(playerName=="cls"||playerName=="CLS"){
            playerName = " ";
        }
        playerProperties();
        system("cls");
    }
    while((playerSettingsCursor=='X')|(playerSettingsCursor=='x')){
        system("cls");
        tankgamemainObject.settings();
    }
    if(experimentalFeatures==1){
    while((playerSettingsCursor=='C')|(playerSettingsCursor=='c')){
        cout << "SETTINGS > PLAYER > TANK COLOR\n\n";
        cout << "CHOOSE COLOR (ALPHA):\n\n";
        cout << "0 - Black\t"; cout << "8 - Gray\n";
        cout << "1 - Navy Blue\t"; cout << "9 - Blue\n";
        cout << "2 - Green\t"; cout << "A - Radioactive Green\n";
        cout << "3 - Aqua\t"; cout << "B - Light Aqua\n";
        cout << "4 - Red\t"; cout << "C - Light Red\n";
        cout << "5 - Purple\t"; cout << "D - Magenta\n";
        cout << "6 - Orange/Tan\t"; cout << "E - Yellow\n";
        cout << "7 - White\t"; cout << "F - Bright White\n\n";
        cout << "X - BACK\n";
        cin >> playerColor;
        while(playerColor=='0'){
            tankColor = "color 00";
            tankgamemainObject.settings();
        }
        while(playerColor=='1'){
            tankColor = "color 01";
            tankgamemainObject.settings();
        }
        while(playerColor=='X'){
            tankgamemainObject.settings();
        }
    }


    }
    minimalGameObject.minimalGameVariablePass(playerName, playerNameDisplay);
}

void tankGameStructure::tankDifficulty(){
    GetConsoleScreenBufferInfo( hstdout, &csbi );
    system("cls");
    cout << "CHOOSE GAME MODE\n";
    cout << "0 - BACK TO MAIN MENU\t\tHIGHSCORE:" << endl << endl;
    cout << "1 - SHOOTING\t\t\t" << highscore << endl;
    cout << "2 - INVASION - COMING SOON" << endl;
    cout << "3 - CLASSIC" << endl;
    cout << "4 - CHAOS - COMING SOON" << endl;
    cout << "5 - MINIMAL\t\t\t" << highscore5 << endl;
    cout << "INPUT:";
    if(kbhit()){
    switch(_getch()){
    case '0':
        system("cls");
        tankgamemainObject.mainMenu();
        mainGame();
        break;
    case '1':
        system("cls");
        gameMode = 1;
        difficultySelection();
        break;
    case '2':
        system("cls");
        cout << "COMING SOON\n";
        break;
    case '3':
        system("cls");
        classicModeObject.difficulty();
        break;
    case '4':
        system("cls");
        cout << "COMING SOON\n";
        break;
    case '5':
        system("cls");
        gameMode = 5;
        minimalGameObject.difficulty();
        break;
    }
    }
    tankDifficulty();
        //mainGame();
}

void tankGameStructure::difficultySelection(){
    system("cls");
    cout << "GAMEMODE 1: SHOOTING\n\n";
        cout << "DIFFICULTY\n\n";
        cout << "0 - BACK TO GAME SELECTION\n\n";
        cout << "1 - EASY\n";
        cout << "2 - NORMAL\n";
        cout << "3 - HARD\n";
        cout << "4 - EXPERT\n";
        if(kbhit()){
        switch(_getch()){
            case '0':
            difficulty = 0;
            system("cls");
            tankDifficulty();
            break;
            case '1':
            system("cls");
            difficulty = 1;
            if(gameMode==1){
                mainGame();
            }
            if(gameMode==5){
                minimalGameObject.mainGame();
            }
            break;
            case '2':
            system("cls");
            difficulty = 2;
            if(gameMode==1){
                mainGame();
            }
            if(gameMode==5){
                minimalGameObject.mainGame();
            }
            break;
            case '3':
            system("cls");
            difficulty = 3;
            if(gameMode==1){
                mainGame();
            }
            if(gameMode==5){
                minimalGameObject.mainGame();
            }
            break;
            case '4':
            system("cls");
            difficulty = 4;
            if(gameMode==1){
                mainGame();
            }
            if(gameMode==5){
                minimalGameObject.mainGame();
            }
            break;
        }
        }
        difficultySelection();
        minimalGameObject.minimalGameVariablePass(playerName, playerNameDisplay);
}

void tankGameStructure::mainGame(){
///DEBUGGING AND UI
        system("cls");
        //SetConsoleTextAttribute(hstdout, 0x0F);
        if(playerNameDisplay>=1){
            if(playerName!=" "){
            cout << playerName  << "\t\t";
            if(AVideo=='0'){
                cout << "\n";
            }
            }
        }else{}
        if(AVideo=='1'){
            cout << "HIGHSCORE: " << highscore;
            while(score>highscore)
            {
                highscore = score;
            }
            if(debugText==true||directDebug>=1||debugVariable>=1){
                cout << " DEBUG: ";
            }else{
                cout << "\n";
            }
        }
        if(directDebug>=1){
            cout << x << " " << y << " " << enemyTankX << " " << enemyTankY << " " << movement << " " << shootPlayer;
            cout << " " << shootPlayerPtr << " " << enemyMovement <<" "<<enemyShoot<<" "<<enemyShootPtr<<" "<<enemyShootPtr2;
            cout << " " << randomEnemyShootChance << endl;
        }else{}
        if(debugText==true){
            cout << "v" << VERSION_MAJOR << "." << VERSION_MINOR << "." << VERSION_REVISION << VERBUILD << " " << VERSION << " BUILD " << BUILD << endl;
        }
        if(debugVariable>=1){
            cout << " " << score << " " << highscore << " " << healthPoint << " " << ammunition << " " << recentScore << " " << shootingTimes;
            cout << " " << moveAtimes << " " << moveDtimes << " " << moveStimes << endl;
        }
        if(debugSlowMode>=1){
            Sleep(100);
            system("cls");
        }
        cout << "___________________________________________________________\n";
        cout << "\n";
///ENEMY MOVEMENT
        //char shootPlayerPtr2;
        //Sleep(1);
        enemyTankX = width / 2;
        enemyTankY = height / 2;
        y = enemyTankY;
        x = enemyTankX;
        enemyTankY++;
        static char enemyWidthReference;
        enemyWidthReference = x;
        //enemyMovement = rand() % 60;
        while(enemyTankY>=1){
            y = rand() % 18;
            x = rand() % 60;
            enemyWidthReference = ' ';
            //enemyWidthReference = x;
            //enemyMovement = x;
            //enemyMovement = rand() % 60;
            //cout << " ";
            //cout.fill(' ');
            cout.width(x);
            //cout.fill(enemyWidthReference);
            //cout.fill(enemyMovement);
            if(enemyTankStatic==0){
            enemyTank = 'W';
            }else{
            enemyTank = ' ';
            enemyTankStatic = 0;
            }
            cout << enemyTank << endl;

            randomEnemyShootChance = enemyTankX;
        randomEnemyShootChance = rand() % 10;
                if(randomEnemyShootChance==5){
                    enemyShootPtr2 = ',';
                    if(movement>=40){
                    enemyShoot = 1;
                    if(enemyShoot==1){
                    while(enemyShootPtr2==','){
                        enemyShoot++;
                        enemyShootPtr2 = 0;
                        }
                    if(shootPlayerPtr=='.'){
                        enemyShoot = 0;
                    }
                    }
                    }
                    enemyShootPtr = ',';
                    if(movement<=20){
                        enemyShoot = 1;
                        if(enemyShoot==1){
                        while(enemyShootPtr==','){
                            enemyShoot--;
                            enemyShootPtr = 0;
                        }
                        if(shootPlayerPtr=='.'){
                            enemyShoot = 0;
                        }
                        }
                    }
                }
                enemyShoot = 0;
                if(shootPlayerPtr!='.'){
                    if(movement>=31){
                    cout.width(x);
                    cout << enemyShootPtr;
                    }
                }
                if(shootPlayerPtr!='.'){
                    if(movement<=30){
                        cout.width(x);
                        enemyShootPtr = enemyShootPtr2;
                        cout << enemyShootPtr;
                    }
                }
            if((x==movement&&enemyShootPtr==','&&tank!='W')||(x==movement&&enemyShootPtr2==','&&tank!='W')){
                if(difficulty==1){
                    healthPoint -= 1;
                }if(difficulty==2){
                    healthPoint -= 2;
                }if(difficulty==3){
                    healthPoint -= 3;
                }if(difficulty==4){
                    healthPoint -=5;
                }
            }

            enemyMovement = 0;
            enemyTankY = 0;
            enemyTankX = 0;

///SCORING MECHANICS
            //if(x==movement&&shootPlayerPtr=='.')
            if(x==movement&&shootPlayerPtr=='.'){
                if(audio==1){
                    Beep(300,400);
                }
            if(difficulty==1){
                if(ammo1==1){
                ammunition += 10;
                score += 100;
                }if(ammo2==1){
                ammunition += 15;
                score += 100;
                }if(ammo3==1){
                ammunition += 20;
                score += 125;
                }if(ammo4==1){
                ammunition += 5;
                score += 50;
                }
                if(experimentalFeatures==1){
                enemyTank = ' ';
                enemyTankStatic++;
                //this_thread::sleep_for(chrono::milliseconds(2));
                }
            }
            if(difficulty==2){
                if(ammo1==1){
                ammunition += 7;
                score += 100;
                }if(ammo2==1){
                ammunition += 9;
                score += 100;
                }if(ammo3==1){
                ammunition += 15;
                score += 120;
                }if(ammo4==1){
                ammunition += 5;
                score += 50;
                }
            }
            if(difficulty==3){
                if(ammo1==1){
                ammunition += 5;
                score += 50;
                }if(ammo2==1){
                ammunition += 7;
                score += 50;
                }if(ammo3==1){
                ammunition += 10;
                score += 75;
                }if(ammo4==1){
                ammunition += 3;
                score += 25;
                }
            }
            if(difficulty==4){
                if(ammo1==1){
                ammunition += 3;
                score += 25;
                }if(ammo2==1){
                ammunition += 5;
                score += 25;
                }if(ammo3==1){
                ammunition += 7;
                score += 50;
                }if(ammo4==1){
                ammunition += 2;
                score += 10;
                }
            }
            }else{

            }
        }
///OTHERS
        while(healthPoint<=0){
            gameOver = true;
            gameOverVoid();
        }
        if(healthPoint<=5){
            system("color c0");
        }else{
            if(video1=='1'){
                system("color 0f");
            }if(video2=='2'){
                system("color 70");
            }if(video3=='3'){
                system("color f0");
            }if(video4=='4'){
                system("color 0a");
            }if(video5=='5'){
                system("color 07");
            }
        }
///SHOOTING AREA
            //this_thread::sleep_for(chrono::milliseconds(1));
        //int enemyShootMovement, enemyShootMovement2;
        //enemyShootMovement = y / 2;
        //enemyShootMovement2 = y / 2;
        /*while(enemyShootMovement>30||enemyShootMovement<0){
            enemyShootMovement = 15;
        }while(enemyShootMovement2>60||enemyShootMovement2<30){
            enemyShootMovement2 = 45;
        }*///cout << enemyShootMovement << " " << enemyShootMovement2 << endl;
        if(enemyShootPtr!=','){
        cout.width(movement);
        //cout << "\n";
        cout << shootPlayerPtr;
        }
        /*if(experimentalFeatures==1){
            cout.width(enemyMovement);
            cout << enemyShootPtr;
            //enemyShootMovement = 0;
        }
        cout.width(movement);*/

        /*if(experimentalFeatures==1){
            cout.width(enemyMovement);
            cout << enemyShootPtr2;
            //enemyShootMovement2 = 0;
        }*/
        cout << "\n";
        cout.width(movement);
        cout << shootPlayerPtr;
        cout << "\n";
        cout.width(movement);
        if(ammo4==1){
            cout << " ";
        }else{
            cout << shootPlayerPtr;
        }
        cout << "\n";
        cout.width(movement);
        cout << shootPlayerPtr;
        cout << "\n";
        cout.width(movement);
        if(ammo4==1){
            cout << " ";
        }else{
            cout << shootPlayerPtr;
        }
        cout << "\n";
        cout.width(movement);
        cout << shootPlayerPtr;
        cout << "\n";
        cout.width(movement);
        if(ammo4==1){
            cout << " ";
        }else{
            cout << shootPlayerPtr;
        }
        cout << "\n";
        cout.width(movement);
        cout << shootPlayerPtr;
        cout << "\n";
        cout.width(movement);
        if(ammo4==1){
            cout << " ";
        }else{
            cout << shootPlayerPtr;
        }
        cout << "\n";
        cout.width(movement);
        cout << shootPlayerPtr;
        cout << "\n";
        cout.width(movement);
        if(ammo4==1){
            cout << " ";
        }else{
            cout << shootPlayerPtr;
        }
        cout << "\n";
        cout.width(movement);
        cout << shootPlayerPtr;
        cout << "\n";
        cout.width(movement);
        if(ammo4==1){
            cout << " ";
        }else{
            cout << shootPlayerPtr;
        }
        cout << "\n";
        cout.width(movement);
        cout << shootPlayerPtr;
        cout << "\n";
        cout.width(movement);
        if(ammo4==1){
            cout << " ";
        }else{
            if(ammo3==1){
                cout << "|";
            }else{
            cout << shootPlayerPtr;
            }
        }
        cout << "\n";
        cout.width(movement);
        if(ammo2==1||ammo3==1){
            cout << "|";
        }else{
        cout << shootPlayerPtr;
        }
        cout << "\n";
        cout.width(movement);
        //system("color 0f");
        cout << tank;
        //SetConsoleTextAttribute(hstdout, 0x0F);
        cout << "\n__________________________________________________________" << endl;
        cout << "SCORE: " << score << "\t"<<"AMMUNITION: ";
        if(ammo1==1){
            cout << ammunition;
        }
        if(ammo2==1){
            cout << rocket;
        }
        if(ammo3==1){
            cout << wideRocket;
        }
        if(ammo4==1){
            cout << bomb;
        }
        cout <<"\t\tHEALTH: " << healthPoint << endl << endl;
        //cin >> gameCursor;
        shootPlayerPtr = ' ';
        //if (_kbhit())
	//{
	///CONTROLS
	if(kbhit()){
		switch (_getch() /*gameCursor*/)
		{
        if(controllerA=='1'){
        case KEY_UP:
            dir = UP;
            shootPlayer++;
            if(ammo1==1){
            ammunition--;
            shootingTimes++;
                if(ammunition<0){
                    cout << "OUT OF AMMUNITION" << endl;
                    if(audio==1){
                        Beep(500,400);
                    }
                    ammunition = 0;
                    healthPoint -= 5;
                }
            }
            if(ammo2==1){
                rocket--;
                shootingTimes++;
                if(rocket<0){
                    rocket = 0;
                    ammo2 = 0;
                    ammo1 = 1;
                    healthPoint -= 5;
                }
            }
            if(ammo3==1){
                wideRocket--;
                shootingTimes++;
                if(wideRocket<0){
                    wideRocket = 0;
                    ammo3 = 0;
                    ammo1 = 1;
                    healthPoint -= 5;
                }
            }
            if(ammo4==1){
                bomb--;
                shootingTimes++;
                if(bomb<0){
                    bomb = 0;
                    ammo4 = 0;
                    ammo1 = 1;
                    healthPoint -= 5;
                }
            }
            system("cls");
            tank = 'M';
            break;
		case KEY_LEFT:
		    if(tank!='W'){
			dir = LEFT;
			movement--;
			moveAtimes++;
		    }else{

		    }
			break;
		case KEY_RIGHT:
		    if(tank!='W'){
			dir = RIGHT;
			movement++;
			moveDtimes++;
		    }else{

		    }
			break;
        case KEY_DOWN:
            if(difficulty!=4){
            tank = 'W';
            moveStimes++;
            }
            break;
        }
        if(controllerB=='1'){
        case 'W':
            dir = UP;
            shootPlayer++;
            if(ammo1==1){
            ammunition--;
            shootingTimes++;
                if(ammunition<0){
                    cout << "OUT OF AMMUNITION" << endl;
                    if(audio==1){
                        Beep(500,400);
                    }
                    ammunition = 0;
                    healthPoint -= 5;
                }
            }
            if(ammo2==1){
                rocket--;
                shootingTimes++;
                if(rocket<=0){
                    rocket = 0;
                    ammo2 = 0;
                    ammo1 = 1;
                    healthPoint -= 5;
                }
            }
            if(ammo3==1){
                wideRocket--;
                shootingTimes++;
                if(wideRocket<=0){
                    wideRocket = 0;
                    ammo3 = 0;
                    ammo1 = 1;
                    healthPoint -= 5;
                }
            }
            if(ammo4==1){
                bomb--;
                shootingTimes++;
                if(bomb<=0){
                    bomb = 0;
                    ammo4 = 0;
                    ammo1 = 1;
                    healthPoint -= 5;
                }
            }
            system("cls");
            tank = 'M';
            break;
		case 'A':
		    if(tank!='W'){
			dir = LEFT;
			movement--;
			moveAtimes++;
		    }else{

		    }
			break;
		case 'D':
		    if(tank!='W'){
			dir = RIGHT;
			movement++;
			moveDtimes++;
		    }else{

		    }
			break;
        case 'S':
            if(difficulty!=4){
            tank = 'W';
            moveStimes++;
            }
            break;
        }
        case 'Z':
            //char pause;
            cout << "PAUSED: Z - CONTINUE" << endl;
            //cin>>pause;
            switch(_getch()){
            case 'Z':
                mainGame();
                break;
            default:
                cout << "INVALID INPUT\n";
                mainGame();
                break;
            }
            break;
		case 'X':
		    Beep(500,200);
                cout << "GAME OVER? 1 - YES, 0 - NO\n";
                switch(_getch()){
                case '1':
                    gameOver = true;
                    gameOverVoid();
                    break;
                case '0':
                    gameOver = false;
                    mainGame();
                    break;
		    }

			break;
        case 'E':
            //char inventory;
            cout << "INVENTORY: A - ANTITANK: " << ammunition << " R - ROCKET: " << rocket << " W - WIDE-ROCKET: " << wideRocket << " B - BOMB: " << bomb << " E - X"<< endl;
            //cin >> inventory;
            switch(_getch()){
            case 'A':
                ammo1 = 1;
                ammo2 = 0;
                ammo3 = 0;
                ammo4 = 0;
                mainGame();
                break;
            case 'R':
                ammo2 = 1;
                ammo1 = 0;
                ammo3 = 0; ammo4 = 0;
                mainGame();
                break;
            case 'W':
                ammo3 = 1;
                ammo2 = 0; ammo1 = 0; ammo4 = 0;
                mainGame();
                break;
            case 'B':
                ammo4 = 1;
                ammo2 = 0; ammo3 = 0; ammo1 = 0;
                mainGame();
                break;
            case 'E':
                cout << "CANCELLED" << endl;
                mainGame();
                break;
            default:
                cout << "INVALID INPUT\n";
                mainGame();
                break;
            }
            this_thread::sleep_for(chrono::seconds(5));
            break;
        case 'F':
            //char buyAmmo;
            cout << "BUY AMMO: ROCKET: -200 +20 WIDEROCKET: -300 +15 BOMB: -50 +20 ALL: -550 F - EXIT" << endl;
            //cin >> buyAmmo;
            switch(_getch()){
            case 'R':
                if(score>=200){
                    score -= 200;
                    rocket += 20;
                    mainGame();
                }else{
                    cout << "NOT ENOUGH SCORES" << endl;
                    mainGame();
                }
                break;
            case 'W':
                if(score>=300){
                    score -= 300;
                    wideRocket += 15;;
                    mainGame();
                }else{
                    cout << "NOT ENOUGH SCORES" << endl;
                    mainGame();
                }
                break;
            case 'B':
                if(score>=50){
                    score -= 50;
                    bomb += 20;
                    mainGame();
                }else{
                    cout << "NOT ENOUGH SCORES\n";
                    mainGame();
                }
                break;
            case 'A':
                if(score>=550){
                    score -= 550;
                    rocket += 20;
                    wideRocket -= 15;
                    bomb += 20;
                    mainGame();
                }else{
                    cout << "NOT ENOUGH SCORES\n";
                    mainGame();
                }
                break;
            case 'F':
                mainGame();
                break;
            default:
                cout << "INVALID INPUT!\n";
                mainGame();
                break;
            }
            break;
        case 'Q':
            if(difficulty!=4){
            cout << "BUY 5 HEALTH? COST: 125 SCORES. PRESS W TO BUY, Q TO CANCEL\n";
                switch(_getch()){
                case 'W':
                    if(score>=125){
                        score -= 125;
                        healthPoint += 5;
                        mainGame();
                    }else{
                        cout << "NOT ENOUGH SCORES" << endl;
                        mainGame();
                    }
                    break;
                case 'Q':
                    mainGame();
                    break;
                default:
                    cout << "INVALID INPUT!\n";
                    mainGame();
                    break;
                }
                this_thread::sleep_for(chrono::seconds(5));

            }else{
                cout << "BUYING HEALTH ON EXPERT DIFFICULTY IS NOT ALLOWED\n";
            }break;
		}

		}
		while(movement>=59){
            movement--;
		}
		while(movement<=0){
            movement++;
		}
		while(shootPlayer>=1){
            shootPlayer = shootPlayerPtr;
            shootPlayer = 0;
            shootPlayerPtr = '.';
            /*while((enemyTankX==movement)||(enemyTankY==movement)){
                score + 10;
                ammunition + 30;
            }*/
            mainGame();
		}
mainGame();
}

void tankGameStructure::gameOverVoid(){
    if(gameOver==true){
        SetConsoleTextAttribute(hstdout,0x0C);
        this_thread::sleep_for(chrono::seconds(2));
        if(audio==1){
            Beep(700,1000);
        }
        death++;
        cout << "\n\n-------------------------GAME OVER-------------------------\n\n";
        if(healthPoint<=0){
            cout << "\t\t\t YOU LOSE" << endl;
        }
        if(gameCursor=='X'){
            cout << "\t\t\t GAME EXIT" << endl;
        }
        static int gameOverMenu;
        cout << "\t\tSCORE: " << score << "\t";
        if(score>highscore){
            highscore = score;
        }
        recentScore = score;
        cout << "HIGHSCORE: " << highscore << endl;
        cout << "\t";
        if(score<500||chanceExceed==1){
        cout << "\t ";
        }
        cout << "TRY AGAIN? 0 = NO, 1 = YES";
        if(score>=500&&chanceExceed==0){
        cout << " 2 - GET CHANCE (-500 SCORES)";
        }
        cout << "\n\t\t\t     ";
        ammo2 = 0;
        ammo3 = 0;
        ammo4 = 0;
        cin >> gameOverMenu;
        switch(gameOverMenu){
        case 0:
        gameOverMenu--;
        gameOver = false;
        healthPoint = 20;
        ammunition = 100;
        score = 0;
        movement = 30;
        chanceExceed = 0;
        //system("color 0f");
        if(gameOverMenu<=0||gameOverMenu>=1){
            if(video1=='1'){
                system("color 0f");
            }if(video2=='1'){
                system("color 70");
            }if(video3=='1'){
                system("color f0");
            }if(video4=='1'){
                system("color 0a");
            }if(video5=='1'){
                system("color 07");
            }
        }else{}
        system("cls");
        cout << "RECENT SCORE: " << recentScore << endl;
        this_thread::sleep_for(chrono::seconds(1));
        tankgamemainObject.mainMenu();
        score = 0;
        break;
        case 1:
        gameOverMenu++;
        gameOver = false;
        healthPoint = 25;
        ammunition = 100;
        score = 0;
        movement = 30;
        chanceExceed = 0;
        //system("color 0f");
        if(gameOverMenu<=0||gameOverMenu>=1){
            if(video1=='1'){
                system("color 0f");
            }if(video2=='1'){
                system("color 70");
            }if(video3=='1'){
                system("color f0");
            }if(video4=='1'){
                system("color 0a");
            }if(video5=='1'){
                system("color 07");
            }
        }else{}
        system("cls");
        mainGame();
        break;
        case 2:
            if(score>=500){
                if(chanceExceed==0){
                gameOver = false;
                gameOverMenu++;
                score -= 500;
                healthPoint += 15;
                ammunition += 50;
                system("cls");
                chanceExceed = 1;
                if(gameOverMenu<=0||gameOverMenu>=1){
            if(video1=='1'){
                system("color 0f");
            }if(video2=='1'){
                system("color 70");
            }if(video3=='1'){
                system("color f0");
            }if(video4=='1'){
                system("color 0a");
            }if(video5=='1'){
                system("color 07");
            }
                }else{}
                mainGame();
            }else{
                cout << "ACTION NOT ALLOWED!" << endl;
            }

            }else{
                cout << "ACTION NOT ALLOWED!" << endl;
                gameOverVoid();
            }
        break;
        }
        system("cls");

    }
}

void tankGameStructure::debugModeDirect(int debug){
    debugEnable = debug;
    static bool caseADebug;
    static bool caseBDebug;
    static bool caseCDebug;
    static bool caseDDebug;
    cout << "SETTINGS > DEBUG MODE\n\n";
    cout << "DEBUG MODE\n" << endl;
    cout << "EX: A | 0/1 (ON AND OFF)" << endl;
    cout << "  0 - TURN OFF DEBUGGING" << endl;
    cout << caseADebug <<" A - DISPLAY PLAYER/ENEMY VARIABLES" << endl;
    cout << caseBDebug <<" B - DISPLAY DEBUG TEXT" << endl;
    cout << caseCDebug <<" C - DISPLAY GAMEPLAY VARIABLES" << endl;
    cout << caseDDebug <<" D - SLOWMODE" << endl;
    cout << "  X - EXIT"<< endl;
    cin >> debugCursor;
    switch(debugCursor){
    case '0':
        system("cls");
        cout << "TURNED OFF DEBUGGING" << endl;
        this_thread::sleep_for(chrono::seconds(1));
        tankgamemainObject.antiDebugMode();
        break;
    case 'A':
        cin >> caseADebug;
        switch(caseADebug){
        case 1:
        if(debugText==false){
        directDebug++;
        system("cls");
        cout << "VARIABLES DISPLAYED" << endl;
        debugModeDirect(debug);
        }else{
        system("cls");
        cout << "ERROR: INCOMPATIBLE WITH DEBUG TEXT" << endl;
        debugModeDirect(debug);
        }
        break;

        case 0:
        directDebug--;
        system("cls");
        cout << "VARIABLES HIDDEN" << endl;
        debugModeDirect(debug);
        break;
        }
    case 'B':
        cin >> caseBDebug;
        switch(caseBDebug){
        case 0:
            debugText = false;
            system("cls");
            debugModeDirect(debug);
            break;
        case 1:
            if(directDebug>=1){
                system("cls");
                cout << "ERROR: INCOMPATIBLE WITH DEBUG VARIABLES" << endl;
                debugModeDirect(debug);
            }else{
            system("cls");
            debugText = true;
            debugModeDirect(debug);
            }
            break;
        }
    case 'C':
        cin >> caseCDebug;
        switch(caseCDebug){
        case 0:
            debugVariable = 0;
            system("cls");
            cout << "VARIABLES DISABLED" << endl;
            debugModeDirect(debug);
            break;
        case 1:
            debugVariable = 1;
            system("cls");
            cout << "VARIABLES ENABLED" << endl;
            debugModeDirect(debug);
            break;
        }
    case 'D':
        cin >> caseDDebug;
        switch(caseDDebug){
        case 0:
            debugSlowMode = 0;
            system("cls");
            cout << "SLOWMODE DISABLED" << endl;
            debugModeDirect(debug);
            break;
        case 1:
            debugSlowMode = 1;
            system("cls");
            cout << "SLOWMODE ENABLED" << endl;
            debugModeDirect(debug);
            break;
        }
    case 'X':
        system("cls");
        tankgamemainObject.settings();
        break;
    }
}

void tankGameStructure::videoSettings(){

    system("cls");
    cout << "SETTINGS > VIDEO SETTINGS\n\n";
    cout << "VIDEO SETTINGS" << endl;
    cout << "ACCESS LETTER | TRUE(1)/FALSE(0)\n";
    cout << "CHOOSE THEME (ALPHA):" << endl;
    cout << "X - BACK\n" << endl;
    cout << "---THEME---\n";
    cout << video1 << " 1 - BLACK" << endl;
    cout << video2 << " 2 - GRAY" << endl;
    cout << video3 << " 3 - WHITE" << endl;
    cout << video4 << " 4 - NEON" << endl;
    cout << video5 << " 5 - CLASSIC" << endl;
    cout << "\n---UI SETTINGS---\n\n";
    cout << AVideo << " A - DISPLAY HIGHSCORE\n\n";
    static char videoSettingsCursor;
    cin >> videoSettingsCursor;
    switch(videoSettingsCursor){
case 'X':
    system("cls");
    tankgamemainObject.settings();
    break;
case '1':
    system("cls");
    system("color 0f");
    video1 = '1';
    video2 = '0';
    video3 = '0';
    video4 = '0';
    video5 = '0';
    videoSettings();
    break;
case '2':
    system("cls");
    system("color 70");
    video1 = '0';
    video2 = '1';
    video3 = '0';
    video4 = '0';
    video5 = '0';
    videoSettings();
    break;
case '3':
    system("cls");
    system("color f0");
    video1 = '0';
    video2 = '0';
    video3 = '1';
    video4 = '0';
    video5 = '0';
    videoSettings();
case '4':
    system("cls");
    system("color 0a");
    video1 = '0';
    video2 = '0';
    video3 = '0';
    video4 = '1';
    video5 = '0';
    videoSettings();
case '5':
    system("cls");
    system("color 07");
    video1 = '0';
    video2 = '0';
    video3 = '0';
    video4 = '0';
    video5 = '1';
    videoSettings();
case 'A':
    static int caseAVideo;
    cin>>caseAVideo;
    switch(caseAVideo){
    case 0:
    system("cls");
    AVideo = '0';
    videoSettings();
    case 1:
        system("cls");
        AVideo = '1';
        videoSettings();
    }
    }
}

void tankGameStructure::statistics(){
    system("cls");
    cout << "SETTINGS > STATISTICS\n\n";
    cout << "STATISTICS"  << endl << endl;
    cout << "GAME:\t\t \tHIGHSCORES:\tRECENT:\n" << endl;
    cout << "SHOOTING\t-\t" << highscore << "\t\t" << recentScore << endl;
    cout << "INVASION\t-\t" << "COMING SOON\t\t"<< endl;
    cout << "CLASSIC\t\t-\t" << highscore3 << "\t\t" << recentScore3 << endl;
    cout << "CHAOS\t\t-\t" << "COMING SOON\t\t" << endl;
    cout<<"MINIMAL\t\t-\t"<<highscore5<<"\t\t"<<recentScore5<<endl<<endl;
    cout << "OTHER DATA\t\tGM1:\tGM3:\tGM5:\n\n";
    cout << "DEATH\t\t-\t" << death << "\t" << death3 << "\t" <<death5 << endl;
    cout << "SHOOTED AMMO\t-\t" << shootingTimes << "\t" << shootingTimes3 << "\t" << shootingTimes5 << endl;
    cout << "CONTROL: D\t-\t" << moveDtimes << "\t" << moveDtimes3 << "\t" << moveDtimes5 << endl;
    cout << "CONTROL: A\t-\t" << moveAtimes << "\t" << moveAtimes3 << "\t" << moveAtimes5 << endl;
    cout << "CONTROL: S\t-\t" << moveStimes << "\t" << moveStimes3 << "\t" << moveStimes5 << endl;
    cout << "PRESS X TO CONTINUE, PRESS C TO CLEAR STATISTICS\n";
    if(kbhit()){
    switch(_getch()){
    case 'X':
        system("cls");
        tankgamemainObject.settings();
        break;
    case 'C':
        system("cls");
        highscore = 0;
        recentScore = 0;
        death = 0;
        shootingTimes = 0;
        moveAtimes = 0;
        moveDtimes = 0;
        moveStimes = 0;

        highscore3 = 0;
        recentScore3 = 0;
        death3 = 0;
        shootingTimes3 = 0;
        moveAtimes3 = 0;
        moveStimes3 = 0;
        moveDtimes3 = 0;

        highscore5 = 0;
        recentScore5 = 0;
        death5 = 0;
        shootingTimes5 = 0;
        moveAtimes5 = 0;
        moveStimes5 = 0;
        moveDtimes5 = 0;
        break;
    }
    }
    statistics();
}

void tankGameStructure::experimentalGameplay(){
    system("cls");
    cout << "SETTINGS > EXPERIMENTAL FEATURES\n\n";
    cout << "EXPERIMENTAL GAMEPLAY\n\n";
    cout << "ENABLING EXPERIMENTAL GAMEPLAY CAN CAUSE CRASHES AND CAN BE UNSTABLE\nDO YOU WANT TO CONTINUE?\n";
    cout << "CURRENT FEATURES UNDER EXPERIMENTAL MODE:\n\n";
    cout << "-LOAD SETTINGS\n";
    cout << "-DEAD ENEMY TANK (VISUAL FEATURE)\n";
    cout << "-TANK COLORS\n\n";
    cout << "0 - NO\t1 - YES\t2 - DISABLE" << endl;
    if(kbhit()){
    switch(_getch()){
    case '0':
        experimentalFeatures = 0;
        system("cls");
        tankgamemainObject.settings();
        break;
    case '1':
        experimentalFeatures = 1;
        system("cls");
        cout << "EXPERIMENTAL FEATURES ENABLED\n";
        this_thread::sleep_for(chrono::seconds(1));
        tankgamemainObject.settings();
        break;
    case '2':
        experimentalFeatures = 2;
        system("cls");
        cout << "EXPERIMENTAL FEATURES DISABLED\n";
        this_thread::sleep_for(chrono::seconds(1));
        tankgamemainObject.settings();
        break;
    default:
        cout << "INVALID INPUT!\n";
        this_thread::sleep_for(chrono::seconds(1));
        experimentalGameplay();
        break;
    }
    }
    experimentalGameplay();
}

void tankGameStructure::controls(){
    system("cls");
    cout << "SETTINGS > CONTROLLER SETTINGS\n\n";
    cout << "CONTROLLER SETTINGS\n\n" << endl;
    cout << "X - BACK\n";
    cout << "CHOOSE CONTROLLER:\n";
    cout << controllerA << " A - ARROW CONTROLS\n";
    cout << controllerB << " B - WASD CONTROLS\n";
    cout << "INPUT: ";
    cin >> controllerSettings;
    switch(controllerSettings){
case 'A':
    cin >> controllerA;
        switch(controllerA){
        case '0':
            controllerA = '0';
            system("cls");
            controls();
            break;
        case '1':
            controllerA = '1';
            system("cls");
            while(controllerB=='1'){
                controllerB=='0';
            }
            controls();
            break;
        }
        break;
case 'B':
    cin >> controllerB;
        switch(controllerB){
        case '0':
            controllerB = '0';
            system("cls");
            controls();
            break;
        case '1':
            controllerB = '1';
            system("cls");
            while(controllerA=='1'){
                controllerA=='0';
            }
            controls();
            break;
        }
        break;
case 'X':
        system("cls");
        tankgamemainObject.settings();
        break;
    }

    }

void tankGameStructure::generalSettings(){
    system("cls");
    cout << "SETTINGS > GENERAL SETTINGS\n\n";
    cout << "GENERAL SETTINGS\n\n";
    cout << "X - BACK\n\n";
    cout << "A - AUDIO: " << audio << endl;
    cout << "S - RECOMMENDED SETTINGS\n";
    cout << "C - SAVE SETTINGS NOW/CREATE CONFIG FILE\n";
    if(experimentalFeatures==1){
        cout << "L - LOAD SETTINGS (EXPERIMENTAL)\n";
    }
    cout << "R - RESET CONFIG FILE/RESET SETTINGS\n\n";
    if(kbhit()){
        switch(_getch()){
        case 'X':
            system("cls");
            tankgamemainObject.settings();
            break;
        case 'L':
            system("cls");
            loadSettings();
            break;
        case 'R':
            system("cls");
            file.open("config.txt",ios::in|ios::out|ios::trunc);
            file.close();
            break;
        case 'C':
            system("cls");
            saveNow();
            break;
        case 'S':
            system("cls");
            recommendedSettings();
            break;
        case 'A':
            system("cls");
            cout << "SETTINGS > GENERAL SETTINGS > AUDIO\n\n";
            cout << "AUDIO: " << audio << endl << endl;
            cout << "ENABLE AUDIO?\n";
            cout << "0 - OFF 1 - ON X - BACK\n";
            switch(_getch()){
            case '0':
                audio = 0;
                tankgamemainObject.getVariable1(audio);
                minimalGameObject.audio(audio);
                generalSettings();
                break;
            case '1':
                tankgamemainObject.getVariable1(audio);
                minimalGameObject.audio(audio);
                audio = 1;
            case 'X':
                generalSettings();
                break;
            }
        }
    }
    generalSettings();
}

void tankGameStructure::recommendedSettings(){
    system("cls");
    cout << "SETTINGS > GENERAL SETTINGS > RECOMMENDED SETTINGS\n\n";
    cout << "RECOMMENDED SETTINGS FOR COMMAND CONSOLE:\n\n";
    cout << "-FONT: RASTER FONTS (WITH CLASSIC RESOLUTION, WINDOWS 7/8.1 DEFAULT CMD RESOLUTION)\n";
    cout << "-COLOR RED IS SET TO: R: 255, G: 0, B: 0\n";
    cout << "-VOLUME: 50%\n\n";
    cout << "X - BACK\n";
    if(kbhit()){
        switch(_getch()){
        case 'X':
            generalSettings();
            break;
        default:
            cout << "INVALID INPUT!\n";
            break;
        }
    }
    recommendedSettings();
}

void tankGameStructure::saveNow(){
    system("cls");
            ofstream("config.txt");
            file.open("config.txt");
           istringstream is_file(config);
            string line;
            while(getline(is_file, line)){
                istringstream is_line(line);
                string key;
                if(getline(is_line, key, '=') )
                {
                    string value;
                    if(getline(is_line, value) ){
                        file.open("config.txt",ios::in|ios::out|ios::trunc);
                    if(!file.is_open()){
                        cout << "ERROR WHILE OPENING CONFIG.TXT" << endl;
                    }else{
                        stringstream sso;
                        string keyWrite, valueWrite;
                        sso << key;
                        sso << value;
                        file << "settings" << endl;
                        file << "highscore=" << highscore << endl;
                        file << "recentScore=" << recentScore << endl;
                        file << "controllerA=" << controllerA << endl;
                        file << "controllerB=" << controllerB << endl;
                        file << "video=";
                        if(video1=='1'){
                            file << "1" << endl;
                        }if(video2=='1'){
                            file << "2" << endl;
                        }if(video3=='1'){
                            file << "3" << endl;
                        }if(video4=='1'){
                            file << "4" << endl;
                        }if(video4=='1'){
                            file << "5" << endl;
                        }
                        file << "settings" << endl;
                        file << "displayHighscore=" << AVideo << endl;
                        file << "playerName=" << playerName << endl;
                        file << "tankColor=" << tankColor << endl;
                        file << "debugAmode=" << directDebug << endl;
                        file << "debugBmode=" << debugText << endl;
                        file << "debugCmode=" << debugVariable << endl;
                        file << "debugMode=" << debugEnable << endl;
                        file << "experimentalFeatures=" << experimentalFeatures << endl;
                        file << "statistics" << endl;
                        file << "shootingTimes=" << shootingTimes << endl;
                        file << "controlAtimes=" << moveAtimes << endl; //LINE 18
                        file << "controlDtimes=" << moveDtimes << endl;
                        file << "controlStimes=" << moveStimes << endl;
                        file.close();
            if(!file.is_open()){
                cout << "CONFIG.TXT IS NOT OPEN" << endl;
            }else{
            string line;
            while(file.good()){ //use while statement when multiple lines
                getline(file,line);
                cout << line << endl;
            }
            }

        }
                }
                    //store_line(key, value);
                    //file << key << value << endl;
                }

        }
        tankgamemainObject.mainMenu();
}

void tankGameStructure::loadSettings(){
    ifstream fin("config.txt",ios::in|ios::out|ios::ate);
    if(!file.is_open()){
        cout << "ERROR" << endl;
    }else{
        fin.seekg(18);
        fin >> moveAtimes;
    }
    /*if(!file.is_open()){
        cout << "ERROR" << endl;
    }else{
        while(getline(fin,line)){
        istringstream ss(line);
        fin << moveAtimes;
        }
    }*/
    /*while(fin >> moveAtimes){
    fin.seekg(19);
    fin >> moveAtimes >> endl;
    tankgamemainObject.mainMenu();
    system("cls");
    }*/
    system("cls");
}
