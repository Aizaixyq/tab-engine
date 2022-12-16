#include "audio.hpp"

/**
 * @brief init audio
 */
audio::audio() noexcept {
    Mix_Init(MIX_INIT_OGG | MIX_INIT_MP3);
    //todo error
    Mix_OpenAudio(22050, AUDIO_U8, 1, 1024);
    //todo error
}

audio::~audio() noexcept {
    for(auto &i:music){
        Mix_FreeMusic(i);
    }
    Mix_Quit();
}

void audio::add_music(std::string &file) noexcept {
    auto p = Mix_LoadMUS(file.data());
    if(p == nullptr){
        ;
        //todo : error
    }
    music.emplace_back(p);
}

void audio::play_music(int ptr, int count) noexcept {
    if(ptr > music.size() || ptr < 0){
        ;
        //todo : error
    }
    this->ptr = ptr;
    Mix_PlayMusic(music[ptr], count);
}

bool audio::music_check() noexcept {
    if(Mix_PlayingMusic()){
        return true;
    }
    return false;
}