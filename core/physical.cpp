#include "physical.hpp"
#include <algorithm>

physical::physical(){
    ;
}

physical::~physical(){
    ;
}

void angle(SDL_Rect &rect, double a){
    if(a == 90 || a == -90){
        std::swap(rect.h, rect.w);
    }
    else {
        ;//todo
    }
}

bool physical::crash(item &it1, item &it2){
    auto p = it1.ret_rect(), q = it2.ret_rect();
    angle(*p, it1.ret_angle());
    angle(*q, it1.ret_angle());
    return SDL_HasIntersection(p, q); 
}

bool physical::crash(item &it1, item &it2, int mode1, int mode2){
    auto p = it1.ret_rect();
    auto q = it2.ret_rect();
    bool a = mode1 > -1, b = mode1 < mode.size(), 
         c = mode2 > -1, d = mode2 < mode.size();

    if(b || c){
        ;//todo : error 2
    }
    if(a && b && c && d){
        ;//todos
    }

    return SDL_HasIntersection(p, q); 
}