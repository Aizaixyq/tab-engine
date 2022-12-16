#include "items.hpp"

item::item()noexcept: r({0, 0, 0, 0}), ptr(-1), frame_ctr(0), angle(0){}

item::item(item &x)noexcept: r(x.r), ptr(x.ptr), img(x.img), angle(x.angle), frame_ctr(0){}

item::~item(){}

void item::operator = (item &x)noexcept{
    this->r = x.r;
    this->ptr = x.ptr;
    this->frame_ctr = x.frame_ctr;
    this->img = x.img;
    this->angle = x.angle;
}

void item::add_img(SDL_Surface *s)noexcept{
    img.emplace_back(s);
}

void item::update_loc(int _x, int _y)noexcept{
    r.x = _x;
    r.y = _y;
}

void item::switch_img()noexcept{
    ++ptr;
    if(ptr >= img.size()){
        ptr = 0;
    }
    r.w = img[ptr]->w;
    r.h = img[ptr]->h;
}

void item::point_img(int p)noexcept{
    ptr = p;
    if(ptr >= img.size() && ptr < 0){
        ptr = 0;
    }
    r.w = img[ptr]->w;
    r.h = img[ptr]->h;
}

SDL_Rect* item::ret_rect()noexcept{
    return &r;
}

SDL_Surface* item::ret_img()noexcept{
    return img[ptr];
}

double& item::ret_angle()noexcept{
    return angle;
}

void item::frame_cnt(int flag)noexcept{
    ++frame_ctr;
    if(flag < 0){
        point_img(0);
        frame_ctr = 0;
    }
    else if(frame_ctr > flag){
        switch_img();
        frame_ctr = 0;
    }
    //fmt::print("{}\n", frame_ctr);
}