#include "GameOverMenu.h"
#include "MainMenu.h"
#include "../../Common/Constants/Constants.h"
#include "../../Common/Input/Input.h"
#include "../Screen Manager/ScreenManager.h"
#include "../OpenGL/OpenGLTexture.h"
#include "../OpenGL/OpenGL.h"

GameOver::GameOver(void)
{
	m_BackGround = new OpenGLTexture("GameOverScreen");
}


GameOver::~GameOver(void)
{
	if(m_BackGround != NULL)
	{
		delete m_BackGround;
		m_BackGround = NULL;
	}
}

const char* GameOver:: getName()
{
	return GAME_OVER_MENU_SCREEN_NAME;
}

void GameOver::update(double delta)
{

}
void GameOver::paint()
{
	OpenGLRenderer::getInstance()->drawTexture(m_BackGround, 0.0f, 0.0f, getWidth(), getHeight());
}
 void GameOver::keyUpEvent(int keyCode)
 {
	 if(keyCode == KEYCODE_SPACE)
	 {
		 
		 ScreenManager::getInstance()->switchScreen(MAIN_MENU_SCREEN_NAME);
	 }
 }