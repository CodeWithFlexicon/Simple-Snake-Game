#ifndef Snake_H
#define Snake_H

struct Snake {
    int x, y;
};

struct Fruit {
    int x, y;
};

void Setup();
void Draw();
void Input();
void Logic();

#endif