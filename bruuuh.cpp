#include <windows.h>

int main(){
    HDC desk;
    int sw, sh;

    while(1){
        desk = GetDC(0);
        sw = GetSystemMetrics(0);
        sh = GetSystemMetrics(1);
        StretchBlt(desk, 0, -20, sw, sh+40, desk, 0, 0, sw, sh, SRCCOPY);
        ReleaseDC(0, desk);
        Sleep(4);
    }
}// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.