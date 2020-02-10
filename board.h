#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <string>

#include "textdisplay.h"

class Graphics;

class Board {
    std::vector<std::vector<int>> board;
    Graphics *graphics;

    void generatePuzzle();
    void generatePuzzle(std::string file);

    public:
    Board(std::string file = "", bool graphicsDisplay = false);
    ~Board();
    int getNum(int x, int y);
    void place(int x, int y, int num);
    void update();
    

    friend class TextDisplay;
};
#endif