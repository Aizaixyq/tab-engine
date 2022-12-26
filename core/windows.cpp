#include "windows.hpp"

//todo :hint
windows::windows() noexcept {
    status = SDL_Init(SDL_INIT_TIMER | SDL_INIT_VIDEO | 
        SDL_INIT_EVENTS | SDL_INIT_JOYSTICK | 
        SDL_INIT_HAPTIC | SDL_INIT_GAMECONTROLLER | SDL_INIT_SENSOR);
    if(status){
        ;//todo
    }
    win = SDL_CreateWindow("dev", SDL_WINDOWPOS_CENTERED,
                         SDL_WINDOWPOS_CENTERED, 600, 400, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(win, -1, 0);
}
windows::windows(const windows &a) noexcept {
    this->win = a.win;
    this->renderer = a.renderer;
}
//todo :hint
windows::windows(int width, int height) noexcept {
    status = SDL_Init(SDL_INIT_TIMER | SDL_INIT_VIDEO | 
        SDL_INIT_EVENTS | SDL_INIT_JOYSTICK | 
        SDL_INIT_HAPTIC | SDL_INIT_GAMECONTROLLER | SDL_INIT_SENSOR);
    if(status){
        ;//todo
    }
    win = SDL_CreateWindow("dev", SDL_WINDOWPOS_CENTERED,
                         SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(win, -1, 0);
}
//todo :hint
windows::windows(const std::string name, int width, int height) noexcept {
    status = SDL_Init(SDL_INIT_TIMER | SDL_INIT_VIDEO | 
        SDL_INIT_EVENTS | SDL_INIT_JOYSTICK | 
        SDL_INIT_HAPTIC | SDL_INIT_GAMECONTROLLER | SDL_INIT_SENSOR);
    if(status){
        ;//todo
    }
    win = SDL_CreateWindow(name.data(), SDL_WINDOWPOS_CENTERED,
                         SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(win, -1, 0);
}
//todo :hint
windows::~windows() noexcept {
    SDL_DestroyWindow(win);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
}
//todo :hint
void windows::clear() noexcept {
    if(renderer == nullptr){
        ;//todo : error
    }
    status = SDL_RenderClear(renderer);
    if(status){
        ;//todo : error
    }
}
//todo :hint
void windows::update(item &it) noexcept {
    SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, it.ret_img());
    //todo move to item
    if(texture == nullptr){
        ;//todo : error
    }
    status = SDL_RenderCopyEx(renderer, texture, 0, 
                            it.ret_rect(), it.ret_angle(), 0, SDL_FLIP_NONE);
    if(status){
        ;//todo : error
    }
    SDL_DestroyTexture(texture);
}
//todo :hint
void windows::draw() noexcept {
    if(renderer == nullptr){
        ;//todo : error
    }
    SDL_RenderPresent(renderer);
}
//todo :hint
void windows::draw_back(u_int8_t r, u_int8_t g, u_int8_t b, u_int8_t a) noexcept {
    status = SDL_SetRenderDrawColor(renderer, r, g, b, a);
    if(status){
        ;//todo : error
    }
}