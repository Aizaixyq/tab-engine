#include <vector>
#include <SDL2/SDL.h>
#ifndef _ITEMS_H_
#define _ITEMS_H_ 1

class item{
private:
    int ptr;
    std::vector<SDL_Surface*> img;
    SDL_Rect r;
    double angle;
    int frame_ctr;
public:
    item()noexcept;
    item(item &x)noexcept;
    ~item()noexcept;
    void add_img(SDL_Surface *s)noexcept;
    void switch_img()noexcept;
    void point_img(int p)noexcept;
    void update_loc(int _x, int _y)noexcept;
    SDL_Rect* ret_rect()noexcept;
    SDL_Surface* ret_img()noexcept;
    double& ret_angle()noexcept;
    void operator = (item &x)noexcept;
    void frame_cnt(int flag)noexcept;
};

#endif