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

static int moveAtimes03;
static int moveDtimes03;
static int moveStimes03;
static int shootingTimes03;
static int death03;

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
    static int tempAmmunition;

    int movement = 10;

    int rewardAmmunition;

    int amplifier;
    int result;

    int clearScreen;

    int healthPoint;
}

namespace classicGameResultCustom{
    int resultBlock1_1;
    int resultBlock1_2;
    int resultBlock1_3;
    int resultBlock1_4;
    int resultBlock1_5;
    int resultBlock1_6;
    int resultBlock1_7;
    int resultBlock2_1;
    int resultBlock2_2;
    int resultBlock2_3;
    int resultBlock2_4;
    int resultBlock2_5;
    int resultBlock2_6;
    int resultBlock2_7;
    int resultBlock3_1;
    int resultBlock3_2;
    int resultBlock3_3;
    int resultBlock3_4;
    int resultBlock3_5;
    int resultBlock3_6;
    int resultBlock3_7;
    int resultBlock4_1;
    int resultBlock4_2;
    int resultBlock4_3;
    int resultBlock4_4;
    int resultBlock4_5;
    int resultBlock4_6;
    int resultBlock4_7;
    int resultBlock5_1;
    int resultBlock5_2;
    int resultBlock5_3;
    int resultBlock5_4;
    int resultBlock5_5;
    int resultBlock5_6;
    int resultBlock5_7;
    int resultBlock6_1;
    int resultBlock6_2;
    int resultBlock6_3;
    int resultBlock6_4;
    int resultBlock6_5;
    int resultBlock6_6;
    int resultBlock6_7;
    int resultBlock7_1;
    int resultBlock7_2;
    int resultBlock7_3;
    int resultBlock7_4;
    int resultBlock7_5;
    int resultBlock7_6;
    int resultBlock7_7;
    int resultBlock8_1;
    int resultBlock8_2;
    int resultBlock8_3;
    int resultBlock8_4;
    int resultBlock8_5;
    int resultBlock8_6;
    int resultBlock8_7;
    int resultBlock9_1;
    int resultBlock9_2;
    int resultBlock9_3;
    int resultBlock9_4;
    int resultBlock9_5;
    int resultBlock9_6;
    int resultBlock9_7;
    int resultBlock10_1;
    int resultBlock10_2;
    int resultBlock10_3;
    int resultBlock10_4;
    int resultBlock10_5;
    int resultBlock10_6;
    int resultBlock10_7;
    int resultBlock11_1;
    int resultBlock11_2;
    int resultBlock11_3;
    int resultBlock11_4;
    int resultBlock11_5;
    int resultBlock11_6;
    int resultBlock11_7;
    int resultBlock12_1;
    int resultBlock12_2;
    int resultBlock12_3;
    int resultBlock12_4;
    int resultBlock12_5;
    int resultBlock12_6;
    int resultBlock12_7;
    int resultBlock13_1;
    int resultBlock13_2;
    int resultBlock13_3;
    int resultBlock13_4;
    int resultBlock13_5;
    int resultBlock13_6;
    int resultBlock13_7;
    int resultBlock14_1;
    int resultBlock14_2;
    int resultBlock14_3;
    int resultBlock14_4;
    int resultBlock14_5;
    int resultBlock14_6;
    int resultBlock14_7;
    int resultBlock15_1;
    int resultBlock15_2;
    int resultBlock15_3;
    int resultBlock15_4;
    int resultBlock15_5;
    int resultBlock15_6;
    int resultBlock15_7;
    int resultBlock16_1;
    int resultBlock16_2;
    int resultBlock16_3;
    int resultBlock16_4;
    int resultBlock16_5;
    int resultBlock16_6;
    int resultBlock16_7;
    int resultBlock17_1;
    int resultBlock17_2;
    int resultBlock17_3;
    int resultBlock17_4;
    int resultBlock17_5;
    int resultBlock17_6;
    int resultBlock17_7;
    int resultBlock18_1;
    int resultBlock18_2;
    int resultBlock18_3;
    int resultBlock18_4;
    int resultBlock18_5;
    int resultBlock18_6;
    int resultBlock18_7;
    int resultBlock19_1;
    int resultBlock19_2;
    int resultBlock19_3;
    int resultBlock19_4;
    int resultBlock19_5;
    int resultBlock19_6;
    int resultBlock19_7;
    int resultBlock20_1;
    int resultBlock20_2;
    int resultBlock20_3;
    int resultBlock20_4;
    int resultBlock20_5;
    int resultBlock20_6;
    int resultBlock20_7;
}

static int recentScore03 = classicGame::recentScore3;
static int highscore03 = classicGame::highscore3;

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

void classicMode::classicGameVariablePass(){
    tankGameStructureClassicGameObject.gamemode3Stats(death03,shootingTimes03, moveAtimes03, moveDtimes03, moveStimes03, recentScore03, highscore03);
}

