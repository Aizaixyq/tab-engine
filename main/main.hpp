#include "audio.hpp"
#include "items.hpp"
#include "physical.hpp"
#include "windows.hpp"
#include <SDL2/SDL.h>
#ifndef _MAIN_H_
#define _MAIN_H_ 1

class Main{
private:
    audio *a;
    windows *w;
    int fps;
public:
    Main();
    Main(int width, int height, int fps);
    Main(std::string name, int width, int height, int fps);
    ~Main();
    void init();
    int run();
};

#endif