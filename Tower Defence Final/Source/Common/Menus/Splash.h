#ifndef SPLASH_H
#define SPLASH_H

#include "../../common\screen manager\screen.h"
#include "../OpenGL/OpenGLTextureLoader.h"



class Splash : public Screen
{
public:
	Splash(void);
	 ~Splash(void);

	const char* getName();

	void update(double delta);
	void paint();

	void keyUpEvent(int keyCode);
	 
private:
	OpenGLTexture* m_BackGround;
	
};
#endif SPLASH_H
