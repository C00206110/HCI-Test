#include <SFML/Graphics.hpp>
#include "Game.h"

Game::Game():
m_window(sf::VideoMode(900, 600, 32), "Git Test", sf::Style::Default)
{
	

}

void Game::run()

{
	while (m_window.isOpen())
	{
		update();
	}
	

	//system("pause");

}

void Game::update()
{

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{


		m_window.close();


	}
}