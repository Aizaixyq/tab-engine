#include "main.hpp"

int j;

void Main::init(){
    w->draw_back(0,0,0,0);
}

int Main::run(){
    SDL_Event event;
    while (true) {
        int begin = SDL_GetTicks();
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT){
                return 0;
            }    
        }
        ++j;
        if(j > 200)j = 0;
        w->draw_back(j,0,0,0);
        w->draw();
        int end = SDL_GetTicks();
        int cost = end - begin;
        int frame = 1000 / fps;
        int d = frame - cost;
        if(d < 0)d = 0;
        SDL_Delay(d);
    }
    return 0;
}

int main(){
    j = 0;
    Main m("hh", 1920, 1080, 60);
    m.run();
    return 0;
}