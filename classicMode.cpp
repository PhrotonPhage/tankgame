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

int dummy;
static int clearScreen = 0;

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
    char block11 = 'I';
    char block12 = 'I';
    char block13 = 'I';
    char block14 = 'I';
    char block15 = 'I';
    char block16 = 'I';
    char block17 = 'I';
    char block18 = 'I';
    char block19 = 'I';
    char block20 = 'I';

    int blockStart1;
    int blockStart2;
    int blockStart3;
    int blockStart4;
    int blockStart5;
    int blockStart6;
    int blockStart7;
    int blockStart8;
    int blockStart9;
    int blockStart10;
    int blockStart11;
    int blockStart12;
    int blockStart13;
    int blockStart14;
    int blockStart15;
    int blockStart16;
    int blockStart17;
    int blockStart18;
    int blockStart19;
    int blockStart20;
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
        case '2':
            classicGame::difficulty = 2;
            mainGame();
            break;
        case '3':
            classicGame::difficulty = 3;
            mainGame();
            break;
        case '4':
            classicGame::difficulty = 4;
            mainGame();
            break;
        }
    }
    difficulty();
}

void classicMode::mainGame(){
    if(clearScreen>=0){
        clearScreen++;
    }
    if(classicGame::difficulty==1){
        if(clearScreen==10){
        classicGameBlock::result1 = rand() % classicGameBlock::amplifier1;
        clearScreen = 0;
    }
    }
    if(classicGame::difficulty==2){
        if(clearScreen==5){
        classicGameBlock::result1 = rand() % classicGameBlock::amplifier2;
        clearScreen = 0;
    }
    }
    if(classicGame::difficulty==3){
        if(clearScreen==3){
        classicGameBlock::result1 = rand() % classicGameBlock::amplifier3;
        clearScreen = 0;
    }
    }
    if(classicGame::difficulty==4){
        if(clearScreen==1){
        classicGameBlock::result1 = rand() % classicGameBlock::amplifier4;
        clearScreen = 0;
    }
    }
    cout<<clearScreen<<endl;
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
    if(classicGame::score<=-500){
        gameover();
    }

    if(classicGame::movement==1&&classicGameBlock::block1=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::score += 50;
        classicGame::ammunition += 2;
        classicGameBlock::block1 = ' ';
        goto endBlocks1;
    }
    if(classicGame::movement==2&&classicGameBlock::block2=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::score += 50;
        classicGame::ammunition += 2;
        classicGameBlock::block2 = ' ';
        goto endBlocks2;
    }
    if(classicGame::movement==3&&classicGameBlock::block3=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::score += 50;
        classicGame::ammunition += 2;
        classicGameBlock::block3 = ' ';
        goto endBlocks3;
    }


    //cout << classicGameBlock::result1 << endl;

    //system("cls");
    if(classicGame::movement==32767){
        endBlocks1:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks1;
    }
    if(classicGame::movement==32767){
        endBlocks2:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks2;
    }
    if(classicGame::movement==32767){
        endBlocks3:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks3;
    }

    cout<<"--------------------\t"<<endl;
    cout<<"\n";
    if(classicGameBlock::blockStart1!=0){
        cout<<classicGameBlock::block1;
    }
    if((classicGameBlock::result1==32)||(classicGameBlock::result1==24)||(classicGameBlock::result1==21)||(classicGameBlock::result1==17)||(classicGameBlock::result1==9)||(classicGameBlock::result1==7)||(classicGameBlock::result1==4)){
        if(classicGameBlock::blockStart1!=1){
            classicGameBlock::block1 = 'I';
            cout<<classicGameBlock::block1;
        }
    }else{
        if(dummy==32767){
            blocks1:
            classicGameBlock::blockStart1 = 1;
            cout<<classicGameBlock::block1;
        }
        classicGameBlock::block1 = ' ';
        cout<<classicGameBlock::block1;
    }
    if(classicGameBlock::blockStart2!=0){
        cout<<classicGameBlock::block2;
    }
    if((classicGameBlock::result1==30)||(classicGameBlock::result1==27)||(classicGameBlock::result1==22)||(classicGameBlock::result1==19)||(classicGameBlock::result1==11)||(classicGameBlock::result1==8)||(classicGameBlock::result1==3)){
        if(classicGameBlock::blockStart2!=1){
            classicGameBlock::block2 = 'I';
            cout<<classicGameBlock::block2;
        }
    }else{
        if(dummy==32767){
            blocks2:
            classicGameBlock::blockStart2 = 1;
            cout<<classicGameBlock::block2;
        }
        classicGameBlock::block2 = ' ';
        cout<<classicGameBlock::block2;
    }
    if(classicGameBlock::blockStart3!=0){
        cout<<classicGameBlock::block3;
    }
    if((classicGameBlock::result1==31)||(classicGameBlock::result1==25)||(classicGameBlock::result1==20)||(classicGameBlock::result1==18)||(classicGameBlock::result1==14)||(classicGameBlock::result1==10)||(classicGameBlock::result1==5)){
        if(classicGameBlock::blockStart3!=1){
        classicGameBlock::block3 = 'I';
        cout<<classicGameBlock::block3;
        }
    }else{
        if(dummy==32767){
            blocks3:
            classicGameBlock::blockStart3 = 1;
            cout<<classicGameBlock::block3;
        }
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
    if((classicGameBlock::result1==28)||(classicGameBlock::result1==27)||(classicGameBlock::result1==25)||(classicGameBlock::result1==17)||(classicGameBlock::result1==12)||(classicGameBlock::result1==8)||(classicGameBlock::result1==0)){
        classicGameBlock::block6 = 'I';
        cout<<classicGameBlock::block6;
    }else{
        classicGameBlock::block6 = ' ';
        cout<<classicGameBlock::block6;
    }
    if((classicGameBlock::result1==30)||(classicGameBlock::result1==21)||(classicGameBlock::result1==19)||(classicGameBlock::result1==16)||(classicGameBlock::result1==13)||(classicGameBlock::result1==7)||(classicGameBlock::result1==6)){
        classicGameBlock::block7 = 'I';
        cout<<classicGameBlock::block7;
    }else{
        classicGameBlock::block7 = ' ';
        cout<<classicGameBlock::block7;
    }
    if((classicGameBlock::result1==30)||(classicGameBlock::result1==22)||(classicGameBlock::result1==27)||(classicGameBlock::result1==17)||(classicGameBlock::result1==11)||(classicGameBlock::result1==4)||(classicGameBlock::result1==5)){
        classicGameBlock::block8 = 'I';
        cout<<classicGameBlock::block8;
    }else{
        classicGameBlock::block8 = ' ';
        cout<<classicGameBlock::block8;
    }
    if((classicGameBlock::result1==31)||(classicGameBlock::result1==27)||(classicGameBlock::result1==23)||(classicGameBlock::result1==20)||(classicGameBlock::result1==10)||(classicGameBlock::result1==16)||(classicGameBlock::result1==8)){
        classicGameBlock::block9 = 'I';
        cout<<classicGameBlock::block9;
    }else{
        classicGameBlock::block9 = ' ';
        cout<<classicGameBlock::block9;
    }
    if((classicGameBlock::result1==29)||(classicGameBlock::result1==28)||(classicGameBlock::result1==26)||(classicGameBlock::result1==21)||(classicGameBlock::result1==9)||(classicGameBlock::result1==5)||(classicGameBlock::result1==1)){
        classicGameBlock::block10 = 'I';
        cout<<classicGameBlock::block10;
    }else{
        classicGameBlock::block10 = ' ';
        cout<<classicGameBlock::block10;
    }
    if((classicGameBlock::result1==28)||(classicGameBlock::result1==26)||(classicGameBlock::result1==22)||(classicGameBlock::result1==18)||(classicGameBlock::result1==11)||(classicGameBlock::result1==8)||(classicGameBlock::result1==5)){
        classicGameBlock::block11 = 'I';
        cout<<classicGameBlock::block11;
    }else{
        classicGameBlock::block11 = ' ';
        cout<<classicGameBlock::block11;
    }
    if((classicGameBlock::result1==32)||(classicGameBlock::result1==29)||(classicGameBlock::result1==24)||(classicGameBlock::result1==16)||(classicGameBlock::result1==15)||(classicGameBlock::result1==14)||(classicGameBlock::result1==6)){
        classicGameBlock::block12 = 'I';
        cout<<classicGameBlock::block12;
    }else{
        classicGameBlock::block12 = ' ';
        cout<<classicGameBlock::block12;
    }
    if((classicGameBlock::result1==30)||(classicGameBlock::result1==27)||(classicGameBlock::result1==23)||(classicGameBlock::result1==18)||(classicGameBlock::result1==16)||(classicGameBlock::result1==10)||(classicGameBlock::result1==1)){
        classicGameBlock::block13 = 'I';
        cout<<classicGameBlock::block13;
    }else{
        classicGameBlock::block13 = ' ';
        cout<<classicGameBlock::block13;
    }
    if((classicGameBlock::result1==29)||(classicGameBlock::result1==26)||(classicGameBlock::result1==25)||(classicGameBlock::result1==20)||(classicGameBlock::result1==17)||(classicGameBlock::result1==14)||(classicGameBlock::result1==4)){
        classicGameBlock::block14 = 'I';
        cout<<classicGameBlock::block14;
    }else{
        classicGameBlock::block14 = ' ';
        cout<<classicGameBlock::block14;
    }
    if((classicGameBlock::result1==31)||(classicGameBlock::result1==28)||(classicGameBlock::result1==22)||(classicGameBlock::result1==21)||(classicGameBlock::result1==15)||(classicGameBlock::result1==8)||(classicGameBlock::result1==0)){
        classicGameBlock::block15 = 'I';
        cout<<classicGameBlock::block15;
    }else{
        classicGameBlock::block15 = ' ';
        cout<<classicGameBlock::block15;
    }
    if((classicGameBlock::result1==32)||(classicGameBlock::result1==27)||(classicGameBlock::result1==24)||(classicGameBlock::result1==19)||(classicGameBlock::result1==14)||(classicGameBlock::result1==12)||(classicGameBlock::result1==8)){
        classicGameBlock::block16 = 'I';
        cout<<classicGameBlock::block16;
    }else{
        classicGameBlock::block16 = ' ';
        cout<<classicGameBlock::block16;
    }
    if((classicGameBlock::result1==30)||(classicGameBlock::result1==29)||(classicGameBlock::result1==20)||(classicGameBlock::result1==16)||(classicGameBlock::result1==11)||(classicGameBlock::result1==10)||(classicGameBlock::result1==5)){
        classicGameBlock::block17 = 'I';
        cout<<classicGameBlock::block17;
    }else{
        classicGameBlock::block17 = ' ';
        cout<<classicGameBlock::block17;
    }
    if((classicGameBlock::result1==27)||(classicGameBlock::result1==24)||(classicGameBlock::result1==19)||(classicGameBlock::result1==17)||(classicGameBlock::result1==12)||(classicGameBlock::result1==8)||(classicGameBlock::result1==3)){
        classicGameBlock::block18 = 'I';
        cout<<classicGameBlock::block18;
    }else{
        classicGameBlock::block18 = ' ';
        cout<<classicGameBlock::block18;
    }
    if((classicGameBlock::result1==29)||(classicGameBlock::result1==25)||(classicGameBlock::result1==21)||(classicGameBlock::result1==20)||(classicGameBlock::result1==15)||(classicGameBlock::result1==11)||(classicGameBlock::result1==2)){
        classicGameBlock::block19 = 'I';
        cout<<classicGameBlock::block19;
    }else{
        classicGameBlock::block19 = ' ';
        cout<<classicGameBlock::block19;
    }
    if((classicGameBlock::result1==30)||(classicGameBlock::result1==26)||(classicGameBlock::result1==23)||(classicGameBlock::result1==19)||(classicGameBlock::result1==18)||(classicGameBlock::result1==14)||(classicGameBlock::result1==5)){
        classicGameBlock::block20 = 'I';
        cout<<classicGameBlock::block20;
    }else{
        classicGameBlock::block20 = ' ';
        cout<<classicGameBlock::block20;
    }
    if(classicGameBlock::result1<0){
        cout.width(classicGame::movement);
        cout<<classicGame::shootPlayerPtr;
    }
    cout.width(10);
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
    cout<<"HIGHSCORE: "<<classicGame::highscore3;
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
    if(kbhit()){
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
        case 'E':
            classicGameBlock::result1 = rand() % classicGameBlock::amplifier1;
            classicGame::ammunition -= 5;
            classicGame::score -= 50;

            classicGameBlock::blockStart1 = 0;
            classicGameBlock::blockStart2 = 0;
            classicGameBlock::blockStart3 = 0;
            classicGameBlock::blockStart4 = 0;
            classicGameBlock::blockStart5 = 0;
            classicGameBlock::blockStart6 = 0;
            classicGameBlock::blockStart7 = 0;
            classicGameBlock::blockStart8 = 0;
            classicGameBlock::blockStart9 = 0;
            classicGameBlock::blockStart10 = 0;
            classicGameBlock::blockStart11 = 0;
            classicGameBlock::blockStart12 = 0;
            classicGameBlock::blockStart13 = 0;
            classicGameBlock::blockStart14 = 0;
            classicGameBlock::blockStart15 = 0;
            classicGameBlock::blockStart16 = 0;
            classicGameBlock::blockStart17 = 0;
            classicGameBlock::blockStart18 = 0;
            classicGameBlock::blockStart19 = 0;
            classicGameBlock::blockStart20 = 0;
            break;
        case 'Z':
            system("cls");
            tankgamemainClassicGameObject.mainMenu();
            break;
        }
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
        system("cls");
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
