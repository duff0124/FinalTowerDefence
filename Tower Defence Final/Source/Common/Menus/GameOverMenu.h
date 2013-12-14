#ifndef GAMEOVERSCREEN_H
#define GAMEOVERSCREEN_H

#include "../../common\screen manager\screen.h"
#include "../OpenGL/OpenGLTextureLoader.h"



class GameOver : public Screen
{
public:
	GameOver(void);
	 ~GameOver(void);

	const char* getName();

	void update(double delta);
	void paint();

	void keyUpEvent(int keyCode);
	 
private:
	OpenGLTexture* m_BackGround;
	
};
#endif GAMEOVERSCREEN_H