void classicMode::custom(){
    system("cls");
    cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM\n\n";
    cout << "1 - VARIABLES\n";
    cout << "2 - AMPLIFIER - " << classicGameCustom::amplifier << endl;
    cout << "3 - RESULTS\n";
    cout << "4 - CLSVALUE - "<< classicGameCustom::clearScreen <<"\n\n";
    cout << "S - SAVE\n";
    cout << "Z - PLAY\n";
    cout << "X - BACK\n";
    if(kbhit()){
        switch(_getch()){
    case '1':
        customCase1:
            system("cls");
            cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > VARIABLES\n\n";
            cout << "VARIABLES: TYPE: INTEGERS\n";
            cout << "X - BACK\n";
            cout << "S - SCORE - " << classicGameCustom::score << endl;
            cout << "A - AMMUNITION - " << classicGameCustom::ammunition << endl;
            cout << "R - REWARD AMMUNITION - " << classicGameCustom::rewardAmmunition << endl;
            cout << "H - HEALTHPOINT - " << classicGameCustom::healthPoint << endl;
            cout << "M - MOVEMENT - " << classicGame::movement << endl;
            switch(_getch()){
            case 'S':
                cout << ": SET VALUE TO = ";
                cin >> classicGameCustom::score;
                goto customCase1;
                break;
            case 'A':
                cout << ": SET VALUE TO = ";
                cin >> classicGameCustom::ammunition;
                classicGameCustom::tempAmmunition = classicGame::ammunition;
                goto customCase1;
                break;
            case 'R':
                cout << ": SET VALUE TO = ";
                cin >> classicGameCustom::rewardAmmunition;
                goto customCase1;
                break;
            case 'H':
                cout << ": SET VALUE TO = ";
                cin >> classicGameCustom::healthPoint;
                goto customCase1;
                break;
            case 'M':
                customCase1m:
                cout << "MAX: 20 NORMAL VALUE: 10\n";
                cout << "MOVEMENT RESET PER BACK BUTTON\n";
                cout << ": SET VALUE TO = ";
                cin >> classicGame::movement;
                if(classicGame::movement>20||classicGame::movement<0){
                    cout << "ERROR 04: TOO MANY ARGUMENTS GIVEN\n";
                    goto customCase1m;
                }
                goto customCase1;
                break;
            case 'X':
                classicGame::movement = 10;
                custom();
                break;
            }
            break;
        case '2':
            system("cls");
            cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > AMPLIFIER\n\n";
            cout << "AMPLIFIER: TYPE: INTEGER\n";
            cout << "AMPLIFIER = % MODULUS TO RANDOM RESULT INTEGER\n";
            cout << "UPDATE PER CLSVALUE INCREMENTS TO EXPECTED VALUE\n";
            cout << "NORMAL VALUE: 24 CURRENT VALUE: " << classicGameCustom::amplifier << endl;
            cout << "PRESS X TO GO BACK\n";
            cout << "PRESS A TO SET VALUE\n";
            switch(_getch()){
            case 'A':
                cout << ": SET VALUE TO = ";
                cin >> classicGameCustom::amplifier;
            case 'X':
                custom();
                break;
            }
            break;
        case '3':
            customCase3:
                system("cls");
            cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > RESULTS\n\n";
            cout << "RESULT TYPE: INTEGER\n";
            cout << "RESULT OF RAND() % AMPLIFIER\n";
            cout << "DISPLAY BLOCKS AT SPECIFIED VALUE\n";
            cout << "X - BACK\n";
            cout << "A - BLOCK RESULT 1 - " << classicGameResultCustom::resultBlock1_1 <<" " << classicGameResultCustom::resultBlock1_2 <<" "<<classicGameResultCustom::resultBlock1_3 <<" "<<classicGameResultCustom::resultBlock1_4 <<" "<<classicGameResultCustom::resultBlock1_5 <<" "<<classicGameResultCustom::resultBlock1_6 <<" "<<classicGameResultCustom::resultBlock1_7 << "\n";
            cout << "B - BLOCK RESULT 2 - " << classicGameResultCustom::resultBlock2_1 <<" " << classicGameResultCustom::resultBlock2_2 <<" "<<classicGameResultCustom::resultBlock2_3 <<" "<<classicGameResultCustom::resultBlock2_4 <<" "<<classicGameResultCustom::resultBlock2_5 <<" "<<classicGameResultCustom::resultBlock2_6 <<" "<<classicGameResultCustom::resultBlock2_7 << "\n";
            cout << "C - BLOCK RESULT 3 - " << classicGameResultCustom::resultBlock3_1 <<" " << classicGameResultCustom::resultBlock3_2 <<" "<<classicGameResultCustom::resultBlock3_3 <<" "<<classicGameResultCustom::resultBlock3_4 <<" "<<classicGameResultCustom::resultBlock3_5 <<" "<<classicGameResultCustom::resultBlock3_6 <<" "<<classicGameResultCustom::resultBlock3_7 << "\n";
            cout << "D - BLOCK RESULT 4 - " << classicGameResultCustom::resultBlock4_1 <<" " << classicGameResultCustom::resultBlock4_2 <<" "<<classicGameResultCustom::resultBlock4_3 <<" "<<classicGameResultCustom::resultBlock4_4 <<" "<<classicGameResultCustom::resultBlock4_5 <<" "<<classicGameResultCustom::resultBlock4_6 <<" "<<classicGameResultCustom::resultBlock4_7 << "\n";
            cout << "E - BLOCK RESULT 5 - " << classicGameResultCustom::resultBlock5_1 <<" " << classicGameResultCustom::resultBlock5_2 <<" "<<classicGameResultCustom::resultBlock5_3 <<" "<<classicGameResultCustom::resultBlock5_4 <<" "<<classicGameResultCustom::resultBlock5_5 <<" "<<classicGameResultCustom::resultBlock5_6 <<" "<<classicGameResultCustom::resultBlock5_7 << "\n";
            cout << "F - BLOCK RESULT 6 - " << classicGameResultCustom::resultBlock6_1 <<" " << classicGameResultCustom::resultBlock6_2 <<" "<<classicGameResultCustom::resultBlock6_3 <<" "<<classicGameResultCustom::resultBlock6_4 <<" "<<classicGameResultCustom::resultBlock6_5 <<" "<<classicGameResultCustom::resultBlock6_6 <<" "<<classicGameResultCustom::resultBlock6_7 << "\n";
            cout << "G - BLOCK RESULT 7 - " << classicGameResultCustom::resultBlock7_1 <<" " << classicGameResultCustom::resultBlock7_2 <<" "<<classicGameResultCustom::resultBlock7_3 <<" "<<classicGameResultCustom::resultBlock7_4 <<" "<<classicGameResultCustom::resultBlock7_5 <<" "<<classicGameResultCustom::resultBlock7_6 <<" "<<classicGameResultCustom::resultBlock7_7 << "\n";
            cout << "H - BLOCK RESULT 8 - " << classicGameResultCustom::resultBlock8_1 <<" " << classicGameResultCustom::resultBlock8_2 <<" "<<classicGameResultCustom::resultBlock8_3 <<" "<<classicGameResultCustom::resultBlock8_4 <<" "<<classicGameResultCustom::resultBlock8_5 <<" "<<classicGameResultCustom::resultBlock8_6 <<" "<<classicGameResultCustom::resultBlock8_7 << "\n";
            cout << "I - BLOCK RESULT 9 - " << classicGameResultCustom::resultBlock9_1 <<" " << classicGameResultCustom::resultBlock9_2 <<" "<<classicGameResultCustom::resultBlock9_3 <<" "<<classicGameResultCustom::resultBlock9_4 <<" "<<classicGameResultCustom::resultBlock9_5 <<" "<<classicGameResultCustom::resultBlock9_6 <<" "<<classicGameResultCustom::resultBlock9_7 << "\n";
            cout << "J - BLOCK RESULT 10 - " << classicGameResultCustom::resultBlock10_1 <<" " << classicGameResultCustom::resultBlock10_2 <<" "<<classicGameResultCustom::resultBlock10_3 <<" "<<classicGameResultCustom::resultBlock10_4 <<" "<<classicGameResultCustom::resultBlock10_5 <<" "<<classicGameResultCustom::resultBlock10_6 <<" "<<classicGameResultCustom::resultBlock10_7 << "\n";
            cout << "K - BLOCK RESULT 11 - " << classicGameResultCustom::resultBlock11_1 <<" " << classicGameResultCustom::resultBlock11_2 <<" "<<classicGameResultCustom::resultBlock11_3 <<" "<<classicGameResultCustom::resultBlock11_4 <<" "<<classicGameResultCustom::resultBlock11_5 <<" "<<classicGameResultCustom::resultBlock11_6 <<" "<<classicGameResultCustom::resultBlock11_7 << "\n";
            cout << "L - BLOCK RESULT 12 - " << classicGameResultCustom::resultBlock12_1 <<" " << classicGameResultCustom::resultBlock12_2 <<" "<<classicGameResultCustom::resultBlock12_3 <<" "<<classicGameResultCustom::resultBlock12_4 <<" "<<classicGameResultCustom::resultBlock12_5 <<" "<<classicGameResultCustom::resultBlock12_6 <<" "<<classicGameResultCustom::resultBlock12_7 << "\n";
            cout << "M - BLOCK RESULT 13\n";
            cout << "N - BLOCK RESULT 14\n";
            cout << "O - BLOCK RESULT 15\n";
            cout << "P - BLOCK RESULT 16\n";
            cout << "Q - BLOCK RESULT 17\n";
            cout << "R - BLOCK RESULT 18\n";
            cout << "S - BLOCK RESULT 19\n";
            cout << "T - BLOCK RESULT 20\n";
            switch(_getch()){
            case 'A':
                resultA:
                system("cls");
                cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > RESULTS > BLOCK RESULT 1\n\n";
                cout << "RESULT OF RAND() % AMPLIFIER\n";
                cout << "DISPLAY BLOCKS AT SPECIFIED VALUE\n";
                cout << "X - BACK\n";
                cout << "1 - VALUE 1 - " << classicGameResultCustom::resultBlock1_1 << endl;
                cout << "2 - VALUE 2 - " << classicGameResultCustom::resultBlock1_2 << endl;
                cout << "3 - VALUE 3 - " << classicGameResultCustom::resultBlock1_3 << endl;
                cout << "4 - VALUE 4 - " << classicGameResultCustom::resultBlock1_4 << endl;
                cout << "5 - VALUE 5 - " << classicGameResultCustom::resultBlock1_5 << endl;
                cout << "6 - VALUE 6 - " << classicGameResultCustom::resultBlock1_6 << endl;
                cout << "7 - VALUE 7 - " << classicGameResultCustom::resultBlock1_7 << endl;
                switch(_getch()){
                case '1':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock1_1;
                    goto resultA;
                    break;
                case '2':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock1_2;
                    goto resultA;
                    break;
                case '3':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock1_3;
                    goto resultA;
                    break;
                case '4':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock1_4;
                    goto resultA;
                    break;
                case '5':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock1_5;
                    goto resultA;
                    break;
                case '6':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock1_6;
                    goto resultA;
                    break;
                case '7':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock1_7;
                    goto resultA;
                    break;
                case 'X':
                    goto customCase3;
                    break;
                }
                break;
            case 'B':
                resultB:
                system("cls");
                cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > RESULTS > BLOCK RESULT 2\n\n";
                cout << "RESULT OF RAND() % AMPLIFIER\n";
                cout << "DISPLAY BLOCKS AT SPECIFIED VALUE\n";
                cout << "X - BACK\n";
                cout << "1 - VALUE 1 - " << classicGameResultCustom::resultBlock2_1 << endl;
                cout << "2 - VALUE 2 - " << classicGameResultCustom::resultBlock2_2 << endl;
                cout << "3 - VALUE 3 - " << classicGameResultCustom::resultBlock2_3 << endl;
                cout << "4 - VALUE 4 - " << classicGameResultCustom::resultBlock2_4 << endl;
                cout << "5 - VALUE 5 - " << classicGameResultCustom::resultBlock2_5 << endl;
                cout << "6 - VALUE 6 - " << classicGameResultCustom::resultBlock2_6 << endl;
                cout << "7 - VALUE 7 - " << classicGameResultCustom::resultBlock2_7 << endl;
                switch(_getch()){
                case '1':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock2_1;
                    goto resultB;
                    break;
                case '2':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock2_2;
                    goto resultB;
                    break;
                case '3':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock2_3;
                    goto resultB;
                    break;
                case '4':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock2_4;
                    goto resultB;
                    break;
                case '5':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock2_5;
                    goto resultB;
                    break;
                case '6':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock2_6;
                    goto resultB;
                    break;
                case '7':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock2_7;
                    goto resultB;
                    break;
                case 'X':
                    goto customCase3;
                    break;
                }
                break;
            case 'C':
                resultC:
                system("cls");
                cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > RESULTS > BLOCK RESULT 3\n\n";
                cout << "RESULT OF RAND() % AMPLIFIER\n";
                cout << "DISPLAY BLOCKS AT SPECIFIED VALUE\n";
                cout << "X - BACK\n";
                cout << "1 - VALUE 1 - " << classicGameResultCustom::resultBlock3_1 << endl;
                cout << "2 - VALUE 2 - " << classicGameResultCustom::resultBlock3_2 << endl;
                cout << "3 - VALUE 3 - " << classicGameResultCustom::resultBlock3_3 << endl;
                cout << "4 - VALUE 4 - " << classicGameResultCustom::resultBlock3_4 << endl;
                cout << "5 - VALUE 5 - " << classicGameResultCustom::resultBlock3_5 << endl;
                cout << "6 - VALUE 6 - " << classicGameResultCustom::resultBlock3_6 << endl;
                cout << "7 - VALUE 7 - " << classicGameResultCustom::resultBlock3_7 << endl;
                switch(_getch()){
                case '1':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock3_1;
                    goto resultC;
                    break;
                case '2':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock3_2;
                    goto resultC;
                    break;
                case '3':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock3_3;
                    goto resultC;
                    break;
                case '4':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock3_4;
                    goto resultC;
                    break;
                case '5':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock3_5;
                    goto resultC;
                    break;
                case '6':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock3_6;
                    goto resultC;
                    break;
                case '7':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock3_7;
                    goto resultC;
                    break;
                case 'X':
                    goto customCase3;
                    break;
                }
                break;
            case 'D':
                resultD:
                system("cls");
                cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > RESULTS > BLOCK RESULT 4\n\n";
                cout << "RESULT OF RAND() % AMPLIFIER\n";
                cout << "DISPLAY BLOCKS AT SPECIFIED VALUE\n";
                cout << "X - BACK\n";
                cout << "1 - VALUE 1 - " << classicGameResultCustom::resultBlock4_1 << endl;
                cout << "2 - VALUE 2 - " << classicGameResultCustom::resultBlock4_2 << endl;
                cout << "3 - VALUE 3 - " << classicGameResultCustom::resultBlock4_3 << endl;
                cout << "4 - VALUE 4 - " << classicGameResultCustom::resultBlock4_4 << endl;
                cout << "5 - VALUE 5 - " << classicGameResultCustom::resultBlock4_5 << endl;
                cout << "6 - VALUE 6 - " << classicGameResultCustom::resultBlock4_6 << endl;
                cout << "7 - VALUE 7 - " << classicGameResultCustom::resultBlock4_7 << endl;
                switch(_getch()){
                case '1':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock4_1;
                    goto resultD;
                    break;
                case '2':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock4_2;
                    goto resultD;
                    break;
                case '3':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock4_3;
                    goto resultD;
                    break;
                case '4':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock4_4;
                    goto resultD;
                    break;
                case '5':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock4_5;
                    goto resultD;
                    break;
                case '6':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock4_6;
                    goto resultD;
                    break;
                case '7':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock4_7;
                    goto resultD;
                    break;
                case 'X':
                    goto customCase3;
                    break;
                }
                break;
            case 'E':
                resultE:
                system("cls");
                cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > RESULTS > BLOCK RESULT 5\n\n";
                cout << "RESULT OF RAND() % AMPLIFIER\n";
                cout << "DISPLAY BLOCKS AT SPECIFIED VALUE\n";
                cout << "X - BACK\n";
                cout << "1 - VALUE 1 - " << classicGameResultCustom::resultBlock5_1 << endl;
                cout << "2 - VALUE 2 - " << classicGameResultCustom::resultBlock5_2 << endl;
                cout << "3 - VALUE 3 - " << classicGameResultCustom::resultBlock5_3 << endl;
                cout << "4 - VALUE 4 - " << classicGameResultCustom::resultBlock5_4 << endl;
                cout << "5 - VALUE 5 - " << classicGameResultCustom::resultBlock5_5 << endl;
                cout << "6 - VALUE 6 - " << classicGameResultCustom::resultBlock5_6 << endl;
                cout << "7 - VALUE 7 - " << classicGameResultCustom::resultBlock5_7 << endl;
                switch(_getch()){
                case '1':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock5_1;
                    goto resultE;
                    break;
                case '2':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock5_2;
                    goto resultE;
                    break;
                case '3':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock5_3;
                    goto resultE;
                    break;
                case '4':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock5_4;
                    goto resultE;
                    break;
                case '5':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock5_5;
                    goto resultE;
                    break;
                case '6':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock5_6;
                    goto resultE;
                    break;
                case '7':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock5_7;
                    goto resultE;
                    break;
                case 'X':
                    goto customCase3;
                    break;
                }
                break;
            case 'F':
                resultF:
                system("cls");
                cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > RESULTS > BLOCK RESULT 6\n\n";
                cout << "RESULT OF RAND() % AMPLIFIER\n";
                cout << "DISPLAY BLOCKS AT SPECIFIED VALUE\n";
                cout << "X - BACK\n";
                cout << "1 - VALUE 1 - " << classicGameResultCustom::resultBlock6_1 << endl;
                cout << "2 - VALUE 2 - " << classicGameResultCustom::resultBlock6_2 << endl;
                cout << "3 - VALUE 3 - " << classicGameResultCustom::resultBlock6_3 << endl;
                cout << "4 - VALUE 4 - " << classicGameResultCustom::resultBlock6_4 << endl;
                cout << "5 - VALUE 5 - " << classicGameResultCustom::resultBlock6_5 << endl;
                cout << "6 - VALUE 6 - " << classicGameResultCustom::resultBlock6_6 << endl;
                cout << "7 - VALUE 7 - " << classicGameResultCustom::resultBlock6_7 << endl;
                switch(_getch()){
                case '1':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock6_1;
                    goto resultF;
                    break;
                case '2':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock6_2;
                    goto resultF;
                    break;
                case '3':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock6_3;
                    goto resultF;
                    break;
                case '4':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock6_4;
                    goto resultF;
                    break;
                case '5':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock6_5;
                    goto resultF;
                    break;
                case '6':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock6_6;
                    goto resultF;
                    break;
                case '7':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock6_7;
                    goto resultF;
                    break;
                case 'X':
                    goto customCase3;
                    break;
                }
                break;
            case 'G':
                resultG:
                system("cls");
                cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > RESULTS > BLOCK RESULT 7\n\n";
                cout << "RESULT OF RAND() % AMPLIFIER\n";
                cout << "DISPLAY BLOCKS AT SPECIFIED VALUE\n";
                cout << "X - BACK\n";
                cout << "1 - VALUE 1 - " << classicGameResultCustom::resultBlock7_1 << endl;
                cout << "2 - VALUE 2 - " << classicGameResultCustom::resultBlock7_2 << endl;
                cout << "3 - VALUE 3 - " << classicGameResultCustom::resultBlock7_3 << endl;
                cout << "4 - VALUE 4 - " << classicGameResultCustom::resultBlock7_4 << endl;
                cout << "5 - VALUE 5 - " << classicGameResultCustom::resultBlock7_5 << endl;
                cout << "6 - VALUE 6 - " << classicGameResultCustom::resultBlock7_6 << endl;
                cout << "7 - VALUE 7 - " << classicGameResultCustom::resultBlock7_7 << endl;
                switch(_getch()){
                case '1':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock7_1;
                    goto resultG;
                    break;
                case '2':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock7_2;
                    goto resultG;
                    break;
                case '3':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock7_3;
                    goto resultG;
                    break;
                case '4':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock7_4;
                    goto resultG;
                    break;
                case '5':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock7_5;
                    goto resultG;
                    break;
                case '6':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock7_6;
                    goto resultG;
                    break;
                case '7':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock7_7;
                    goto resultG;
                    break;
                case 'X':
                    goto customCase3;
                    break;
                }
                break;
            case 'H':
                resultH:
                system("cls");
                cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > RESULTS > BLOCK RESULT 8\n\n";
                cout << "RESULT OF RAND() % AMPLIFIER\n";
                cout << "DISPLAY BLOCKS AT SPECIFIED VALUE\n";
                cout << "X - BACK\n";
                cout << "1 - VALUE 1 - " << classicGameResultCustom::resultBlock8_1 << endl;
                cout << "2 - VALUE 2 - " << classicGameResultCustom::resultBlock8_2 << endl;
                cout << "3 - VALUE 3 - " << classicGameResultCustom::resultBlock8_3 << endl;
                cout << "4 - VALUE 4 - " << classicGameResultCustom::resultBlock8_4 << endl;
                cout << "5 - VALUE 5 - " << classicGameResultCustom::resultBlock8_5 << endl;
                cout << "6 - VALUE 6 - " << classicGameResultCustom::resultBlock8_6 << endl;
                cout << "7 - VALUE 7 - " << classicGameResultCustom::resultBlock8_7 << endl;
                switch(_getch()){
                case '1':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock8_1;
                    goto resultH;
                    break;
                case '2':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock8_2;
                    goto resultH;
                    break;
                case '3':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock8_3;
                    goto resultH;
                    break;
                case '4':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock8_4;
                    goto resultH;
                    break;
                case '5':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock8_5;
                    goto resultH;
                    break;
                case '6':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock8_6;
                    goto resultH;
                    break;
                case '7':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock8_7;
                    goto resultH;
                    break;
                case 'X':
                    goto customCase3;
                    break;
                }
                break;
            case 'I':
                resultI:
                system("cls");
                cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > RESULTS > BLOCK RESULT 9\n\n";
                cout << "RESULT OF RAND() % AMPLIFIER\n";
                cout << "DISPLAY BLOCKS AT SPECIFIED VALUE\n";
                cout << "X - BACK\n";
                cout << "1 - VALUE 1 - " << classicGameResultCustom::resultBlock9_1 << endl;
                cout << "2 - VALUE 2 - " << classicGameResultCustom::resultBlock9_2 << endl;
                cout << "3 - VALUE 3 - " << classicGameResultCustom::resultBlock9_3 << endl;
                cout << "4 - VALUE 4 - " << classicGameResultCustom::resultBlock9_4 << endl;
                cout << "5 - VALUE 5 - " << classicGameResultCustom::resultBlock9_5 << endl;
                cout << "6 - VALUE 6 - " << classicGameResultCustom::resultBlock9_6 << endl;
                cout << "7 - VALUE 7 - " << classicGameResultCustom::resultBlock9_7 << endl;
                switch(_getch()){
                case '1':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock9_1;
                    goto resultI;
                    break;
                case '2':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock9_2;
                    goto resultI;
                    break;
                case '3':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock9_3;
                    goto resultI;
                    break;
                case '4':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock9_4;
                    goto resultI;
                    break;
                case '5':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock9_5;
                    goto resultI;
                    break;
                case '6':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock9_6;
                    goto resultI;
                    break;
                case '7':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock9_7;
                    goto resultI;
                    break;
                case 'X':
                    goto customCase3;
                    break;
                }
                break;
            case 'J':
                resultJ:
                system("cls");
                cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > RESULTS > BLOCK RESULT 10\n\n";
                cout << "RESULT OF RAND() % AMPLIFIER\n";
                cout << "DISPLAY BLOCKS AT SPECIFIED VALUE\n";
                cout << "X - BACK\n";
                cout << "1 - VALUE 1 - " << classicGameResultCustom::resultBlock10_1 << endl;
                cout << "2 - VALUE 2 - " << classicGameResultCustom::resultBlock10_2 << endl;
                cout << "3 - VALUE 3 - " << classicGameResultCustom::resultBlock10_3 << endl;
                cout << "4 - VALUE 4 - " << classicGameResultCustom::resultBlock10_4 << endl;
                cout << "5 - VALUE 5 - " << classicGameResultCustom::resultBlock10_5 << endl;
                cout << "6 - VALUE 6 - " << classicGameResultCustom::resultBlock10_6 << endl;
                cout << "7 - VALUE 7 - " << classicGameResultCustom::resultBlock10_7 << endl;
                switch(_getch()){
                case '1':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock10_1;
                    goto resultJ;
                    break;
                case '2':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock10_2;
                    goto resultJ;
                    break;
                case '3':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock10_3;
                    goto resultJ;
                    break;
                case '4':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock10_4;
                    goto resultJ;
                    break;
                case '5':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock10_5;
                    goto resultJ;
                    break;
                case '6':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock10_6;
                    goto resultJ;
                    break;
                case '7':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock10_7;
                    goto resultJ;
                    break;
                case 'X':
                    goto customCase3;
                    break;
                }
                break;
            case 'K':
                resultK:
                system("cls");
                cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > RESULTS > BLOCK RESULT 11\n\n";
                cout << "RESULT OF RAND() % AMPLIFIER\n";
                cout << "DISPLAY BLOCKS AT SPECIFIED VALUE\n";
                cout << "X - BACK\n";
                cout << "1 - VALUE 1 - " << classicGameResultCustom::resultBlock11_1 << endl;
                cout << "2 - VALUE 2 - " << classicGameResultCustom::resultBlock11_2 << endl;
                cout << "3 - VALUE 3 - " << classicGameResultCustom::resultBlock11_3 << endl;
                cout << "4 - VALUE 4 - " << classicGameResultCustom::resultBlock11_4 << endl;
                cout << "5 - VALUE 5 - " << classicGameResultCustom::resultBlock11_5 << endl;
                cout << "6 - VALUE 6 - " << classicGameResultCustom::resultBlock11_6 << endl;
                cout << "7 - VALUE 7 - " << classicGameResultCustom::resultBlock11_7 << endl;
                switch(_getch()){
                case '1':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock11_1;
                    goto resultK;
                    break;
                case '2':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock11_2;
                    goto resultK;
                    break;
                case '3':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock11_3;
                    goto resultK;
                    break;
                case '4':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock11_4;
                    goto resultK;
                    break;
                case '5':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock11_5;
                    goto resultK;
                    break;
                case '6':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock11_6;
                    goto resultK;
                    break;
                case '7':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock11_7;
                    goto resultK;
                    break;
                case 'X':
                    goto customCase3;
                    break;
                }
                break;
            case 'L':
                resultL:
                system("cls");
                cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > RESULTS > BLOCK RESULT 12\n\n";
                cout << "RESULT OF RAND() % AMPLIFIER\n";
                cout << "DISPLAY BLOCKS AT SPECIFIED VALUE\n";
                cout << "X - BACK\n";
                cout << "1 - VALUE 1 - " << classicGameResultCustom::resultBlock12_1 << endl;
                cout << "2 - VALUE 2 - " << classicGameResultCustom::resultBlock12_2 << endl;
                cout << "3 - VALUE 3 - " << classicGameResultCustom::resultBlock12_3 << endl;
                cout << "4 - VALUE 4 - " << classicGameResultCustom::resultBlock12_4 << endl;
                cout << "5 - VALUE 5 - " << classicGameResultCustom::resultBlock12_5 << endl;
                cout << "6 - VALUE 6 - " << classicGameResultCustom::resultBlock12_6 << endl;
                cout << "7 - VALUE 7 - " << classicGameResultCustom::resultBlock12_7 << endl;
                switch(_getch()){
                case '1':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock12_1;
                    goto resultL;
                    break;
                case '2':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock12_2;
                    goto resultL;
                    break;
                case '3':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock12_3;
                    goto resultL;
                    break;
                case '4':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock12_4;
                    goto resultL;
                    break;
                case '5':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock12_5;
                    goto resultL;
                    break;
                case '6':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock12_6;
                    goto resultL;
                    break;
                case '7':
                    cout << ": SET VALUE TO = ";
                    cin >> classicGameResultCustom::resultBlock12_7;
                    goto resultL;
                    break;
                case 'X':
                    goto customCase3;
                    break;
                }
                break;
        case 'X':
                custom();
                break;
            }
            break;
        case '4':
            system("cls");
            cout << "GAMEMODE 3: CLASSIC MODE > CUSTOM > CLSVALUE\n\n";
            cout << "CLSVALUE = NORMAL: 25 TYPE: INTEGER\n";
            cout << "PER INCREMENT TO VALUE " << classicGameCustom::clearScreen << endl;
            cout << "PRESS X TO GO BACK\n";
            cout << "PRESS C TO SET VALUE\n";
            switch(_getch()){
            case 'C':
                cout << ": SET VALUE TO = ";
                cin >> classicGameCustom::clearScreen;
            case 'X':
                custom();
                break;
            }
            break;
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
        highscore03 = classicGame::highscore3;
        tankGameStructureClassicGameObject.gamemode3Stats(death03,shootingTimes03, moveAtimes03, moveDtimes03, moveStimes03, recentScore03, highscore03);
    }
    if(classicGame::difficulty!=5){
        if(classicGame::ammunition<0){
            restart();
        }
        if(classicGame::healthPoint==0){
            gameover();
        }
    }else{
        if(classicGameCustom::ammunition<0){
            restart();
        }
        if(classicGameCustom::healthPoint==0){
            gameover();
        }
    }

    if(classicGame::score<=-500){
        gameover();
    }

    if(classicGame::movement==1&&classicGameBlock::block1=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block1 = ' ';
        if(classicGame::difficulty==1){
            classicGame::ammunition += 2;
            classicGame::score += 50;
            goto endBlocks1;
        }
        if(classicGame::difficulty==2){
            classicGame::ammunition += 2;
            classicGame::score += 25;
            goto endBlocks1_n;
        }
        if(classicGame::difficulty==3){
            classicGame::ammunition += 1;
            classicGame::score += 10;
            goto endBlocks1_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks1_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks1_c;
        }

    }
    if(classicGame::movement==2&&classicGameBlock::block2=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block2 = ' ';
        if(classicGame::difficulty==1){
            classicGame::ammunition += 2;
            classicGame::score += 50;
            goto endBlocks2;
        }
        if(classicGame::difficulty==2){
            classicGame::ammunition += 2;
            classicGame::score += 25;
            goto endBlocks2_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks2_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks2_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks2_c;
        }
    }
    if(classicGame::movement==3&&classicGameBlock::block3=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block3 = ' ';
        if(classicGame::difficulty==1){
            classicGame::ammunition += 2;
            classicGame::score += 50;
            goto endBlocks3;
        }
        if(classicGame::difficulty==2){
            classicGame::ammunition += 2;
            classicGame::score += 25;
            goto endBlocks3_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks3_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks3_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks3_c;
        }
    }
    if(classicGame::movement==4&&classicGameBlock::block4=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block4 = ' ';
        if(classicGame::difficulty==1){
            classicGame::ammunition += 2;
            classicGame::score += 50;
            goto endBlocks4;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks4_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks4_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks4_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks4_c;
        }
    }
    if(classicGame::movement==5&&classicGameBlock::block5=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block5 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            classicGame::ammunition += 2;
            goto endBlocks5;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks5_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks5_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks5_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks5_c;
        }
    }
    if(classicGame::movement==6&&classicGameBlock::block6=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block6 = ' ';
        if(classicGame::difficulty==1){
            classicGame::ammunition += 2;
            classicGame::score += 50;
            goto endBlocks6;
        }
        if(classicGame::difficulty==2){
            classicGame::ammunition += 2;
            classicGame::score += 25;
            goto endBlocks6_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks6_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks6_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks6_c;
        }
    }
    if(classicGame::movement==7&&classicGameBlock::block7=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block7 = ' ';
        if(classicGame::difficulty==1){
            classicGame::ammunition += 2;
            classicGame::score += 50;
            goto endBlocks7;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks7_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks7_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks7_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks7_c;
        }
    }
    if(classicGame::movement==8&&classicGameBlock::block8=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block8 = ' ';
        if(classicGame::difficulty==1){
            classicGame::ammunition += 2;
            classicGame::score += 50;
            goto endBlocks8;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks8_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks8_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks8_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks8_c;
        }
    }
    if(classicGame::movement==9&&classicGameBlock::block9=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block9 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            classicGame::ammunition += 2;
            goto endBlocks9;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks9_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks9_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks9_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks9_c;
        }
    }
    if(classicGame::movement==10&&classicGameBlock::block10=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block10 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            classicGame::ammunition += 2;
            goto endBlocks10;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks10_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks10_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks10_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks10_c;
        }
    }
    if(classicGame::movement==11&&classicGameBlock::block11=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block11 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            classicGame::ammunition += 2;
            goto endBlocks11;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks11_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks11_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks11_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks11_c;
        }
    }
    if(classicGame::movement==12&&classicGameBlock::block12=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block12 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            classicGame::ammunition += 2;
            goto endBlocks12;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks12_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks12_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks12_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks12_c;
        }
    }
    if(classicGame::movement==13&&classicGameBlock::block13=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block13 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            classicGame::ammunition += 2;
            goto endBlocks13;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks13_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks13_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks13_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks13_c;
        }
    }
    if(classicGame::movement==14&&classicGameBlock::block14=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block14 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            classicGame::ammunition += 2;
            goto endBlocks14;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks14_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks14_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks14_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks14_c;
        }
    }
    if(classicGame::movement==15&&classicGameBlock::block15=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block15 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            classicGame::ammunition += 2;
            goto endBlocks15;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks15_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks15_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks15_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks15_c;
        }
    }
    if(classicGame::movement==16&&classicGameBlock::block16=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block16 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            classicGame::ammunition += 2;
            goto endBlocks16;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks16_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks16_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks16_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks16_c;
        }
    }
    if(classicGame::movement==17&&classicGameBlock::block17=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block17 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            classicGame::ammunition += 2;
            goto endBlocks17;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks17_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks17_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks17_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks17_c;
        }
    }
    if(classicGame::movement==18&&classicGameBlock::block18=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block18 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            classicGame::ammunition += 2;
            goto endBlocks18;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks18_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks18_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks18_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks18_c;
        }
    }
    if(classicGame::movement==19&&classicGameBlock::block19=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block19 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            classicGame::ammunition += 2;
            goto endBlocks19;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks19_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks19_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks19_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks19_c;
        }
    }
    if(classicGame::movement==20&&classicGameBlock::block20=='I'&&classicGame::shootPlayerPtr=='.'){
        classicGameBlock::block20 = ' ';
        if(classicGame::difficulty==1){
            classicGame::score += 50;
            classicGame::ammunition += 2;
            goto endBlocks20;
        }
        if(classicGame::difficulty==2){
            classicGame::score += 25;
            classicGame::ammunition += 2;
            goto endBlocks20_n;
        }
        if(classicGame::difficulty==3){
            classicGame::score += 10;
            classicGame::ammunition += 1;
            goto endBlocks20_h;
        }
        if(classicGame::difficulty==4){
            classicGame::score += 5;
            goto endBlocks20_v;
        }
        if(classicGame::difficulty==5){
            classicGame::score += classicGameCustom::score;
            classicGameCustom::ammunition += classicGameCustom::rewardAmmunition;
            goto endBlocks20_c;
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
    if((classicGameCustom::result==classicGameResultCustom::resultBlock1_1)||(classicGameCustom::result==classicGameResultCustom::resultBlock1_2)||(classicGameCustom::result==classicGameResultCustom::resultBlock1_3)||(classicGameCustom::result==classicGameResultCustom::resultBlock1_4)||(classicGameCustom::result==classicGameResultCustom::resultBlock1_5)||(classicGameCustom::result==classicGameResultCustom::resultBlock1_6)||(classicGameCustom::result==classicGameResultCustom::resultBlock1_7)){
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
    cout<<"HEALTH: ";
    if(classicGame::difficulty!=5){
        cout <<classicGame::healthPoint;
    }else{
        cout << classicGameCustom::healthPoint;
    }
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout<<"\n";
    cout.width(classicGame::movement);
    cout<<classicGame::shootPlayerPtr;
    cout.width(classicGameUI::cguiAxis+5);
    cout<<"AMMUNITION: ";
    if(classicGame::difficulty!=5){
        cout <<classicGame::ammunition;
    }else{
        cout <<classicGameCustom::ammunition;
    }
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
            if(classicGame::difficulty!=5){
                classicGame::ammunition--;
                shootingTimes03++;
                tankGameStructureClassicGameObject.gamemode3Stats(death03,shootingTimes03, moveAtimes03, moveDtimes03, moveStimes03, recentScore03, highscore03);
            }else{
                classicGameCustom::ammunition--;
                shootingTimes03++;
                tankGameStructureClassicGameObject.gamemode3Stats(death03,shootingTimes03, moveAtimes03, moveDtimes03, moveStimes03, recentScore03, highscore03);
            }

            break;
        case 'A':
            if(classicGame::scopeInt!=1){
              classicGame::movement--;
              classicGame::score--;
              moveAtimes03++;
              tankGameStructureClassicGameObject.gamemode3Stats(death03,shootingTimes03, moveAtimes03, moveDtimes03, moveStimes03, recentScore03, highscore03);
            }
            while(classicGame::movement<1){
                classicGame::movement=1;
            }
            break;
        case 'D':
            if(classicGame::scopeInt!=1){
               classicGame::movement++;
               classicGame::score--;
               moveDtimes03++;
               tankGameStructureClassicGameObject.gamemode3Stats(death03,shootingTimes03, moveAtimes03, moveDtimes03, moveStimes03, recentScore03, highscore03);
            }
            while(classicGame::movement>20){
                classicGame::movement=20;
            }
            break;
        case 'S':
            classicGame::scopeInt = 1;
            moveStimes03++;
            tankGameStructureClassicGameObject.gamemode3Stats(death03,shootingTimes03, moveAtimes03, moveDtimes03, moveStimes03, recentScore03, highscore03);
            break;
        case 'Q':
            cout << "BUY HEALTH: -300 SCORES + 1 HEALTH E - BUY Q - CANCEL\n";
            switch(_getch()){
            case 'E':
                classicGame::score -= 500;
                if(classicGame::difficulty!=5){
                    classicGame::healthPoint++
                    ;
                }else{
                    classicGameCustom::healthPoint++; //@note On 0.4.0, requires custom healthPoint and price
                }
                break;
            case 'Q':
                mainGame();
                break;
            }
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
            if(classicGame::difficulty==5){
                classicGameCustom::result = rand() % classicGameCustom::amplifier;
            }

            if(classicGame::difficulty!=5){
                classicGame::ammunition -= 5;
                classicGame::score -= 50;
            }else{
                classicGameCustom::ammunition -= 5;
                classicGameCustom::score -= 50;
            }

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
    death03++;
    tankGameStructureClassicGameObject.gamemode3Stats(death03,shootingTimes03, moveAtimes03, moveDtimes03, moveStimes03, recentScore03, highscore03);
    classicGame::recentScore3 = classicGame::highscore3;
    recentScore03 = classicGame::recentScore3;
    tankGameStructureClassicGameObject.gamemode3Stats(death03,shootingTimes03, moveAtimes03, moveDtimes03, moveStimes03, recentScore03, highscore03);
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
        if(classicGame::difficulty!=5){
            mainGame();
        }else{
            custom();
        }
        break;
    }
    gameover();
}

void classicMode::restart(){
    system("cls");
    cout<<"\tYOU FAILED THE GAME\n";
    death03++;
    tankGameStructureClassicGameObject.gamemode3Stats(death03,shootingTimes03, moveAtimes03, moveDtimes03, moveStimes03, recentScore03, highscore03);
    Beep(500,500);
    if(classicGame::difficulty!=5){
        classicGame::healthPoint--;
        classicGame::ammunition = 50;
    }else{
        classicGameCustom::healthPoint--;
        classicGameCustom::ammunition;
    }
    classicGame::movement = 10;

    classicGameCustom::ammunition = classicGameCustom::tempAmmunition;
    this_thread::sleep_for(chrono::seconds(1));
    mainGame();
}
