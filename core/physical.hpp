#include <vector>
#include <SDL2/SDL.h>
#include "items.hpp"
#ifndef _PHYSICAL_H_
#define _PHYSICAL_H_ 1

class physical{
private:
    std::vector<std::vector<SDL_Rect>> mode;
public:
    physical();
    ~physical();
    bool crash(item &it1, item &it2);
    bool crash(item &it1, item &it2, int mode1, int mode2);
};

#endif