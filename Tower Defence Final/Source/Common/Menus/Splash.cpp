#include "Splash.h"
#include "MainMenu.h"
#include "../../Common/Constants/Constants.h"
#include "../../Common/Input/Input.h"
#include "../Screen Manager/ScreenManager.h"
#include "../OpenGL/OpenGLTexture.h"
#include "../OpenGL/OpenGL.h"

Splash::Splash(void)
{
	m_BackGround = new OpenGLTexture("Splashscreen");
}


Splash::~Splash(void)
{
	if(m_BackGround != NULL)
	{
		delete m_BackGround;
		m_BackGround = NULL;
	}
}

const char* Splash:: getName()
{
	return SPLASH_MENU_SCREEN_NAME;
}

void Splash::update(double delta)
{

}
void Splash::paint()
{
	OpenGLRenderer::getInstance()->drawTexture(m_BackGround, 0.0f, 0.0f, getWidth(), getHeight());
}
 void Splash::keyUpEvent(int keyCode)
 {
	 if(keyCode == KEYCODE_SPACE)
	 {
		 
		 ScreenManager::getInstance()->switchScreen(MAIN_MENU_SCREEN_NAME);
	 }
 }