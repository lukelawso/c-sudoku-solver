#include <iostream>
#include <fstream>

#include "board.h"

int main(int argc, char* argv[]) {
    
    for (int i = 0; i < argc; i++) {
        std::string arg = argv[i];  
    }

    std::string cmd;
    Board *b;
    while (std::cin >> cmd) {
        if (cmd == "new") {
            delete b;
            std::string file;
            std::cin >> file;
            if (file == "random") b = new Board{};
            else {
                std::fstream fs{file};
                if (fs.is_open()) {
                    b = new Board{file};
                    fs.close();
                } else {
                    std::cerr << "File does not exists" << std::endl;
                }
            }
            b->update();
        }
    }
    delete b;
}