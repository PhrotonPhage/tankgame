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
    int movement = 10;

    int score = 0;
    int healthPoint = 3;
    int ammunition = 50;

    int highscore3;
    int recentScore3;

    int shootPlayer;
    char shootPlayerPtr;
}

namespace classicGameUI{
    int uiWidth = 30;
    int cguiAxis;
    int cguiAxis2;
}

namespace classicGameBlock{
    int randomness;

    int result1;
    int result2;
    int result3;
    int result4;

    int amplifier1 = 32;
    int amplifier2 = 24;
    int amplifier3 = 16;
    int amplifier4 = 8;

    char block1 = 'I';
    char block2 = 'I';
    char block3 = 'I';
    char block4 = 'I';
    char block5 = 'I';
    char block6 = 'I';
    char block7 = 'I';
    char block8 = 'I';
    char block9 = 'I';
    char block10 = 'I';
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
    classicGameUI::cguiAxis=classicGameUI::uiWidth-classicGame::movement;

    if(classicGame::score>classicGame::highscore3){
        classicGame::highscore3=classicGame::score;
    }

    if(classicGame::ammunition<0){
        restart();
    }
    if(classicGame::healthPoint==0){
        gameover();
    }

    classicGameBlock::result1 = rand() % classicGameBlock::amplifier1;
    cout << classicGameBlock::result1 << endl;

    //system("cls");
    cout<<"--------------------\t"<<endl;
    cout<<"\n";
    if((classicGameBlock::result1==32)||(classicGameBlock::result1==24)||(classicGameBlock::result1==21)||(classicGameBlock::result1==17)||(classicGameBlock::result1==9)||(classicGameBlock::result1==7)||(classicGameBlock::result1==4)){
        classicGameBlock::block1 = 'I';
        cout<<classicGameBlock::block1;
    }else{
        classicGameBlock::block1 = ' ';
        cout<<classicGameBlock::block1;
    }
    if((classicGameBlock::result1==30)||(classicGameBlock::result1==27)||(classicGameBlock::result1==22)||(classicGameBlock::result1==19)||(classicGameBlock::result1==11)||(classicGameBlock::result1==8)||(classicGameBlock::result1==3)){
        classicGameBlock::block2 = 'I';
        cout<<classicGameBlock::block2;
    }else{
        classicGameBlock::block2 = ' ';
        cout<<classicGameBlock::block2;
    }
    if((classicGameBlock::result1==31)||(classicGameBlock::result1==25)||(classicGameBlock::result1==20)||(classicGameBlock::result1==18)||(classicGameBlock::result1==14)||(classicGameBlock::result1==10)||(classicGameBlock::result1==5)){
        classicGameBlock::block3 = 'I';
        cout<<classicGameBlock::block3;
    }else{
        classicGameBlock::block3 = ' ';
        cout<<classicGameBlock::block3;
    }
    if((classicGameBlock::result1==29)||(classicGameBlock::result1==26)||(classicGameBlock::result1==23)||(classicGameBlock::result1==16)||(classicGameBlock::result1==15)||(classicGameBlock::result1==6)||(classicGameBlock::result1==2)){
        classicGameBlock::block4 = 'I';
        cout<<classicGameBlock::block4;
    }else{
        classicGameBlock::block4 = ' ';
        cout<<classicGameBlock::block4;
    }
    if((classicGameBlock::result1==32)||(classicGameBlock::result1==24)||(classicGameBlock::result1==20)||(classicGameBlock::result1==19)||(classicGameBlock::result1==10)||(classicGameBlock::result1==3)||(classicGameBlock::result1==1)){
        classicGameBlock::block5 = 'I';
        cout<<classicGameBlock::block5;
    }else{
        classicGameBlock::block5 = ' ';
        cout<<classicGameBlock::block5;
    }
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout.width(classicGameUI::cguiAxis);
    cout<<"SCORE: " << classicGame::score;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout.width(classicGameUI::cguiAxis+1);
    cout<<"HEALTH: "<<classicGame::healthPoint;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout.width(classicGameUI::cguiAxis+5);
    cout<<"AMMUNITION: " <<classicGame::ammunition;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout.width(classicGameUI::cguiAxis+4);
    cout<<"HIGHSOCRE: "<<classicGame::highscore3;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::tank;
    cout<<"\n";
    cout<<"--------------------"<<endl;
    classicGame::shootPlayerPtr=' ';
    //CONTROLS
        switch(_getch()){
        case 'W':
            if(classicGame::tank=='W'){
                classicGame::tank='M';
            }
            classicGame::shootPlayer = 1;
            if(classicGame::shootPlayer>=1){
                classicGame::shootPlayerPtr = '.';
            }
            classicGame::ammunition--;
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
    mainGame();
}

void classicMode::gameover(){
    system("cls");
    Beep(500,1000);
    classicGame::recentScore3 = classicGame::highscore3;
    cout<<"GAME OVER!\n";
    cout<<"--------------------\n";
    cout<<"0 - QUIT 1 - TRY AGAIN\n";
    switch(_getch()){
    case '0':
        classicGame::score = 0;
        classicGame::movement = 10;
        classicGame::ammunition = 50;
        classicGame::healthPoint = 3;
        cout<<"RECENT SCORE: "<<classicGame::recentScore3<<endl;
        this_thread::sleep_for(chrono::seconds(1));
        tankgamemainClassicGameObject.mainMenu();
        break;
    case '1':
        classicGame::score = 0;
        classicGame::movement = 10;
        classicGame::ammunition = 50;
        classicGame::healthPoint = 3;
        mainGame();
        break;
    }
    gameover();
}

void classicMode::restart(){
    system("cls");
    cout<<"\tYOU FAILED THE GAME\n";
    Beep(500,500);
    classicGame::healthPoint--;
    classicGame::ammunition = 50;
    classicGame::movement = 10;
    this_thread::sleep_for(chrono::seconds(1));
    mainGame();
}
