# colouring
Simple ANSI colored terminal text in C++.
## Danger
Windows is not supporting now! Please wait for updates.
## How to use?
If you working in Unix, just use it firstly:
```c++
#include "colouring.h"
using namespace colouring;
```
### List of Colors
```c++
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
```
If color is not passed then it will be *DEFAULT*.
### Colored Output
You can change color of text or background by relevant functions:
```c++
foreground(color);
background(color);
```
or by generated ANSI-string:
```c++
std::cout << toAnsi(color, isBackground=false);
```
### Clearing
With **colouring** you can clear line or screen in your console:
```c++
clearScreen(mode=2);
clearLine(mode=2);
```
## ToDo
- [x] Unix foreground and background colouring
- [ ] Windows supporting
- [x] Screen and line clearing
- [ ] Cursor positioning
