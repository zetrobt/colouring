#ifndef COLOURING_H
#define COLOURING_H

#include <cstdio>
#include <string>

#define CSI "\033["
#define FOREGROUND 30
#define BACKGROUND 40

namespace colouring {
    enum Colors
    {
        BLACK,
        RED,
        GREEN,
        YELLOW,
        BLUE,
        MAGENTA,
        CYAN,
        WHITE,
        DEFAULT = 49
    };

    void foreground(int color=DEFAULT);
    void background(int color=DEFAULT);
    std::string toAnsi(int color=DEFAULT, bool isBackground=false);
    void clearScreen(int mode=2);
    void clearLine(int mode=2);
}

#endif
