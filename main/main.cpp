#include "main.hpp"

Main::Main(){
    a = new audio();
    w = new windows();
    fps = 30;
}

Main::Main(int width, int height, int fps){
    a = new audio();
    w = new windows(width, height);
    this->fps = fps;
}

Main::Main(std::string name, int width, int height, int fps){
    a = new audio();
    w = new windows(name, width, height);
    this->fps = fps;
}

Main::~Main(){
    delete a;
    delete w;
}