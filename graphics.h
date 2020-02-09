#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "board.h"

class Board;

class Graphics {
    public:
    virtual ~Graphics();
    virtual void update(Board &board) = 0;
};

#endif