# include <Windows.h>
# include <tchar.h>

LRESULT CALLBACK WindowProc(HWND, UINT, WPARAM, LPARAM);

INT WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpszCmdLine, int nCmdShow)
{

    MessageBox(
        0,
        TEXT("My name is Zubenko Mikhail Petrovich"),
        TEXT("Resume - 1 window"),
        MB_OK),
        (HMENU)1;

    MessageBox(
        0,
        TEXT("I am a thief in law"),
        TEXT("Resume - 2 window"),
        MB_OK),
        (HMENU)2;

    MessageBox(
        0,
        TEXT("с 2005году работаю"),
        TEXT("Resume - 3 window, average number of characters per page"),
        MB_OK | MB_ICONINFORMATION),
        (HMENU)3;
}