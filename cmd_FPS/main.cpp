#include <iostream>

using namespace std;

#include <windows.h>

int nScreenWidth = 120;
int nScreenHeight = 40;


int main()
{
    // Create Screen Buffer
    wchar_t *screen = new wchar_t[nScreenHeight * nScreenWidth];
    HANDLE hConsole = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE,0,NULL, CONSOLE_TEXTMODE_BUFFER,NULL);
    SetConsoleActiveScreenBuffer(hConsole);
    DWORD dwByteWritten = 0;
    return 0;
}
