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

    int scopeInt;
    char scope = '|';
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
    int amplifier2 = 24; //block exception 13, 24
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

namespace classicGameCustom{
    int score;
    int ammunition;

    int amplifier;
    int result;

    int clearScreen;
}

void classicMode::difficulty(){
    system("cls");
    cout << "GAMEMODE 3: CLASSIC MODE\n\n";
    cout << "DIFFICULTY:\n\n";
    cout << "1 - EASY\n";
    cout << "2 - NORMAL\n";
    cout << "3 - HARD\n";
    cout << "4 - VERY HARD\n";
    cout << "5 - CUSTOM\n\n";
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
        case '5':
            classicGame::difficulty = 5;
            custom();
            break;
        }
    }
    difficulty();
}

void classicMode::custom(){
    system("cls");
    cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM\n\n";
    cout << "1 - INTEGERS\n";
    cout << "2 - AMPLIFIER\n";
    cout << "3 - RESULTS\n";
    cout << "4 - CLSVALUE - "<< classicGameCustom::clearScreen <<"\n\n";
    cout << "S - SAVE\n";
    cout << "Z - PLAY\n";
    cout << "X - BACK\n";
    if(kbhit()){
        switch(_getch()){
        case '4':
            system("cls");
            cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > CLSVALUE\n\n";
            cout << "CLSVALUE = NORMAL: 25 TYPE: INTEGER\n";
            cout << "PER INCREMENT TO VALUE " << classicGameCustom::clearScreen << endl;
            cout << "SET VALUE TO = ";
            cin >> classicGameCustom::clearScreen;
            custom();
        case 'X':
            difficulty();
            break;
        case 'Z':
            mainGame();
            break;
        }
    }

    custom();
}

