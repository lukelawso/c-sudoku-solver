
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
        int r;
        while (std::getline(std::cin, row)) {            
            for (int i = 0; i < (int)row.length(); i++) {
                board[r][i] = row[i] - '0';
            }            
            r++;
        }
    }
}

Board::Board(std::string file, bool graphicsDisplay) {
    for (int i = 0; i < 9; i++) {
        std::vector<int> row(9, 0);
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
    
