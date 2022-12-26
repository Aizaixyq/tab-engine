#include<vector>
#include <string>
#include <SDL2/SDL_mixer.h>

#ifndef _AUDIO_H_
#define _AUDIO_H_ 1

class audio{
private:
    int ptr;
    std::vector<Mix_Music*>music;
public:
    audio()noexcept;
    audio(const audio &a)noexcept;
    ~audio()noexcept;
    void add_music(std::string &file)noexcept;
    void play_music(int ptr, int count)noexcept;
    bool music_check()noexcept;
};

#endif