void classicMode::mainGame(){
    if(clearScreen>=0){
        clearScreen++;
    }
    if(classicGame::difficulty==1){
        if(clearScreen==50){
        classicGameBlock::result1 = rand() % classicGameBlock::amplifier1;
        clearScreen = 0;

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
    }
    }
    if(classicGame::difficulty==2){
        if(clearScreen==25){
        classicGameBlock::result2 = rand() % classicGameBlock::amplifier2;
        clearScreen = 0;

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
    }
    }
    if(classicGame::difficulty==3){
        if(clearScreen==10){
        classicGameBlock::result3 = rand() % classicGameBlock::amplifier3;
        clearScreen = 0;

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
    }
    }
    if(classicGame::difficulty==4){
        if(clearScreen==6){
        classicGameBlock::result4 = rand() % classicGameBlock::amplifier4;
        clearScreen = 0;

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
    }
    }
    if(classicGame::difficulty==5){
        if(clearScreen==classicGameCustom::clearScreen){
        classicGameCustom::result = rand() % classicGameCustom::amplifier;
        clearScreen = 0;

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
    }
    }
    //cout<<clearScreen<<endl;
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
        classicGame::ammunition += 2;
        classicGameBlock::block1 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks1;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks1_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks1_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks1_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGame::ammunition -= 2;
            classicGame::ammunition += classicGameCustom::ammunition;
            goto endBlocks1_c;
        }

    }
    if(classicGame::movement==2&&classicGameBlock::block2=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block2 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks2;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks2_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks2_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks2_v;
        }
    }
    if(classicGame::movement==3&&classicGameBlock::block3=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block3 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks3;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks3_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks3_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks3_v;
        }
    }
    if(classicGame::movement==4&&classicGameBlock::block4=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block4 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks4;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks4_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks4_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks4_v;
        }
    }
    if(classicGame::movement==5&&classicGameBlock::block5=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block5 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks5;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks5_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks5_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks5_v;
        }
    }
    if(classicGame::movement==6&&classicGameBlock::block6=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block6 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks6;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks6_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks6_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks6_v;
        }
    }
    if(classicGame::movement==7&&classicGameBlock::block7=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block7 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks7;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks7_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks7_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks7_v;
        }
    }
    if(classicGame::movement==8&&classicGameBlock::block8=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block8 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks8;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks8_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks8_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks8_v;
        }
    }
    if(classicGame::movement==9&&classicGameBlock::block9=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block9 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks9;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks9_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks9_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks9_v;
        }
    }
    if(classicGame::movement==10&&classicGameBlock::block10=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block10 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks10;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks10_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks10_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks10_v;
        }
    }
    if(classicGame::movement==11&&classicGameBlock::block11=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block11 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks11;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks11_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks11_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks11_v;
        }
    }
    if(classicGame::movement==12&&classicGameBlock::block12=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block12 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks12;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks12_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks12_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks12_v;
        }
    }
    if(classicGame::movement==13&&classicGameBlock::block13=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block13 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks13;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks13_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks13_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks13_v;
        }
    }
    if(classicGame::movement==14&&classicGameBlock::block14=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block14 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks14;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks14_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks14_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks14_v;
        }
    }
    if(classicGame::movement==15&&classicGameBlock::block15=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block15 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks15;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks15_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks15_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks15_v;
        }
    }
    if(classicGame::movement==16&&classicGameBlock::block16=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block16 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks16;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks16_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks16_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks16_v;
        }
    }
    if(classicGame::movement==17&&classicGameBlock::block17=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block17 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks17;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks17_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks17_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks17_v;
        }
    }
    if(classicGame::movement==18&&classicGameBlock::block18=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block18 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks18;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks18_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks18_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks18_v;
        }
    }
    if(classicGame::movement==19&&classicGameBlock::block19=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block19 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks19;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks19_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks19_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks19_v;
        }
    }
    if(classicGame::movement==20&&classicGameBlock::block20=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGame::ammunition += 2;
        classicGameBlock::block20 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            goto endBlocks20;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            goto endBlocks20_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition -= 1;
            goto endBlocks20_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            classicGame::ammunition -= 2;
            goto endBlocks20_v;
        }
    }

    //cout << classicGameBlock::result3 << endl;

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
    if(classicGame::movement==32767){
        endBlocks4:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks4;
    }
    if(classicGame::movement==32767){
        endBlocks5:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks5;
    }
    if(classicGame::movement==32767){
        endBlocks6:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks6;
    }
    if(classicGame::movement==32767){
        endBlocks7:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks7;
    }
    if(classicGame::movement==32767){
        endBlocks8:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks8;
    }
    if(classicGame::movement==32767){
        endBlocks9:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks9;
    }
    if(classicGame::movement==32767){
        endBlocks10:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks10;
    }
    if(classicGame::movement==32767){
        endBlocks11:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks11;
    }
    if(classicGame::movement==32767){
        endBlocks12:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks12;
    }
    if(classicGame::movement==32767){
        endBlocks13:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks13;
    }
    if(classicGame::movement==32767){
        endBlocks14:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks14;
    }
    if(classicGame::movement==32767){
        endBlocks15:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks15;
    }
    if(classicGame::movement==32767){
        endBlocks16:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks16;
    }
    if(classicGame::movement==32767){
        endBlocks17:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks17;
    }
    if(classicGame::movement==32767){
        endBlocks18:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks18;
    }
    if(classicGame::movement==32767){
        endBlocks19:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks19;
    }
    if(classicGame::movement==32767){
        endBlocks20:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks20;
    }

    if(classicGame::movement==32767){
        endBlocks1_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks1_n;
    }
    if(classicGame::movement==32767){
        endBlocks2_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks2_n;
    }
    if(classicGame::movement==32767){
        endBlocks3_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks3_n;
    }
    if(classicGame::movement==32767){
        endBlocks4_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks4_n;
    }
    if(classicGame::movement==32767){
        endBlocks5_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks5_n;
    }
    if(classicGame::movement==32767){
        endBlocks6_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks6_n;
    }
    if(classicGame::movement==32767){
        endBlocks7_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks7_n;
    }
    if(classicGame::movement==32767){
        endBlocks8_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks8_n;
    }
    if(classicGame::movement==32767){
        endBlocks9_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks9_n;
    }
    if(classicGame::movement==32767){
        endBlocks10_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks10_n;
    }
    if(classicGame::movement==32767){
        endBlocks11_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks11_n;
    }
    if(classicGame::movement==32767){
        endBlocks12_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks12_n;
    }
    if(classicGame::movement==32767){
        endBlocks13_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks13_n;
    }
    if(classicGame::movement==32767){
        endBlocks14_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks14_n;
    }
    if(classicGame::movement==32767){
        endBlocks15_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks15_n;
    }
    if(classicGame::movement==32767){
        endBlocks16_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks16_n;
    }
    if(classicGame::movement==32767){
        endBlocks17_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks17_n;
    }
    if(classicGame::movement==32767){
        endBlocks18_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks18_n;
    }
    if(classicGame::movement==32767){
        endBlocks19_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks19_n;
    }
    if(classicGame::movement==32767){
        endBlocks20_n:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks20_n;
    }

    if(classicGame::movement==32767){
        endBlocks1_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks1_h;
    }
    if(classicGame::movement==32767){
        endBlocks2_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks2_h;
    }
    if(classicGame::movement==32767){
        endBlocks3_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks3_h;
    }
    if(classicGame::movement==32767){
        endBlocks4_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks4_h;
    }
    if(classicGame::movement==32767){
        endBlocks5_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks5_h;
    }
    if(classicGame::movement==32767){
        endBlocks6_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks6_h;
    }
    if(classicGame::movement==32767){
        endBlocks7_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks7_h;
    }
    if(classicGame::movement==32767){
        endBlocks8_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks8_h;
    }
    if(classicGame::movement==32767){
        endBlocks9_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks9_h;
    }
    if(classicGame::movement==32767){
        endBlocks10_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks10_h;
    }
    if(classicGame::movement==32767){
        endBlocks11_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks11_h;
    }
    if(classicGame::movement==32767){
        endBlocks12_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks12_h;
    }
    if(classicGame::movement==32767){
        endBlocks13_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks13_h;
    }
    if(classicGame::movement==32767){
        endBlocks14_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks14_h;
    }
    if(classicGame::movement==32767){
        endBlocks15_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks15_h;
    }
    if(classicGame::movement==32767){
        endBlocks16_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks16_h;
    }
    if(classicGame::movement==32767){
        endBlocks17_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks17_h;
    }
    if(classicGame::movement==32767){
        endBlocks18_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks18_h;
    }
    if(classicGame::movement==32767){
        endBlocks19_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks19_h;
    }
    if(classicGame::movement==32767){
        endBlocks20_h:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks20_h;
    }

    if(classicGame::movement==32767){
        endBlocks1_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks1_v;
    }
    if(classicGame::movement==32767){
        endBlocks2_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks2_v;
    }
    if(classicGame::movement==32767){
        endBlocks3_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks3_v;
    }
    if(classicGame::movement==32767){
        endBlocks4_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks4_v;
    }
    if(classicGame::movement==32767){
        endBlocks5_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks5_v;
    }
    if(classicGame::movement==32767){
        endBlocks6_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks6_v;
    }
    if(classicGame::movement==32767){
        endBlocks7_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks7_v;
    }
    if(classicGame::movement==32767){
        endBlocks8_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks8_v;
    }
    if(classicGame::movement==32767){
        endBlocks9_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks9_v;
    }
    if(classicGame::movement==32767){
        endBlocks10_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks10_v;
    }
    if(classicGame::movement==32767){
        endBlocks11_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks11_v;
    }
    if(classicGame::movement==32767){
        endBlocks12_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks12_v;
    }
    if(classicGame::movement==32767){
        endBlocks13_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks13_v;
    }
    if(classicGame::movement==32767){
        endBlocks14_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks14_v;
    }
    if(classicGame::movement==32767){
        endBlocks15_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks15_v;
    }
    if(classicGame::movement==32767){
        endBlocks16_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks16_v;
    }
    if(classicGame::movement==32767){
        endBlocks17_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks17_v;
    }
    if(classicGame::movement==32767){
        endBlocks18_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks18_v;
    }
    if(classicGame::movement==32767){
        endBlocks19_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks19_v;
    }
    if(classicGame::movement==32767){
        endBlocks20_v:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks20_v;
    }

    if(classicGame::movement==32767){
        endBlocks1_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks1_c;
    }
    if(classicGame::movement==32767){
        endBlocks2_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks2_c;
    }
    if(classicGame::movement==32767){
        endBlocks3_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks3_c;
    }
    if(classicGame::movement==32767){
        endBlocks4_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks4_c;
    }
    if(classicGame::movement==32767){
        endBlocks5_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks5_c;
    }
    if(classicGame::movement==32767){
        endBlocks6_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks6_c;
    }
    if(classicGame::movement==32767){
        endBlocks7_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks7_c;
    }
    if(classicGame::movement==32767){
        endBlocks8_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks8_c;
    }
    if(classicGame::movement==32767){
        endBlocks9_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks9_c;
    }
    if(classicGame::movement==32767){
        endBlocks10_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks10_c;
    }
    if(classicGame::movement==32767){
        endBlocks11_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks11_c;
    }
    if(classicGame::movement==32767){
        endBlocks12_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks12_c;
    }
    if(classicGame::movement==32767){
        endBlocks13_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks13_c;
    }
    if(classicGame::movement==32767){
        endBlocks14_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks14_c;
    }
    if(classicGame::movement==32767){
        endBlocks15_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks15_c;
    }
    if(classicGame::movement==32767){
        endBlocks16_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks16_c;
    }
    if(classicGame::movement==32767){
        endBlocks17_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks17_c;
    }
    if(classicGame::movement==32767){
        endBlocks18_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks18_c;
    }
    if(classicGame::movement==32767){
        endBlocks19_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks19_c;
    }
    if(classicGame::movement==32767){
        endBlocks20_c:
            cout<<"--------------------\t"<<endl;
    cout<<"\n";
    goto blocks20_c;
    }

    cout<<"--------------------\t"<<endl;
    cout<<"\n";
    if(classicGame::difficulty==1){
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
    if(classicGameBlock::blockStart4!=0){
        cout<<classicGameBlock::block4;
    }
    if((classicGameBlock::result1==29)||(classicGameBlock::result1==26)||(classicGameBlock::result1==23)||(classicGameBlock::result1==16)||(classicGameBlock::result1==15)||(classicGameBlock::result1==6)||(classicGameBlock::result1==2)){
        if(classicGameBlock::blockStart4!=1){
            classicGameBlock::block4 = 'I';
            cout<<classicGameBlock::block4;
        }
    }else{
        if(dummy==32767){
            blocks4:
            classicGameBlock::blockStart4 = 1;
            cout<<classicGameBlock::block4;
        }
        classicGameBlock::block4 = ' ';
        cout<<classicGameBlock::block4;
    }
    if(classicGameBlock::blockStart5!=0){
        cout<<classicGameBlock::block5;
    }
    if((classicGameBlock::result1==32)||(classicGameBlock::result1==24)||(classicGameBlock::result1==20)||(classicGameBlock::result1==19)||(classicGameBlock::result1==10)||(classicGameBlock::result1==3)||(classicGameBlock::result1==1)){
        if(classicGameBlock::blockStart5!=1){
           classicGameBlock::block5 = 'I';
            cout<<classicGameBlock::block5;
        }
    }else{
        if(dummy==32767){
            blocks5:
            classicGameBlock::blockStart5 = 1;
            cout<<classicGameBlock::block5;
        }
        classicGameBlock::block5 = ' ';
        cout<<classicGameBlock::block5;
    }
    if(classicGameBlock::blockStart6!=0){
        cout<<classicGameBlock::block6;
    }
    if((classicGameBlock::result1==28)||(classicGameBlock::result1==27)||(classicGameBlock::result1==25)||(classicGameBlock::result1==17)||(classicGameBlock::result1==12)||(classicGameBlock::result1==8)||(classicGameBlock::result1==0)){
        if(classicGameBlock::blockStart6!=1){
            classicGameBlock::block6 = 'I';
            cout<<classicGameBlock::block6;
        }
    }else{
        if(dummy==32767){
            blocks6:
            classicGameBlock::blockStart6 = 1;
            cout<<classicGameBlock::block6;
        }
        classicGameBlock::block6 = ' ';
        cout<<classicGameBlock::block6;
    }
    if(classicGameBlock::blockStart7!=0){
        cout<<classicGameBlock::block7;
    }
    if((classicGameBlock::result1==30)||(classicGameBlock::result1==21)||(classicGameBlock::result1==19)||(classicGameBlock::result1==16)||(classicGameBlock::result1==13)||(classicGameBlock::result1==7)||(classicGameBlock::result1==6)){
        if(classicGameBlock::blockStart7!=1){
            classicGameBlock::block7 = 'I';
            cout<<classicGameBlock::block7;
        }

    }else{
        if(dummy==32767){
            blocks7:
            classicGameBlock::blockStart7 = 1;
            cout<<classicGameBlock::block7;
        }
        classicGameBlock::block7 = ' ';
        cout<<classicGameBlock::block7;
    }
    if(classicGameBlock::blockStart8!=0){
        cout<<classicGameBlock::block8;
    }
    if((classicGameBlock::result1==30)||(classicGameBlock::result1==22)||(classicGameBlock::result1==27)||(classicGameBlock::result1==17)||(classicGameBlock::result1==11)||(classicGameBlock::result1==4)||(classicGameBlock::result1==5)){
        if(classicGameBlock::blockStart8!=1){
            classicGameBlock::block8 = 'I';
            cout<<classicGameBlock::block8;
        }
    }else{
        if(dummy==32767){
            blocks8:
            classicGameBlock::blockStart8 = 1;
            cout<<classicGameBlock::block8;
        }
        classicGameBlock::block8 = ' ';
        cout<<classicGameBlock::block8;
    }
    if(classicGameBlock::blockStart9!=0){
        cout<<classicGameBlock::block9;
    }
    if((classicGameBlock::result1==31)||(classicGameBlock::result1==27)||(classicGameBlock::result1==23)||(classicGameBlock::result1==20)||(classicGameBlock::result1==10)||(classicGameBlock::result1==16)||(classicGameBlock::result1==8)){
        if(classicGameBlock::blockStart9!=1){
            classicGameBlock::block9 = 'I';
            cout<<classicGameBlock::block9;
        }
    }else{
        if(dummy==32767){
            blocks9:
            classicGameBlock::blockStart9 = 1;
            cout<<classicGameBlock::block9;
        }
        classicGameBlock::block9 = ' ';
        cout<<classicGameBlock::block9;
    }
    if(classicGameBlock::blockStart10!=0){
        cout<<classicGameBlock::block10;
    }
    if((classicGameBlock::result1==29)||(classicGameBlock::result1==28)||(classicGameBlock::result1==26)||(classicGameBlock::result1==21)||(classicGameBlock::result1==9)||(classicGameBlock::result1==5)||(classicGameBlock::result1==1)){
        if(classicGameBlock::blockStart10!=1){
            classicGameBlock::block10 = 'I';
            cout<<classicGameBlock::block10;
        }
    }else{
        if(dummy==32767){
            blocks10:
            classicGameBlock::blockStart10 = 1;
            cout<<classicGameBlock::block10;
        }
        classicGameBlock::block10 = ' ';
        cout<<classicGameBlock::block10;
    }
    if(classicGameBlock::blockStart11!=0){
        cout<<classicGameBlock::block11;
    }
    if((classicGameBlock::result1==28)||(classicGameBlock::result1==26)||(classicGameBlock::result1==22)||(classicGameBlock::result1==18)||(classicGameBlock::result1==11)||(classicGameBlock::result1==8)||(classicGameBlock::result1==5)){
        if(classicGameBlock::blockStart11!=1){
            classicGameBlock::block11 = 'I';
            cout<<classicGameBlock::block11;
        }
    }else{
        if(dummy==32767){
            blocks11:
            classicGameBlock::blockStart11 = 1;
            cout<<classicGameBlock::block11;
        }
        classicGameBlock::block11 = ' ';
        cout<<classicGameBlock::block11;
    }
    if(classicGameBlock::blockStart12!=0){
        cout<<classicGameBlock::block12;
    }
    if((classicGameBlock::result1==32)||(classicGameBlock::result1==29)||(classicGameBlock::result1==24)||(classicGameBlock::result1==16)||(classicGameBlock::result1==15)||(classicGameBlock::result1==14)||(classicGameBlock::result1==6)){
        if(classicGameBlock::blockStart12!=1){
            classicGameBlock::block12 = 'I';
            cout<<classicGameBlock::block12;
        }
    }else{
        if(dummy==32767){
            blocks12:
            classicGameBlock::blockStart12 = 1;
            cout<<classicGameBlock::block12;
        }
        classicGameBlock::block12 = ' ';
        cout<<classicGameBlock::block12;
    }
    if(classicGameBlock::blockStart13!=0){
        cout<<classicGameBlock::block13;
    }
    if((classicGameBlock::result1==30)||(classicGameBlock::result1==27)||(classicGameBlock::result1==23)||(classicGameBlock::result1==18)||(classicGameBlock::result1==16)||(classicGameBlock::result1==10)||(classicGameBlock::result1==1)){
        if(classicGameBlock::blockStart13!=1){
            classicGameBlock::block13 = 'I';
            cout<<classicGameBlock::block13;
        }
    }else{
        if(dummy==32767){
            blocks13:
            classicGameBlock::blockStart13 = 1;
            cout<<classicGameBlock::block13;
        }
        classicGameBlock::block13 = ' ';
        cout<<classicGameBlock::block13;
    }
    if(classicGameBlock::blockStart14!=0){
        cout<<classicGameBlock::block14;
    }
    if((classicGameBlock::result1==29)||(classicGameBlock::result1==26)||(classicGameBlock::result1==25)||(classicGameBlock::result1==20)||(classicGameBlock::result1==17)||(classicGameBlock::result1==14)||(classicGameBlock::result1==4)){
        if(classicGameBlock::blockStart14!=1){
            classicGameBlock::block14 = 'I';
            cout<<classicGameBlock::block14;
        }
    }else{
        if(dummy==32767){
            blocks14:
            classicGameBlock::blockStart14 = 1;
            cout<<classicGameBlock::block14;
        }
        classicGameBlock::block14 = ' ';
        cout<<classicGameBlock::block14;
    }
    if(classicGameBlock::blockStart15!=0){
        cout<<classicGameBlock::block15;
    }
    if((classicGameBlock::result1==31)||(classicGameBlock::result1==28)||(classicGameBlock::result1==22)||(classicGameBlock::result1==21)||(classicGameBlock::result1==15)||(classicGameBlock::result1==8)||(classicGameBlock::result1==0)){
        if(classicGameBlock::blockStart15!=1){
            classicGameBlock::block15 = 'I';
            cout<<classicGameBlock::block15;
        }
    }else{
        if(dummy==32767){
            blocks15:
            classicGameBlock::blockStart15 = 1;
            cout<<classicGameBlock::block15;
        }
        classicGameBlock::block15 = ' ';
        cout<<classicGameBlock::block15;
    }
    if(classicGameBlock::blockStart16!=0){
        cout<<classicGameBlock::block16;
    }
    if((classicGameBlock::result1==32)||(classicGameBlock::result1==27)||(classicGameBlock::result1==24)||(classicGameBlock::result1==19)||(classicGameBlock::result1==14)||(classicGameBlock::result1==12)||(classicGameBlock::result1==8)){
        if(classicGameBlock::blockStart16!=1){
            classicGameBlock::block16 = 'I';
            cout<<classicGameBlock::block16;
        }
    }else{
        if(dummy==32767){
            blocks16:
            classicGameBlock::blockStart16 = 1;
            cout<<classicGameBlock::block16;
        }
        classicGameBlock::block16 = ' ';
        cout<<classicGameBlock::block16;
    }
    if(classicGameBlock::blockStart17!=0){
        cout<<classicGameBlock::block17;
    }
    if((classicGameBlock::result1==30)||(classicGameBlock::result1==29)||(classicGameBlock::result1==20)||(classicGameBlock::result1==16)||(classicGameBlock::result1==11)||(classicGameBlock::result1==10)||(classicGameBlock::result1==5)){
        if(classicGameBlock::blockStart17!=1){
            classicGameBlock::block17 = 'I';
            cout<<classicGameBlock::block17;
        }
    }else{
        if(dummy==32767){
            blocks17:
            classicGameBlock::blockStart17 = 1;
            cout<<classicGameBlock::block17;
        }
        classicGameBlock::block17 = ' ';
        cout<<classicGameBlock::block17;
    }
    if(classicGameBlock::blockStart18!=0){
        cout<<classicGameBlock::block18;
    }
    if((classicGameBlock::result1==27)||(classicGameBlock::result1==24)||(classicGameBlock::result1==19)||(classicGameBlock::result1==17)||(classicGameBlock::result1==12)||(classicGameBlock::result1==8)||(classicGameBlock::result1==3)){
        if(classicGameBlock::blockStart18!=1){
            classicGameBlock::block18 = 'I';
            cout<<classicGameBlock::block18;
        }
    }else{
        if(dummy==32767){
            blocks18:
            classicGameBlock::blockStart18 = 1;
            cout<<classicGameBlock::block18;
        }
        classicGameBlock::block18 = ' ';
        cout<<classicGameBlock::block18;
    }
    if(classicGameBlock::blockStart19!=0){
        cout<<classicGameBlock::block19;
    }
    if((classicGameBlock::result1==29)||(classicGameBlock::result1==25)||(classicGameBlock::result1==21)||(classicGameBlock::result1==20)||(classicGameBlock::result1==15)||(classicGameBlock::result1==11)||(classicGameBlock::result1==2)){
        if(classicGameBlock::blockStart19!=1){
            classicGameBlock::block19 = 'I';
            cout<<classicGameBlock::block19;
        }
    }else{
        if(dummy==32767){
            blocks19:
            classicGameBlock::blockStart19 = 1;
            cout<<classicGameBlock::block19;
        }
        classicGameBlock::block19 = ' ';
        cout<<classicGameBlock::block19;
    }
    if(classicGameBlock::blockStart20!=0){
        cout<<classicGameBlock::block20;
    }
    if((classicGameBlock::result1==30)||(classicGameBlock::result1==26)||(classicGameBlock::result1==23)||(classicGameBlock::result1==19)||(classicGameBlock::result1==18)||(classicGameBlock::result1==14)||(classicGameBlock::result1==5)){
        if(classicGameBlock::blockStart20!=1){
            classicGameBlock::block20 = 'I';
            cout<<classicGameBlock::block20;
        }
    }else{
        if(dummy==32767){
            blocks20:
            classicGameBlock::blockStart20 = 1;
            cout<<classicGameBlock::block20;
        }
        classicGameBlock::block20 = ' ';
        cout<<classicGameBlock::block20;
    }
    }
    if(classicGame::difficulty==2){
    if(classicGameBlock::blockStart1!=0){
        cout<<classicGameBlock::block1;
    }
    if((classicGameBlock::result2==24)||(classicGameBlock::result2==20)||(classicGameBlock::result2==16)||(classicGameBlock::result2==12)||(classicGameBlock::result2==8)||(classicGameBlock::result2==4)||(classicGameBlock::result2==0)){
        if(classicGameBlock::blockStart1!=1){
            classicGameBlock::block1 = 'I';
            cout<<classicGameBlock::block1;
        }
    }else{
        if(dummy==32767){
            blocks1_n:
            classicGameBlock::blockStart1 = 1;
            cout<<classicGameBlock::block1;
        }
        classicGameBlock::block1 = ' ';
        cout<<classicGameBlock::block1;
    }
    if(classicGameBlock::blockStart2!=0){
        cout<<classicGameBlock::block2;
    }
    if((classicGameBlock::result2==23)||(classicGameBlock::result2==19)||(classicGameBlock::result2==15)||(classicGameBlock::result2==11)||(classicGameBlock::result2==7)||(classicGameBlock::result2==3)||(classicGameBlock::result2==1)){
        if(classicGameBlock::blockStart2!=1){
            classicGameBlock::block2 = 'I';
            cout<<classicGameBlock::block2;
        }
    }else{
        if(dummy==32767){
            blocks2_n:
            classicGameBlock::blockStart2 = 1;
            cout<<classicGameBlock::block2;
        }
        classicGameBlock::block2 = ' ';
        cout<<classicGameBlock::block2;
    }
    if(classicGameBlock::blockStart3!=0){
        cout<<classicGameBlock::block3;
    }
    if((classicGameBlock::result2==22)||(classicGameBlock::result2==18)||(classicGameBlock::result2==14)||(classicGameBlock::result2==10)||(classicGameBlock::result2==6)||(classicGameBlock::result2==2)||(classicGameBlock::result2==3)){
        if(classicGameBlock::blockStart3!=1){
            classicGameBlock::block3 = 'I';
            cout<<classicGameBlock::block3;
        }
    }else{
        if(dummy==32767){
            blocks3_n:
            classicGameBlock::blockStart3 = 1;
            cout<<classicGameBlock::block3;
        }
        classicGameBlock::block3 = ' ';
        cout<<classicGameBlock::block3;
    }
    if(classicGameBlock::blockStart4!=0){
        cout<<classicGameBlock::block4;
    }
    if((classicGameBlock::result2==21)||(classicGameBlock::result2==17)||(classicGameBlock::result2==13)||(classicGameBlock::result2==9)||(classicGameBlock::result2==5)||(classicGameBlock::result2==1)||(classicGameBlock::result2==4)){
        if(classicGameBlock::blockStart4!=1){
            classicGameBlock::block4 = 'I';
            cout<<classicGameBlock::block4;
        }
    }else{
        if(dummy==32767){
            blocks4_n:
            classicGameBlock::blockStart4 = 1;
            cout<<classicGameBlock::block4;
        }
        classicGameBlock::block4 = ' ';
        cout<<classicGameBlock::block4;
    }
    if(classicGameBlock::blockStart5!=0){
        cout<<classicGameBlock::block5;
    }
    if((classicGameBlock::result2==23)||(classicGameBlock::result2==19)||(classicGameBlock::result2==14)||(classicGameBlock::result2==10)||(classicGameBlock::result2==6)||(classicGameBlock::result2==5)||(classicGameBlock::result2==2)){
        if(classicGameBlock::blockStart5!=1){
            classicGameBlock::block5 = 'I';
            cout<<classicGameBlock::block5;
        }
    }else{
        if(dummy==32767){
            blocks5_n:
            classicGameBlock::blockStart5 = 1;
            cout<<classicGameBlock::block5;
        }
        classicGameBlock::block5 = ' ';
        cout<<classicGameBlock::block5;
    }
    if(classicGameBlock::blockStart6!=0){
        cout<<classicGameBlock::block6;
    }
    if((classicGameBlock::result2==24)||(classicGameBlock::result2==18)||(classicGameBlock::result2==16)||(classicGameBlock::result2==11)||(classicGameBlock::result2==7)||(classicGameBlock::result2==4)||(classicGameBlock::result2==1)){
        if(classicGameBlock::blockStart6!=1){
            classicGameBlock::block6 = 'I';
            cout<<classicGameBlock::block6;
        }
    }else{
        if(dummy==32767){
            blocks6_n:
            classicGameBlock::blockStart6 = 1;
            cout<<classicGameBlock::block6;
        }
        classicGameBlock::block6 = ' ';
        cout<<classicGameBlock::block6;
    }
    if(classicGameBlock::blockStart7!=0){
        cout<<classicGameBlock::block7;
    }
    if((classicGameBlock::result2==22)||(classicGameBlock::result2==20)||(classicGameBlock::result2==16)||(classicGameBlock::result2==13)||(classicGameBlock::result2==8)||(classicGameBlock::result2==6)||(classicGameBlock::result2==4)){
        if(classicGameBlock::blockStart7!=1){
            classicGameBlock::block7 = 'I';
            cout<<classicGameBlock::block7;
        }
    }else{
        if(dummy==32767){
            blocks7_n:
            classicGameBlock::blockStart7 = 1;
            cout<<classicGameBlock::block7;
        }
        classicGameBlock::block7 = ' ';
        cout<<classicGameBlock::block7;
    }
    if(classicGameBlock::blockStart8!=0){
        cout<<classicGameBlock::block8;
    }
    if((classicGameBlock::result2==21)||(classicGameBlock::result2==16)||(classicGameBlock::result2==15)||(classicGameBlock::result2==12)||(classicGameBlock::result2==9)||(classicGameBlock::result2==7)||(classicGameBlock::result2==1)){
        if(classicGameBlock::blockStart8!=1){
            classicGameBlock::block8 = 'I';
            cout<<classicGameBlock::block8;
        }
    }else{
        if(dummy==32767){
            blocks8_n:
            classicGameBlock::blockStart8 = 1;
            cout<<classicGameBlock::block8;
        }
        classicGameBlock::block8 = ' ';
        cout<<classicGameBlock::block8;
    }
    if(classicGameBlock::blockStart9!=0){
        cout<<classicGameBlock::block9;
    }
    if((classicGameBlock::result2==24)||(classicGameBlock::result2==19)||(classicGameBlock::result2==13)||(classicGameBlock::result2==10)||(classicGameBlock::result2==5)||(classicGameBlock::result2==3)||(classicGameBlock::result2==1)){
        if(classicGameBlock::blockStart9!=1){
            classicGameBlock::block9 = 'I';
            cout<<classicGameBlock::block9;
        }
    }else{
        if(dummy==32767){
            blocks9_n:
            classicGameBlock::blockStart9 = 1;
            cout<<classicGameBlock::block9;
        }
        classicGameBlock::block9 = ' ';
        cout<<classicGameBlock::block9;
    }
    if(classicGameBlock::blockStart10!=0){
        cout<<classicGameBlock::block10;
    }
    if((classicGameBlock::result2==23)||(classicGameBlock::result2==20)||(classicGameBlock::result2==12)||(classicGameBlock::result2==11)||(classicGameBlock::result2==7)||(classicGameBlock::result2==4)||(classicGameBlock::result2==2)){
        if(classicGameBlock::blockStart10!=1){
            classicGameBlock::block10 = 'I';
            cout<<classicGameBlock::block10;
        }
    }else{
        if(dummy==32767){
            blocks10_n:
            classicGameBlock::blockStart10 = 1;
            cout<<classicGameBlock::block10;
        }
        classicGameBlock::block10 = ' ';
        cout<<classicGameBlock::block10;
    }
    if(classicGameBlock::blockStart11!=0){
        cout<<classicGameBlock::block11;
    }
    if((classicGameBlock::result2==24)||(classicGameBlock::result2==16)||(classicGameBlock::result2==15)||(classicGameBlock::result2==10)||(classicGameBlock::result2==5)||(classicGameBlock::result2==2)||(classicGameBlock::result2==0)){
        if(classicGameBlock::blockStart11!=1){
            classicGameBlock::block11 = 'I';
            cout<<classicGameBlock::block11;
        }
    }else{
        if(dummy==32767){
            blocks11_n:
            classicGameBlock::blockStart11 = 1;
            cout<<classicGameBlock::block11;
        }
        classicGameBlock::block11 = ' ';
        cout<<classicGameBlock::block11;
    }
    if(classicGameBlock::blockStart12!=0){
        cout<<classicGameBlock::block12;
    }
    if((classicGameBlock::result2==21)||(classicGameBlock::result2==18)||(classicGameBlock::result2==13)||(classicGameBlock::result2==8)||(classicGameBlock::result2==6)||(classicGameBlock::result2==4)||(classicGameBlock::result2==1)){
        if(classicGameBlock::blockStart12!=1){
            classicGameBlock::block12 = 'I';
            cout<<classicGameBlock::block12;
        }
    }else{
        if(dummy==32767){
            blocks12_n:
            classicGameBlock::blockStart12 = 1;
            cout<<classicGameBlock::block12;
        }
        classicGameBlock::block12 = ' ';
        cout<<classicGameBlock::block12;
    }
    if(classicGameBlock::blockStart13!=0){
        cout<<classicGameBlock::block13;
    }
    if((classicGameBlock::result2==22)||(classicGameBlock::result2==17)||(classicGameBlock::result2==13)||(classicGameBlock::result2==9)||(classicGameBlock::result2==6)||(classicGameBlock::result2==3)||(classicGameBlock::result2==1)){
        if(classicGameBlock::blockStart13!=1){
            classicGameBlock::block13 = 'I';
            cout<<classicGameBlock::block13;
        }
    }else{
        if(dummy==32767){
            blocks13_n:
            classicGameBlock::blockStart13 = 1;
            cout<<classicGameBlock::block13;
        }
        classicGameBlock::block13 = ' ';
        cout<<classicGameBlock::block13;
    }
    if(classicGameBlock::blockStart14!=0){
        cout<<classicGameBlock::block14;
    }
    if((classicGameBlock::result2==23)||(classicGameBlock::result2==19)||(classicGameBlock::result2==14)||(classicGameBlock::result2==8)||(classicGameBlock::result2==4)||(classicGameBlock::result2==1)||(classicGameBlock::result2==7)){
        if(classicGameBlock::blockStart14!=1){
            classicGameBlock::block14 = 'I';
            cout<<classicGameBlock::block14;
        }
    }else{
        if(dummy==32767){
            blocks14_n:
            classicGameBlock::blockStart14 = 1;
            cout<<classicGameBlock::block14;
        }
        classicGameBlock::block14 = ' ';
        cout<<classicGameBlock::block14;
    }
    if(classicGameBlock::blockStart15!=0){
        cout<<classicGameBlock::block15;
    }
    if((classicGameBlock::result2==21)||(classicGameBlock::result2==18)||(classicGameBlock::result2==12)||(classicGameBlock::result2==10)||(classicGameBlock::result2==9)||(classicGameBlock::result2==5)||(classicGameBlock::result2==3)){
        if(classicGameBlock::blockStart15!=1){
            classicGameBlock::block15 = 'I';
            cout<<classicGameBlock::block15;
        }
    }else{
        if(dummy==32767){
            blocks15_n:
            classicGameBlock::blockStart15 = 1;
            cout<<classicGameBlock::block15;
        }
        classicGameBlock::block15 = ' ';
        cout<<classicGameBlock::block15;
    }
    if(classicGameBlock::blockStart16!=0){
        cout<<classicGameBlock::block16;
    }
    if((classicGameBlock::result2==23)||(classicGameBlock::result2==20)||(classicGameBlock::result2==16)||(classicGameBlock::result2==12)||(classicGameBlock::result2==6)||(classicGameBlock::result2==3)||(classicGameBlock::result2==2)){
        if(classicGameBlock::blockStart16!=1){
            classicGameBlock::block16 = 'I';
            cout<<classicGameBlock::block16;
        }
    }else{
        if(dummy==32767){
            blocks16_n:
            classicGameBlock::blockStart16 = 1;
            cout<<classicGameBlock::block16;
        }
        classicGameBlock::block16 = ' ';
        cout<<classicGameBlock::block16;
    }
    if(classicGameBlock::blockStart17!=0){
        cout<<classicGameBlock::block17;
    }
    if((classicGameBlock::result2==23)||(classicGameBlock::result2==20)||(classicGameBlock::result2==15)||(classicGameBlock::result2==11)||(classicGameBlock::result2==7)||(classicGameBlock::result2==4)||(classicGameBlock::result2==0)){
        if(classicGameBlock::blockStart17!=1){
            classicGameBlock::block17 = 'I';
            cout<<classicGameBlock::block17;
        }
    }else{
        if(dummy==32767){
            blocks17_n:
            classicGameBlock::blockStart17 = 1;
            cout<<classicGameBlock::block17;
        }
        classicGameBlock::block17 = ' ';
        cout<<classicGameBlock::block17;
    }
    if(classicGameBlock::blockStart18!=0){
        cout<<classicGameBlock::block18;
    }
    if((classicGameBlock::result2==22)||(classicGameBlock::result2==19)||(classicGameBlock::result2==14)||(classicGameBlock::result2==9)||(classicGameBlock::result2==6)||(classicGameBlock::result2==5)||(classicGameBlock::result2==1)){
        if(classicGameBlock::blockStart18!=1){
            classicGameBlock::block18 = 'I';
            cout<<classicGameBlock::block18;
        }
    }else{
        if(dummy==32767){
            blocks18_n:
            classicGameBlock::blockStart18 = 1;
            cout<<classicGameBlock::block18;
        }
        classicGameBlock::block18 = ' ';
        cout<<classicGameBlock::block18;
    }
    if(classicGameBlock::blockStart19!=0){
        cout<<classicGameBlock::block19;
    }
    if((classicGameBlock::result2==24)||(classicGameBlock::result2==16)||(classicGameBlock::result2==13)||(classicGameBlock::result2==8)||(classicGameBlock::result2==7)||(classicGameBlock::result2==6)||(classicGameBlock::result2==5)){
        if(classicGameBlock::blockStart19!=1){
            classicGameBlock::block19 = 'I';
            cout<<classicGameBlock::block19;
        }
    }else{
        if(dummy==32767){
            blocks19_n:
            classicGameBlock::blockStart19 = 1;
            cout<<classicGameBlock::block19;
        }
        classicGameBlock::block19 = ' ';
        cout<<classicGameBlock::block19;
    }
    if(classicGameBlock::blockStart20!=0){
        cout<<classicGameBlock::block20;
    }
    if((classicGameBlock::result2==20)||(classicGameBlock::result2==17)||(classicGameBlock::result2==14)||(classicGameBlock::result2==10)||(classicGameBlock::result2==8)||(classicGameBlock::result2==5)||(classicGameBlock::result2==4)){
        if(classicGameBlock::blockStart20!=1){
            classicGameBlock::block20 = 'I';
            cout<<classicGameBlock::block20;
        }
    }else{
        if(dummy==32767){
            blocks20_n:
            classicGameBlock::blockStart20 = 1;
            cout<<classicGameBlock::block20;
        }
        classicGameBlock::block20 = ' ';
        cout<<classicGameBlock::block20;
    }
    }
    if(classicGame::difficulty==3){
    if(classicGameBlock::blockStart1!=0){
        cout<<classicGameBlock::block1;
    }
    if((classicGameBlock::result3==16)||(classicGameBlock::result3==14)||(classicGameBlock::result3==10)||(classicGameBlock::result3==7)||(classicGameBlock::result3==5)||(classicGameBlock::result3==4)||(classicGameBlock::result3==2)){
        if(classicGameBlock::blockStart1!=1){
            classicGameBlock::block1 = 'I';
            cout<<classicGameBlock::block1;
        }
    }else{
        if(dummy==32767){
            blocks1_h:
            classicGameBlock::blockStart1 = 1;
            cout<<classicGameBlock::block1;
        }
        classicGameBlock::block1 = ' ';
        cout<<classicGameBlock::block1;
    }
    if(classicGameBlock::blockStart2!=0){
        cout<<classicGameBlock::block2;
    }
    if((classicGameBlock::result3==15)||(classicGameBlock::result3==13)||(classicGameBlock::result3==11)||(classicGameBlock::result3==9)||(classicGameBlock::result3==6)||(classicGameBlock::result3==5)||(classicGameBlock::result3==3)){
        if(classicGameBlock::blockStart2!=1){
            classicGameBlock::block2 = 'I';
            cout<<classicGameBlock::block2;
        }
    }else{
        if(dummy==32767){
            blocks2_h:
            classicGameBlock::blockStart2 = 1;
            cout<<classicGameBlock::block2;
        }
        classicGameBlock::block2 = ' ';
        cout<<classicGameBlock::block2;
    }
    if(classicGameBlock::blockStart3!=0){
        cout<<classicGameBlock::block3;
    }
    if((classicGameBlock::result3==14)||(classicGameBlock::result3==12)||(classicGameBlock::result3==8)||(classicGameBlock::result3==6)||(classicGameBlock::result3==4)||(classicGameBlock::result3==3)||(classicGameBlock::result3==1)){
        if(classicGameBlock::blockStart3!=1){
            classicGameBlock::block3 = 'I';
            cout<<classicGameBlock::block3;
        }
    }else{
        if(dummy==32767){
            blocks3_h:
            classicGameBlock::blockStart3 = 1;
            cout<<classicGameBlock::block3;
        }
        classicGameBlock::block3 = ' ';
        cout<<classicGameBlock::block3;
    }
    if(classicGameBlock::blockStart4!=0){
        cout<<classicGameBlock::block4;
    }
    if((classicGameBlock::result3==15)||(classicGameBlock::result3==13)||(classicGameBlock::result3==12)||(classicGameBlock::result3==9)||(classicGameBlock::result3==7)||(classicGameBlock::result3==5)||(classicGameBlock::result3==0)){
        if(classicGameBlock::blockStart4!=1){
            classicGameBlock::block4 = 'I';
            cout<<classicGameBlock::block4;
        }
    }else{
        if(dummy==32767){
            blocks4_h:
            classicGameBlock::blockStart4 = 1;
            cout<<classicGameBlock::block4;
        }
        classicGameBlock::block4 = ' ';
        cout<<classicGameBlock::block4;
    }
    if(classicGameBlock::blockStart5!=0){
        cout<<classicGameBlock::block5;
    }
    if((classicGameBlock::result3==16)||(classicGameBlock::result3==11)||(classicGameBlock::result3==10)||(classicGameBlock::result3==8)||(classicGameBlock::result3==6)||(classicGameBlock::result3==3)||(classicGameBlock::result3==2)){
        if(classicGameBlock::blockStart5!=1){
            classicGameBlock::block5 = 'I';
            cout<<classicGameBlock::block5;
        }
    }else{
        if(dummy==32767){
            blocks5_h:
            classicGameBlock::blockStart5 = 1;
            cout<<classicGameBlock::block5;
        }
        classicGameBlock::block5 = ' ';
        cout<<classicGameBlock::block5;
    }
    if(classicGameBlock::blockStart6!=0){
        cout<<classicGameBlock::block6;
    }
    if((classicGameBlock::result3==13)||(classicGameBlock::result3==11)||(classicGameBlock::result3==9)||(classicGameBlock::result3==6)||(classicGameBlock::result3==3)||(classicGameBlock::result3==2)||(classicGameBlock::result3==1)){
        if(classicGameBlock::blockStart6!=1){
            classicGameBlock::block6 = 'I';
            cout<<classicGameBlock::block6;
        }
    }else{
        if(dummy==32767){
            blocks6_h:
            classicGameBlock::blockStart6 = 1;
            cout<<classicGameBlock::block6;
        }
        classicGameBlock::block6 = ' ';
        cout<<classicGameBlock::block6;
    }
    if(classicGameBlock::blockStart7!=0){
        cout<<classicGameBlock::block7;
    }
    if((classicGameBlock::result3==14)||(classicGameBlock::result3==12)||(classicGameBlock::result3==8)||(classicGameBlock::result3==7)||(classicGameBlock::result3==5)||(classicGameBlock::result3==3)||(classicGameBlock::result3==1)){
        if(classicGameBlock::blockStart7!=1){
            classicGameBlock::block7 = 'I';
            cout<<classicGameBlock::block7;
        }
    }else{
        if(dummy==32767){
            blocks7_h:
            classicGameBlock::blockStart7 = 1;
            cout<<classicGameBlock::block7;
        }
        classicGameBlock::block7 = ' ';
        cout<<classicGameBlock::block7;
    }
    if(classicGameBlock::blockStart8!=0){
        cout<<classicGameBlock::block8;
    }
    if((classicGameBlock::result3==15)||(classicGameBlock::result3==13)||(classicGameBlock::result3==10)||(classicGameBlock::result3==9)||(classicGameBlock::result3==6)||(classicGameBlock::result3==2)||(classicGameBlock::result3==1)){
        if(classicGameBlock::blockStart8!=1){
            classicGameBlock::block8 = 'I';
            cout<<classicGameBlock::block8;
        }
    }else{
        if(dummy==32767){
            blocks8_h:
            classicGameBlock::blockStart8 = 1;
            cout<<classicGameBlock::block8;
        }
        classicGameBlock::block8 = ' ';
        cout<<classicGameBlock::block8;
    }
    if(classicGameBlock::blockStart9!=0){
        cout<<classicGameBlock::block9;
    }
    if((classicGameBlock::result3==14)||(classicGameBlock::result3==12)||(classicGameBlock::result3==11)||(classicGameBlock::result3==8)||(classicGameBlock::result3==5)||(classicGameBlock::result3==4)||(classicGameBlock::result3==0)){
        if(classicGameBlock::blockStart9!=1){
            classicGameBlock::block9 = 'I';
            cout<<classicGameBlock::block9;
        }
    }else{
        if(dummy==32767){
            blocks9_h:
            classicGameBlock::blockStart9 = 1;
            cout<<classicGameBlock::block9;
        }
        classicGameBlock::block9 = ' ';
        cout<<classicGameBlock::block9;
    }
    if(classicGameBlock::blockStart10!=0){
        cout<<classicGameBlock::block10;
    }
    if((classicGameBlock::result3==16)||(classicGameBlock::result3==13)||(classicGameBlock::result3==12)||(classicGameBlock::result3==9)||(classicGameBlock::result3==7)||(classicGameBlock::result3==6)||(classicGameBlock::result3==4)){
        if(classicGameBlock::blockStart10!=1){
            classicGameBlock::block10 = 'I';
            cout<<classicGameBlock::block10;
        }
    }else{
        if(dummy==32767){
            blocks10_h:
            classicGameBlock::blockStart10 = 1;
            cout<<classicGameBlock::block10;
        }
        classicGameBlock::block10 = ' ';
        cout<<classicGameBlock::block10;
    }
    if(classicGameBlock::blockStart11!=0){
        cout<<classicGameBlock::block1;
    }
    if((classicGameBlock::result3==15)||(classicGameBlock::result3==13)||(classicGameBlock::result3==12)||(classicGameBlock::result3==9)||(classicGameBlock::result3==6)||(classicGameBlock::result3==5)||(classicGameBlock::result3==1)){
        if(classicGameBlock::blockStart11!=1){
            classicGameBlock::block11 = 'I';
            cout<<classicGameBlock::block11;
        }
    }else{
        if(dummy==32767){
            blocks11_h:
            classicGameBlock::blockStart11 = 1;
            cout<<classicGameBlock::block11;
        }
        classicGameBlock::block11 = ' ';
        cout<<classicGameBlock::block11;
    }
    if(classicGameBlock::blockStart12!=0){
        cout<<classicGameBlock::block12;
    }
    if((classicGameBlock::result3==14)||(classicGameBlock::result3==12)||(classicGameBlock::result3==10)||(classicGameBlock::result3==8)||(classicGameBlock::result3==7)||(classicGameBlock::result3==4)||(classicGameBlock::result3==0)){
        if(classicGameBlock::blockStart12!=1){
            classicGameBlock::block12 = 'I';
            cout<<classicGameBlock::block12;
        }
    }else{
        if(dummy==32767){
            blocks12_h:
            classicGameBlock::blockStart12 = 1;
            cout<<classicGameBlock::block12;
        }
        classicGameBlock::block12 = ' ';
        cout<<classicGameBlock::block12;
    }
    if(classicGameBlock::blockStart13!=0){
        cout<<classicGameBlock::block13;
    }
    if((classicGameBlock::result3==16)||(classicGameBlock::result3==11)||(classicGameBlock::result3==9)||(classicGameBlock::result3==7)||(classicGameBlock::result3==5)||(classicGameBlock::result3==3)||(classicGameBlock::result3==2)){
        if(classicGameBlock::blockStart13!=1){
            classicGameBlock::block13 = 'I';
            cout<<classicGameBlock::block13;
        }
    }else{
        if(dummy==32767){
            blocks13_h:
            classicGameBlock::blockStart13 = 1;
            cout<<classicGameBlock::block13;
        }
        classicGameBlock::block13 = ' ';
        cout<<classicGameBlock::block13;
    }
    if(classicGameBlock::blockStart14!=0){
        cout<<classicGameBlock::block14;
    }
    if((classicGameBlock::result3==15)||(classicGameBlock::result3==13)||(classicGameBlock::result3==10)||(classicGameBlock::result3==8)||(classicGameBlock::result3==7)||(classicGameBlock::result3==6)||(classicGameBlock::result3==2)){
        if(classicGameBlock::blockStart14!=1){
            classicGameBlock::block14 = 'I';
            cout<<classicGameBlock::block14;
        }
    }else{
        if(dummy==32767){
            blocks14_h:
            classicGameBlock::blockStart14 = 1;
            cout<<classicGameBlock::block14;
        }
        classicGameBlock::block14 = ' ';
        cout<<classicGameBlock::block14;
    }
    if(classicGameBlock::blockStart15!=0){
        cout<<classicGameBlock::block15;
    }
    if((classicGameBlock::result3==14)||(classicGameBlock::result3==12)||(classicGameBlock::result3==9)||(classicGameBlock::result3==7)||(classicGameBlock::result3==6)||(classicGameBlock::result3==4)||(classicGameBlock::result3==1)){
        if(classicGameBlock::blockStart15!=1){
            classicGameBlock::block15 = 'I';
            cout<<classicGameBlock::block15;
        }
    }else{
        if(dummy==32767){
            blocks15_h:
            classicGameBlock::blockStart15 = 1;
            cout<<classicGameBlock::block15;
        }
        classicGameBlock::block15 = ' ';
        cout<<classicGameBlock::block15;
    }
    if(classicGameBlock::blockStart16!=0){
        cout<<classicGameBlock::block16;
    }
    if((classicGameBlock::result3==14)||(classicGameBlock::result3==13)||(classicGameBlock::result3==8)||(classicGameBlock::result3==7)||(classicGameBlock::result3==5)||(classicGameBlock::result3==4)||(classicGameBlock::result3==1)){
        if(classicGameBlock::blockStart16!=1){
            classicGameBlock::block16 = 'I';
            cout<<classicGameBlock::block16;
        }
    }else{
        if(dummy==32767){
            blocks16_h:
            classicGameBlock::blockStart16 = 1;
            cout<<classicGameBlock::block16;
        }
        classicGameBlock::block16 = ' ';
        cout<<classicGameBlock::block16;
    }
    if(classicGameBlock::blockStart17!=0){
        cout<<classicGameBlock::block17;
    }
    if((classicGameBlock::result3==15)||(classicGameBlock::result3==11)||(classicGameBlock::result3==9)||(classicGameBlock::result3==6)||(classicGameBlock::result3==4)||(classicGameBlock::result3==2)||(classicGameBlock::result3==0)){
        if(classicGameBlock::blockStart17!=1){
            classicGameBlock::block17 = 'I';
            cout<<classicGameBlock::block17;
        }
    }else{
        if(dummy==32767){
            blocks17_h:
            classicGameBlock::blockStart17 = 1;
            cout<<classicGameBlock::block17;
        }
        classicGameBlock::block17 = ' ';
        cout<<classicGameBlock::block17;
    }
    if(classicGameBlock::blockStart18!=0){
        cout<<classicGameBlock::block18;
    }
    if((classicGameBlock::result3==15)||(classicGameBlock::result3==14)||(classicGameBlock::result3==8)||(classicGameBlock::result3==6)||(classicGameBlock::result3==5)||(classicGameBlock::result3==3)||(classicGameBlock::result3==2)){
        if(classicGameBlock::blockStart18!=1){
            classicGameBlock::block18 = 'I';
            cout<<classicGameBlock::block18;
        }
    }else{
        if(dummy==32767){
            blocks18_h:
            classicGameBlock::blockStart18 = 1;
            cout<<classicGameBlock::block18;
        }
        classicGameBlock::block18 = ' ';
        cout<<classicGameBlock::block18;
    }
    if(classicGameBlock::blockStart19!=0){
        cout<<classicGameBlock::block19;
    }
    if((classicGameBlock::result3==16)||(classicGameBlock::result3==13)||(classicGameBlock::result3==10)||(classicGameBlock::result3==7)||(classicGameBlock::result3==4)||(classicGameBlock::result3==2)||(classicGameBlock::result3==1)){
        if(classicGameBlock::blockStart19!=1){
            classicGameBlock::block19 = 'I';
            cout<<classicGameBlock::block19;
        }
    }else{
        if(dummy==32767){
            blocks19_h:
            classicGameBlock::blockStart19 = 1;
            cout<<classicGameBlock::block19;
        }
        classicGameBlock::block19 = ' ';
        cout<<classicGameBlock::block19;
    }
    if(classicGameBlock::blockStart20!=0){
        cout<<classicGameBlock::block20;
    }
    if((classicGameBlock::result3==15)||(classicGameBlock::result3==12)||(classicGameBlock::result3==9)||(classicGameBlock::result3==7)||(classicGameBlock::result3==5)||(classicGameBlock::result3==4)||(classicGameBlock::result3==2)){
        if(classicGameBlock::blockStart20!=1){
            classicGameBlock::block20 = 'I';
            cout<<classicGameBlock::block20;
        }
    }else{
        if(dummy==32767){
            blocks20_h:
            classicGameBlock::blockStart20 = 1;
            cout<<classicGameBlock::block20;
        }
        classicGameBlock::block20 = ' ';
        cout<<classicGameBlock::block20;
    }
    }

    if(classicGame::difficulty==4){
    if(classicGameBlock::blockStart1!=0){
        cout<<classicGameBlock::block1;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)){
        if(classicGameBlock::blockStart1!=1){
            classicGameBlock::block1 = 'I';
            cout<<classicGameBlock::block1;
        }
    }else{
        if(dummy==32767){
            blocks1_v:
            classicGameBlock::blockStart1 = 1;
            cout<<classicGameBlock::block1;
        }
        classicGameBlock::block1 = ' ';
        cout<<classicGameBlock::block1;
    }
    if(classicGameBlock::blockStart2!=0){
        cout<<classicGameBlock::block2;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart2!=1){
            classicGameBlock::block2 = 'I';
            cout<<classicGameBlock::block2;
        }
    }else{
        if(dummy==32767){
            blocks2_v:
            classicGameBlock::blockStart2 = 1;
            cout<<classicGameBlock::block2;
        }
        classicGameBlock::block2 = ' ';
        cout<<classicGameBlock::block2;
    }
    if(classicGameBlock::blockStart3!=0){
        cout<<classicGameBlock::block3;
    }
    if((classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)||(classicGameBlock::result4==3)){
        if(classicGameBlock::blockStart3!=1){
            classicGameBlock::block3 = 'I';
            cout<<classicGameBlock::block3;
        }
    }else{
        if(dummy==32767){
            blocks3_v:
            classicGameBlock::blockStart3 = 1;
            cout<<classicGameBlock::block3;
        }
        classicGameBlock::block3 = ' ';
        cout<<classicGameBlock::block3;
    }
    if(classicGameBlock::blockStart4!=0){
        cout<<classicGameBlock::block4;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)){
        if(classicGameBlock::blockStart4!=1){
            classicGameBlock::block4 = 'I';
            cout<<classicGameBlock::block4;
        }
    }else{
        if(dummy==32767){
            blocks4_v:
            classicGameBlock::blockStart4 = 1;
            cout<<classicGameBlock::block4;
        }
        classicGameBlock::block4 = ' ';
        cout<<classicGameBlock::block4;
    }
    if(classicGameBlock::blockStart5!=0){
        cout<<classicGameBlock::block5;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart5!=1){
            classicGameBlock::block5 = 'I';
            cout<<classicGameBlock::block5;
        }
    }else{
        if(dummy==32767){
            blocks5_v:
            classicGameBlock::blockStart5 = 1;
            cout<<classicGameBlock::block5;
        }
        classicGameBlock::block5 = ' ';
        cout<<classicGameBlock::block5;
    }
    if(classicGameBlock::blockStart6!=0){
        cout<<classicGameBlock::block6;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)){
        if(classicGameBlock::blockStart6!=1){
            classicGameBlock::block6 = 'I';
            cout<<classicGameBlock::block6;
        }
    }else{
        if(dummy==32767){
            blocks6_v:
            classicGameBlock::blockStart6 = 1;
            cout<<classicGameBlock::block6;
        }
        classicGameBlock::block6 = ' ';
        cout<<classicGameBlock::block6;
    }
    if(classicGameBlock::blockStart7!=0){
        cout<<classicGameBlock::block7;
    }
    if((classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart7!=1){
            classicGameBlock::block7 = 'I';
            cout<<classicGameBlock::block7;
        }
    }else{
        if(dummy==32767){
            blocks7_v:
            classicGameBlock::blockStart7 = 1;
            cout<<classicGameBlock::block7;
        }
        classicGameBlock::block7 = ' ';
        cout<<classicGameBlock::block7;
    }
    if(classicGameBlock::blockStart8!=0){
        cout<<classicGameBlock::block8;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==3)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart8!=1){
            classicGameBlock::block8 = 'I';
            cout<<classicGameBlock::block8;
        }
    }else{
        if(dummy==32767){
            blocks8_v:
            classicGameBlock::blockStart8 = 1;
            cout<<classicGameBlock::block8;
        }
        classicGameBlock::block8 = ' ';
        cout<<classicGameBlock::block8;
    }
    if(classicGameBlock::blockStart9!=0){
        cout<<classicGameBlock::block9;
    }
    if((classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart9!=1){
            classicGameBlock::block9 = 'I';
            cout<<classicGameBlock::block9;
        }
    }else{
        if(dummy==32767){
            blocks9_v:
            classicGameBlock::blockStart9 = 1;
            cout<<classicGameBlock::block9;
        }
        classicGameBlock::block9 = ' ';
        cout<<classicGameBlock::block9;
    }
    if(classicGameBlock::blockStart10!=0){
        cout<<classicGameBlock::block10;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==0)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)){
        if(classicGameBlock::blockStart10!=1){
            classicGameBlock::block10 = 'I';
            cout<<classicGameBlock::block10;
        }
    }else{
        if(dummy==32767){
            blocks10_v:
            classicGameBlock::blockStart10 = 1;
            cout<<classicGameBlock::block10;
        }
        classicGameBlock::block10 = ' ';
        cout<<classicGameBlock::block10;
    }
    if(classicGameBlock::blockStart11!=0){
        cout<<classicGameBlock::block11;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)){
        if(classicGameBlock::blockStart11!=1){
            classicGameBlock::block11 = 'I';
            cout<<classicGameBlock::block11;
        }
    }else{
        if(dummy==32767){
            blocks11_v:
            classicGameBlock::blockStart11 = 1;
            cout<<classicGameBlock::block11;
        }
        classicGameBlock::block11 = ' ';
        cout<<classicGameBlock::block11;
    }
    if(classicGameBlock::blockStart12!=0){
        cout<<classicGameBlock::block12;
    }
    if((classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)){
        if(classicGameBlock::blockStart12!=1){
            classicGameBlock::block12 = 'I';
            cout<<classicGameBlock::block12;
        }
    }else{
        if(dummy==32767){
            blocks12_v:
            classicGameBlock::blockStart12 = 1;
            cout<<classicGameBlock::block12;
        }
        classicGameBlock::block12 = ' ';
        cout<<classicGameBlock::block12;
    }
    if(classicGameBlock::blockStart13!=0){
        cout<<classicGameBlock::block13;
    }
    if((classicGameBlock::result4==7)||(classicGameBlock::result4==0)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==1)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)){
        if(classicGameBlock::blockStart13!=1){
            classicGameBlock::block13 = 'I';
            cout<<classicGameBlock::block13;
        }
    }else{
        if(dummy==32767){
            blocks13_v:
            classicGameBlock::blockStart13 = 1;
            cout<<classicGameBlock::block13;
        }
        classicGameBlock::block13 = ' ';
        cout<<classicGameBlock::block13;
    }
    if(classicGameBlock::blockStart14!=0){
        cout<<classicGameBlock::block14;
    }
    if((classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart14!=1){
            classicGameBlock::block14 = 'I';
            cout<<classicGameBlock::block14;
        }
    }else{
        if(dummy==32767){
            blocks14_v:
            classicGameBlock::blockStart14 = 1;
            cout<<classicGameBlock::block14;
        }
        classicGameBlock::block14 = ' ';
        cout<<classicGameBlock::block14;
    }
    if(classicGameBlock::blockStart15!=0){
        cout<<classicGameBlock::block15;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart15!=1){
            classicGameBlock::block15 = 'I';
            cout<<classicGameBlock::block15;
        }
    }else{
        if(dummy==32767){
            blocks15_v:
            classicGameBlock::blockStart15 = 1;
            cout<<classicGameBlock::block15;
        }
        classicGameBlock::block15 = ' ';
        cout<<classicGameBlock::block15;
    }
    if(classicGameBlock::blockStart16!=0){
        cout<<classicGameBlock::block16;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart16!=1){
            classicGameBlock::block16 = 'I';
            cout<<classicGameBlock::block16;
        }
    }else{
        if(dummy==32767){
            blocks16_v:
            classicGameBlock::blockStart16 = 1;
            cout<<classicGameBlock::block16;
        }
        classicGameBlock::block16 = ' ';
        cout<<classicGameBlock::block16;
    }
    if(classicGameBlock::blockStart17!=0){
        cout<<classicGameBlock::block17;
    }
    if((classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart17!=1){
            classicGameBlock::block17 = 'I';
            cout<<classicGameBlock::block17;
        }
    }else{
        if(dummy==32767){
            blocks17_v:
            classicGameBlock::blockStart17 = 1;
            cout<<classicGameBlock::block17;
        }
        classicGameBlock::block17 = ' ';
        cout<<classicGameBlock::block17;
    }
    if(classicGameBlock::blockStart18!=0){
        cout<<classicGameBlock::block18;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)){
        if(classicGameBlock::blockStart18!=1){
            classicGameBlock::block18 = 'I';
            cout<<classicGameBlock::block18;
        }
    }else{
        if(dummy==32767){
            blocks18_v:
            classicGameBlock::blockStart18 = 1;
            cout<<classicGameBlock::block18;
        }
        classicGameBlock::block18 = ' ';
        cout<<classicGameBlock::block18;
    }
    if(classicGameBlock::blockStart19!=0){
        cout<<classicGameBlock::block19;
    }
    if((classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==4)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)||(classicGameBlock::result4==3)){
        if(classicGameBlock::blockStart19!=1){
            classicGameBlock::block19 = 'I';
            cout<<classicGameBlock::block19;
        }
    }else{
        if(dummy==32767){
            blocks19_v:
            classicGameBlock::blockStart19 = 1;
            cout<<classicGameBlock::block19;
        }
        classicGameBlock::block19 = ' ';
        cout<<classicGameBlock::block19;
    }
    if(classicGameBlock::blockStart20!=0){
        cout<<classicGameBlock::block20;
    }
    if((classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart20!=1){
            classicGameBlock::block20 = 'I';
            cout<<classicGameBlock::block20;
        }
    }else{
        if(dummy==32767){
            blocks20_v:
            classicGameBlock::blockStart20 = 1;
            cout<<classicGameBlock::block20;
        }
        classicGameBlock::block20 = ' ';
        cout<<classicGameBlock::block20;
    }
    }

    if(classicGame::difficulty==5){
    if(classicGameBlock::blockStart1!=0){
        cout<<classicGameBlock::block1;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)){
        if(classicGameBlock::blockStart1!=1){
            classicGameBlock::block1 = 'I';
            cout<<classicGameBlock::block1;
        }
    }else{
        if(dummy==32767){
            blocks1_c:
            classicGameBlock::blockStart1 = 1;
            cout<<classicGameBlock::block1;
        }
        classicGameBlock::block1 = ' ';
        cout<<classicGameBlock::block1;
    }
    if(classicGameBlock::blockStart2!=0){
        cout<<classicGameBlock::block2;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart2!=1){
            classicGameBlock::block2 = 'I';
            cout<<classicGameBlock::block2;
        }
    }else{
        if(dummy==32767){
            blocks2_c:
            classicGameBlock::blockStart2 = 1;
            cout<<classicGameBlock::block2;
        }
        classicGameBlock::block2 = ' ';
        cout<<classicGameBlock::block2;
    }
    if(classicGameBlock::blockStart3!=0){
        cout<<classicGameBlock::block3;
    }
    if((classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)||(classicGameBlock::result4==3)){
        if(classicGameBlock::blockStart3!=1){
            classicGameBlock::block3 = 'I';
            cout<<classicGameBlock::block3;
        }
    }else{
        if(dummy==32767){
            blocks3_c:
            classicGameBlock::blockStart3 = 1;
            cout<<classicGameBlock::block3;
        }
        classicGameBlock::block3 = ' ';
        cout<<classicGameBlock::block3;
    }
    if(classicGameBlock::blockStart4!=0){
        cout<<classicGameBlock::block4;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)){
        if(classicGameBlock::blockStart4!=1){
            classicGameBlock::block4 = 'I';
            cout<<classicGameBlock::block4;
        }
    }else{
        if(dummy==32767){
            blocks4_c:
            classicGameBlock::blockStart4 = 1;
            cout<<classicGameBlock::block4;
        }
        classicGameBlock::block4 = ' ';
        cout<<classicGameBlock::block4;
    }
    if(classicGameBlock::blockStart5!=0){
        cout<<classicGameBlock::block5;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart5!=1){
            classicGameBlock::block5 = 'I';
            cout<<classicGameBlock::block5;
        }
    }else{
        if(dummy==32767){
            blocks5_c:
            classicGameBlock::blockStart5 = 1;
            cout<<classicGameBlock::block5;
        }
        classicGameBlock::block5 = ' ';
        cout<<classicGameBlock::block5;
    }
    if(classicGameBlock::blockStart6!=0){
        cout<<classicGameBlock::block6;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)){
        if(classicGameBlock::blockStart6!=1){
            classicGameBlock::block6 = 'I';
            cout<<classicGameBlock::block6;
        }
    }else{
        if(dummy==32767){
            blocks6_c:
            classicGameBlock::blockStart6 = 1;
            cout<<classicGameBlock::block6;
        }
        classicGameBlock::block6 = ' ';
        cout<<classicGameBlock::block6;
    }
    if(classicGameBlock::blockStart7!=0){
        cout<<classicGameBlock::block7;
    }
    if((classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart7!=1){
            classicGameBlock::block7 = 'I';
            cout<<classicGameBlock::block7;
        }
    }else{
        if(dummy==32767){
            blocks7_c:
            classicGameBlock::blockStart7 = 1;
            cout<<classicGameBlock::block7;
        }
        classicGameBlock::block7 = ' ';
        cout<<classicGameBlock::block7;
    }
    if(classicGameBlock::blockStart8!=0){
        cout<<classicGameBlock::block8;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==3)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart8!=1){
            classicGameBlock::block8 = 'I';
            cout<<classicGameBlock::block8;
        }
    }else{
        if(dummy==32767){
            blocks8_c:
            classicGameBlock::blockStart8 = 1;
            cout<<classicGameBlock::block8;
        }
        classicGameBlock::block8 = ' ';
        cout<<classicGameBlock::block8;
    }
    if(classicGameBlock::blockStart9!=0){
        cout<<classicGameBlock::block9;
    }
    if((classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart9!=1){
            classicGameBlock::block9 = 'I';
            cout<<classicGameBlock::block9;
        }
    }else{
        if(dummy==32767){
            blocks9_c:
            classicGameBlock::blockStart9 = 1;
            cout<<classicGameBlock::block9;
        }
        classicGameBlock::block9 = ' ';
        cout<<classicGameBlock::block9;
    }
    if(classicGameBlock::blockStart10!=0){
        cout<<classicGameBlock::block10;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==0)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)){
        if(classicGameBlock::blockStart10!=1){
            classicGameBlock::block10 = 'I';
            cout<<classicGameBlock::block10;
        }
    }else{
        if(dummy==32767){
            blocks10_c:
            classicGameBlock::blockStart10 = 1;
            cout<<classicGameBlock::block10;
        }
        classicGameBlock::block10 = ' ';
        cout<<classicGameBlock::block10;
    }
    if(classicGameBlock::blockStart11!=0){
        cout<<classicGameBlock::block11;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)){
        if(classicGameBlock::blockStart11!=1){
            classicGameBlock::block11 = 'I';
            cout<<classicGameBlock::block11;
        }
    }else{
        if(dummy==32767){
            blocks11_c:
            classicGameBlock::blockStart11 = 1;
            cout<<classicGameBlock::block11;
        }
        classicGameBlock::block11 = ' ';
        cout<<classicGameBlock::block11;
    }
    if(classicGameBlock::blockStart12!=0){
        cout<<classicGameBlock::block12;
    }
    if((classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)){
        if(classicGameBlock::blockStart12!=1){
            classicGameBlock::block12 = 'I';
            cout<<classicGameBlock::block12;
        }
    }else{
        if(dummy==32767){
            blocks12_c:
            classicGameBlock::blockStart12 = 1;
            cout<<classicGameBlock::block12;
        }
        classicGameBlock::block12 = ' ';
        cout<<classicGameBlock::block12;
    }
    if(classicGameBlock::blockStart13!=0){
        cout<<classicGameBlock::block13;
    }
    if((classicGameBlock::result4==7)||(classicGameBlock::result4==0)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==1)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)){
        if(classicGameBlock::blockStart13!=1){
            classicGameBlock::block13 = 'I';
            cout<<classicGameBlock::block13;
        }
    }else{
        if(dummy==32767){
            blocks13_c:
            classicGameBlock::blockStart13 = 1;
            cout<<classicGameBlock::block13;
        }
        classicGameBlock::block13 = ' ';
        cout<<classicGameBlock::block13;
    }
    if(classicGameBlock::blockStart14!=0){
        cout<<classicGameBlock::block14;
    }
    if((classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart14!=1){
            classicGameBlock::block14 = 'I';
            cout<<classicGameBlock::block14;
        }
    }else{
        if(dummy==32767){
            blocks14_c:
            classicGameBlock::blockStart14 = 1;
            cout<<classicGameBlock::block14;
        }
        classicGameBlock::block14 = ' ';
        cout<<classicGameBlock::block14;
    }
    if(classicGameBlock::blockStart15!=0){
        cout<<classicGameBlock::block15;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart15!=1){
            classicGameBlock::block15 = 'I';
            cout<<classicGameBlock::block15;
        }
    }else{
        if(dummy==32767){
            blocks15_c:
            classicGameBlock::blockStart15 = 1;
            cout<<classicGameBlock::block15;
        }
        classicGameBlock::block15 = ' ';
        cout<<classicGameBlock::block15;
    }
    if(classicGameBlock::blockStart16!=0){
        cout<<classicGameBlock::block16;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart16!=1){
            classicGameBlock::block16 = 'I';
            cout<<classicGameBlock::block16;
        }
    }else{
        if(dummy==32767){
            blocks16_c:
            classicGameBlock::blockStart16 = 1;
            cout<<classicGameBlock::block16;
        }
        classicGameBlock::block16 = ' ';
        cout<<classicGameBlock::block16;
    }
    if(classicGameBlock::blockStart17!=0){
        cout<<classicGameBlock::block17;
    }
    if((classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart17!=1){
            classicGameBlock::block17 = 'I';
            cout<<classicGameBlock::block17;
        }
    }else{
        if(dummy==32767){
            blocks17_c:
            classicGameBlock::blockStart17 = 1;
            cout<<classicGameBlock::block17;
        }
        classicGameBlock::block17 = ' ';
        cout<<classicGameBlock::block17;
    }
    if(classicGameBlock::blockStart18!=0){
        cout<<classicGameBlock::block18;
    }
    if((classicGameBlock::result4==8)||(classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)){
        if(classicGameBlock::blockStart18!=1){
            classicGameBlock::block18 = 'I';
            cout<<classicGameBlock::block18;
        }
    }else{
        if(dummy==32767){
            blocks18_c:
            classicGameBlock::blockStart18 = 1;
            cout<<classicGameBlock::block18;
        }
        classicGameBlock::block18 = ' ';
        cout<<classicGameBlock::block18;
    }
    if(classicGameBlock::blockStart19!=0){
        cout<<classicGameBlock::block19;
    }
    if((classicGameBlock::result4==7)||(classicGameBlock::result4==6)||(classicGameBlock::result4==4)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)||(classicGameBlock::result4==3)){
        if(classicGameBlock::blockStart19!=1){
            classicGameBlock::block19 = 'I';
            cout<<classicGameBlock::block19;
        }
    }else{
        if(dummy==32767){
            blocks19_c:
            classicGameBlock::blockStart19 = 1;
            cout<<classicGameBlock::block19;
        }
        classicGameBlock::block19 = ' ';
        cout<<classicGameBlock::block19;
    }
    if(classicGameBlock::blockStart20!=0){
        cout<<classicGameBlock::block20;
    }
    if((classicGameBlock::result4==6)||(classicGameBlock::result4==5)||(classicGameBlock::result4==4)||(classicGameBlock::result4==3)||(classicGameBlock::result4==2)||(classicGameBlock::result4==1)||(classicGameBlock::result4==0)){
        if(classicGameBlock::blockStart20!=1){
            classicGameBlock::block20 = 'I';
            cout<<classicGameBlock::block20;
        }
    }else{
        if(dummy==32767){
            blocks20_c:
            classicGameBlock::blockStart20 = 1;
            cout<<classicGameBlock::block20;
        }
        classicGameBlock::block20 = ' ';
        cout<<classicGameBlock::block20;
    }
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
    if(classicGame::scopeInt==0){
        cout<<classicGame::shootPlayerPtr;
    }else{
        cout<<classicGame::scope;
    }
    cout<<"\n";
    cout.width(classicGame::movement);
    if(classicGame::scopeInt==0){
        cout<<classicGame::shootPlayerPtr;
    }else{
        cout<<classicGame::scope;
    }
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
            if(classicGame::scopeInt==1){
                classicGame::scopeInt=0;
            }
            classicGame::shootPlayer = 1;
            if(classicGame::shootPlayer>=1){
                classicGame::shootPlayerPtr = '.';
            }
            classicGame::ammunition--;
            break;
        case 'A':
            if(classicGame::scopeInt!=1){
              classicGame::movement--;
            }
            while(classicGame::movement<1){
                classicGame::movement=1;
            }
            break;
        case 'D':
            if(classicGame::scopeInt!=1){
               classicGame::movement++;
            }
            while(classicGame::movement>20){
                classicGame::movement=20;
            }
            break;
        case 'S':
            classicGame::scopeInt = 1;
            break;
        case 'E':
            if(classicGame::difficulty==1){
                classicGameBlock::result1 = rand() % classicGameBlock::amplifier1;
            }
            if(classicGame::difficulty==2){
                classicGameBlock::result2 = rand() % classicGameBlock::amplifier2;
            }
            if(classicGame::difficulty==3){
                classicGameBlock::result3 = rand() % classicGameBlock::amplifier3;
            }
            if(classicGame::difficulty==4){
                classicGameBlock::result4 = rand() % classicGameBlock::amplifier4;
            }
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
            pauseClassic:
            system("cls");
            cout << "PAUSE: PRESS Z TO CONTINUE" << endl;
            switch(_getch()){
            case 'Z':
                system("cls");
                mainGame();
                break;
            default:
                goto pauseClassic;
                break;
            }
            break;
            case 'X':
                system("cls");
                Beep(500,200);
                cout << "ARE YOU SURE DO YOU WANT TO QUIT?" << endl;
                cout << "---------------------------------" << endl;
                cout << "0 - NO 1 - YES\n";
                switch(_getch()){
                case '0':
                    system("cls");
                    mainGame();
                    break;
                case '1':
                    system("cls");
                    gameover();
                    break;
                }
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
