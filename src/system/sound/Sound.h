#include "SDL_mixer.h"

#ifndef SOUND_H_
#define SOUND_H_

class Sound {
private:
	bool m_enabled;
	int m_chan;
	Mix_Chunk* m_sndRef;
public:
	Sound(Mix_Chunk* sndRef, bool enabled);
	bool isPlaying();
	void play();
	void playInf();
	void setPos(Sint16 angle, Uint8 distance);
	void stop();
	~Sound();
};

#endif /* SOUND_H_ */