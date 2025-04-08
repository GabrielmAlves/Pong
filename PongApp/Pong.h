#pragma once

#include <memory>
#include "SFML/Graphics.hpp"

class Pong
{
	std::shared_ptr<sf::RenderWindow> window;
	sf::RectangleShape playerOne, playerTwo;
	sf::Texture t_playerOne, t_playerTwo, t_ball, t_field;
	sf::Sprite field, ball;
	sf::Vector2f velocity;
	sf::Font font;
	sf::Text text_playerOne, text_playerTwo;

	int points_playerOne, points_playerTwo;
	float speed;
	bool start;

protected:
	void events();
	void draw_game();
	void logic();
public:
	Pong();
	void run();
};

