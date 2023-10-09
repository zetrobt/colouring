#include "colouring.h"

void colouring::foreground(int color) {
    printf("%s%im", CSI, FOREGROUND + color);
}

void colouring::background(int color) {
    printf("%s%im", CSI, BACKGROUND + color);
}

std::string colouring::toAnsi(int color, bool isBackground) {
    const int COLOR = (isBackground ? BACKGROUND : FOREGROUND) + color;
    return CSI + std::to_string(COLOR) + 'm';
}

void colouring::clearScreen(int mode) {
    printf("%s%iJ", CSI, mode);
}

void colouring::clearLine(int mode) {
    printf("%s%iK", CSI, mode);
}
