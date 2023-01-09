#include <SDL2/SDL.h>
#include <string>
#include "items.hpp"
#ifndef _WINDOWS_H_
#define _WINDOWS_H_ 1

class windows{
private:
    SDL_Window *win;
    SDL_Renderer *renderer;
    int status;
public:
    windows()noexcept;
    windows(const windows &a)noexcept;
    windows(int wigth ,int height)noexcept;
    windows(const std::string name, int wigth, int height)noexcept;
    ~windows()noexcept;
    void clear()noexcept;
    void update(item &it)noexcept;
    void draw()noexcept;
    void draw_back(uint8_t r, uint8_t g, uint8_t b, uint8_t a)noexcept;
};


#endif