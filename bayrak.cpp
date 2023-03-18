#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y) {
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    const int width = 80;
    const int height = 40;
    int x = 1;
    int y = height / 2;
    int speed = 2;
    bool dir = true;

    while (true) {
        system("cls");

        // Bayrak direği
        for (int i = 0; i < height; i++) {
            gotoxy(x, i);
            cout << "|";
        }

        // Bayrak
        for (int i = 0; i < 9; i++) {
            gotoxy(x + 1, y - i);
            cout << "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *";
        }

        // Bayrak dalgalanması
        if (dir) {
            y -= speed;
            if (y < 10) {
                dir = false;
            }
        } else {
            y += speed;
            if (y > height / 2) {
                dir = true;
            }
        }

        Sleep(50);  // Bekleme süresi
    }

    return 0;
}
