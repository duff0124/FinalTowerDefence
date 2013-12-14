#ifndef LEVEL_WON_H
#define LEVEL_WON_H

#include "../../common\screen manager\screen.h"
#include "../OpenGL/OpenGLTextureLoader.h"



class LevelWon : public Screen
{
public:
	LevelWon(void);
	 ~LevelWon(void);

	const char* getName();

	void update(double delta);
	void paint();

	void keyUpEvent(int keyCode);
	 
private:
	OpenGLTexture* m_BackGround;
	
};
#endif LEVEL_WON_H