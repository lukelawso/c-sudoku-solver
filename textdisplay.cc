#include <iostream>

#include "textdisplay.h"

void TextDisplay::update(Board &b) {
    for (int i = 0; i < (int)b.board.size(); i++) {
        if (i % 3 == 0) std::cout << "-----------" << std::endl;        
        for (int j = 0; j < (int)b.board[i].size(); j++) {
            if (j % 3 == 0) std::cout << "|";
            std::cout << b.board[i][j];
        }
        std::cout << std::endl;
    }
}

