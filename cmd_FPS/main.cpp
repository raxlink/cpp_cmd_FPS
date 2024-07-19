#include <iostream>

using namespace std;

#include <windows.h>

int nScreenWidth = 120;
int nScreenHeight = 40;

float fPlayerX = 0.0f;
float fPlayerY = 0.0f;
float fPlayerA = 0.0f;

int nMapHeight = 16;
int nMapWidth = 16;


int main()
{
    // Create Screen Buffer
    wchar_t *screen = new wchar_t[nScreenHeight * nScreenWidth];
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE,0,NULL, CONSOLE_TEXTMODE_BUFFER,NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwByteWritten = 0;

    wstring map;
    map += L"################";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"#..............#";
    map += L"################";
    // Game Loop
    while(1)
    {
        screen[nScreenHeight*nScreenWidth - 1] = '\0';
        WriteConsoleOutputCharacterW(hConsole,screen,nScreenHeight * nScreenWidth,{ 0,0 }, &dwByteWritten);
    }

    return 0;
}
