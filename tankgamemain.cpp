#include "tankgamemain.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <algorithm>
#include <thread>
#include <chrono>
#include <cstdlib>
#include <pthread.h>

using namespace std;

int debug;

namespace mainClass{
    int audio = 1;
}

tankGameStructure tankGameStructureObject;
helpPage helpPageObject;

const WORD color[] = {
        0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
    };

    HANDLE hstdinMain  = GetStdHandle( STD_INPUT_HANDLE  );
	HANDLE hstdoutMain = GetStdHandle( STD_OUTPUT_HANDLE );
	WORD   indexMain   = 0;

    CONSOLE_SCREEN_BUFFER_INFO csbiMain;

void tankgamemain::getVariable1(int audio){
    mainClass::audio = audio;
}

void tankgamemain::menuInfo(){
system("title TankGame v0.4.0.4 Alpha");
//int staticLoader = 10;
int loader = 7;
cout << "TANK GAME " << VERSION_MAJOR << "." << VERSION_MINOR << "." << VERSION_REVISION << VERBUILD << " " << VERSION << " - BY PHROTON" << endl;
cout << "---";
loader = rand()%7;
loader *= 7;
if(mainClass::audio==1){
    //Beep(1000,500);
    Beep(500,200);
}
this_thread::sleep_for(chrono::milliseconds(loader));
cout << "-----";
this_thread::sleep_for(chrono::milliseconds(loader));
cout << "-----";
this_thread::sleep_for(chrono::milliseconds(loader));
cout << "-----";
this_thread::sleep_for(chrono::milliseconds(loader));
cout << "-----";
this_thread::sleep_for(chrono::milliseconds(loader));
cout << "-----";
this_thread::sleep_for(chrono::milliseconds(loader));
mainMenu();
}

void tankgamemain::mainMenu(){
system("cls");
cout << "PLAY - P" << endl;
cout << "SETTINGS - S" << endl;
cout << "SAVE SETTINGS - Z" << endl;
cout << "HELP - H" << endl;
cout << "QUIT - X" << endl;
//static char menuCursor;
//cin >> menuCursor;
if(kbhit()){
switch(_getch()){
case 'P':
    system("cls");
    play();
    break;
case 'S':
    system("cls");
    settings();
    break;
case 'D':
    system("cls");
    debug++;
    if(debug>=10){
        cout << "DEBUGGING MODE" << endl;
    }
    mainMenu();
    break;
case 'H':
    helpPageObject.helpPageMain();
    break;
case 'X':
    quit();
    break;
case 'Z':
    tankGameStructureObject.saveNow();
    break;
}
}
mainMenu();
}

void tankgamemain::play(){
system("cls");
tankGameStructureObject.tankDifficulty();
}

void tankgamemain::settings(){
system("cls");
cout << "SETTINGS" << endl;
cout << "G - GENERAL SETTINGS" << endl;
cout << "I - INFO" << endl;
cout << "P - PLAYER" << endl;
cout << "C - CONTROLS" << endl;
if(debug>=10){
    cout << "D - DEBUG MODE" << endl;
}else{

}
cout << "V - VIDEO" << endl;
cout << "S - STATISTICS" << endl;
cout << "E - EXPERIMENTAL FEATURES" << endl;
cout << "X - BACK" << endl;
if(kbhit()){
switch(_getch()){
case 'I':
    system("cls");
    info();
    break;
case 'P':
    system("cls");
    playerSettings();
    break;
case 'X':
    system("cls");
    mainMenu();
    break;
case 'D':
    if(debug>=10){
    system("cls");
    debugMode();
    }else{
    system("cls");
    mainMenu();
    }
    break;
case 'V':
    system("cls");
    tankGameStructureObject.videoSettings();
    break;
case 'S':
    system("cls");
    tankGameStructureObject.statistics();
    break;
case 'E':
    system("cls");
    tankGameStructureObject.experimentalGameplay();
    break;
case 'C':
    system("cls");
    tankGameStructureObject.controls();
    break;
case 'G':
    system("cls");
    tankGameStructureObject.generalSettings();
    break;
}
}
settings();
}

void tankgamemain::info(){
system("cls");
cout<<"TANKGAME"<<endl;
cout<<"DEVELOPER: PHROTON"<<endl;
cout<<"VERSION " << VERSION_MAJOR<< "." << VERSION_MINOR << "." << VERSION_REVISION << VERBUILD << " " << VERSION << endl << endl;
cout<<"STDC: "<< __STDC__ << endl;
cout<<"CPP: " << __cplusplus << endl;
cout<<"BUILD DATE: " << __DATE__ << " " << __TIME__  << endl;
cout<<"BUILD " <<BUILD<< endl << endl;
cout<<"32-BIT: "<<__WIN32<<endl;
cout<<"64-BIT: "<<__WIN64<<endl;
cout<<"AMD64: "<<__amd64<<endl<<endl;
cout<<"PRESS C TO CHECK FOR UPDATES\n";
cout<<"PRESS G TO OPEN PHROTON'S GIT\n";
cout<<"PRESS R TO OPEN GITHUB REPOSITORY\n\n";
cout<<"PRESS X TO CONTINUE\n";
if(kbhit()){
    switch(_getch()){
case 'X':
    mainMenu();
    break;
case 'G':
    {
    string linkGit;
    linkGit = "https://github.com/PhrotonX";
    ShellExecute(NULL, "open", linkGit.c_str(), NULL, NULL, SW_SHOWNORMAL);
    break;
    }
case 'R':
    {
    string linkRepo;
    linkRepo = "https://github.com/PhrotonX/tankgame";
    ShellExecute(NULL, "open", linkRepo.c_str(), NULL, NULL, SW_SHOWNORMAL);
    break;
    }

case 'C':
    string linkUpdates;
    linkUpdates = "https://github.com/PhrotonX/tankgame/releases";
    ShellExecute(NULL, "open", linkUpdates.c_str(), NULL, NULL, SW_SHOWNORMAL);
    break;
    }
}
info();
}

void tankgamemain::playerSettings(){
tankGameStructureObject.playerProperties();
}

void tankgamemain::debugMode(){
tankGameStructureObject.debugModeDirect(debug);
}

void tankgamemain::antiDebugMode(){
debug = 0;
mainMenu();
}

void tankgamemain::quit(){
    int quitInt;
    system("cls");
    cout << "EXITING..." << endl;
    cin >> quitInt;
    system("exit");
    this_thread::sleep_for(chrono::seconds(3));
    quit();
}
