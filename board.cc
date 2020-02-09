
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <string>

#include "board.h"

void Board::generatePuzzle() {

}

void Board::generatePuzzle(std::string file) {
    std::fstream fs{file};
    if (fs.is_open()) {
        std::string row;
        while (fs >> row) {
            board.emplace_back(row);
        }
    }
}

Board::Board(std::string file, bool graphicsDisplay) {
    for (int i = 0; i < 9; i++) {
        std::vector<int> row; 
        for (int j = 0; j < 9; j++) {
            row.emplace_back(0);
        }
        board.emplace_back(row);
    }
    if (file != "") generatePuzzle(file);
    else generatePuzzle();

    if (!graphicsDisplay) graphics = new TextDisplay{};
}

Board::~Board() {
    delete graphics;
}

int Board::getNum(int x, int y) {
    return board[x][y];
}

void Board::place(int x, int y, int num) {

}

void Board::update() {
    graphics->update(*this);
}
    
