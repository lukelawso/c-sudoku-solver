#ifndef TEXTDISPLAY_H
#define TEXTDISPLAY_H

#include "graphics.h"
#include "board.h"

class Board;

class TextDisplay : public Graphics {
    void update(Board &board) override;
};

#endif