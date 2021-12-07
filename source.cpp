#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "Snake.h"
using namespace std;

extern bool gameOver;

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        //Sleep(10); //slows game a bit
    }
    return 0;
}