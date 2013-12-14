#include "LevelWon.h"
#include "MainMenu.h"
#include "../../Common/Constants/Constants.h"
#include "../../Common/Input/Input.h"
#include "../Screen Manager/ScreenManager.h"
#include "../OpenGL/OpenGLTexture.h"
#include "../OpenGL/OpenGL.h"

LevelWon::LevelWon(void)
{
	m_BackGround = new OpenGLTexture("LevelComplete");
}


LevelWon::~LevelWon(void)
{
	if(m_BackGround != NULL)
	{
		delete m_BackGround;
		m_BackGround = NULL;
	}
}

const char* LevelWon:: getName()
{
	return LEVEL_WON_MENU_SCREEN_NAME;
}

void LevelWon::update(double delta)
{

}
void LevelWon::paint()
{
	OpenGLRenderer::getInstance()->drawTexture(m_BackGround, 0.0f, 0.0f, getWidth(), getHeight());
}
 void LevelWon::keyUpEvent(int keyCode)
 {
	 if(keyCode == KEYCODE_SPACE)
	 {
		 
		 ScreenManager::getInstance()->switchScreen(MAIN_MENU_SCREEN_NAME);
	 }
 }