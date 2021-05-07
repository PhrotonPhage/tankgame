#include <iostream>
#include "tankgamemain.h"
#include <windows.h>
#include <fstream>
#include <string>
using namespace std;

// UNUSED CODE
// UNUSED CODE
// UNUSED CODE
// UNUSED CODE
// UNUSED CODE
// UNUSED CODE
// UNUSED CODE
// UNUSED CODE
// UNUSED CODE
// UNUSED CODE
// UNUSED CODE


    LRESULT CALLBACK WindowProcedure(HWND,UINT,WPARAM,LPARAM);
int WINAPI WinMain(HINSTANCE hInst , HINSTANCE hPrevInst, LPSTR args, int ncmdshow){
    WNDCLASSW wc = {0};

    wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
    wc.hCursor = LoadCursor(NULL,IDC_ARROW);
    wc.hInstance = hInst;
    wc.lpszClassName = L"myWindowClass";
    wc.lpfnWndProc = WindowProcedure;

    if(!RegisterClassW(&wc))
        return -1;

        CreateWindowW(L"myWindowClass",L"Window",WS_OVERLAPPEDWINDOW | WS_VISIBLE,100,100,500,500,
                      NULL,NULL,NULL,NULL);
    MSG msg = {0};
    while(GetMessage(&msg,NULL,NULL,NULL)){
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}

LRESULT CALLBACK WindowProcedure(HWND hWnd,UINT msg,WPARAM wp,LPARAM lp){
switch(msg){
case WM_DESTROY:
    PostQuitMessage(0);
    break;
default:
    return DefWindowProcW(hWnd,msg,wp,lp);
}
}

const WORD color[] = {
        0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F
    };

    HANDLE hstdinMainClass  = GetStdHandle( STD_INPUT_HANDLE  );
	HANDLE hstdoutMainClass = GetStdHandle( STD_OUTPUT_HANDLE );
	WORD   indexMainClass   = 0;

    CONSOLE_SCREEN_BUFFER_INFO csbiMainClass;

int main()
{
    GetConsoleScreenBufferInfo( hstdoutMainClass, &csbiMainClass );
    SetConsoleTextAttribute(hstdoutMainClass, 0x0F);
    //MessageBox(NULL,"Message Box","",MB_OK);
    tankgamemain tankgamemainObject;
    tankgamemainObject.menuInfo();
    ifstream file;
    ofstream("config.txt");
    file.open("config.txt");
    if(!file.is_open()){
        cout << "Error while opening file" << endl;
        }else{
            file.trunc;
            file.close();
            cout << "File successfully opened" << endl;
        }
    return 0;
}
