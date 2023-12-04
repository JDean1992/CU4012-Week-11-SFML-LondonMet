#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 5));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	circle.setRadius(75);
	circle.setPosition(150, 75);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(2.f);

	rect1.setSize(sf::Vector2f(300,300));
	rect1.setPosition(300, 300);
	rect1.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(200, 200));
	rect2.setPosition(350, 350);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(100, 100));
	rect3.setPosition(400, 400);
	rect3.setFillColor(sf::Color::Blue);

	rect4.setSize(sf::Vector2f(200, 100));
	rect4.setPosition(1000, 600);
	rect4.setFillColor(sf::Color::White);

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading text/n";
	}

	text.setFont(font);
	text.setString("Hello World");
	text.setCharacterSize(50);
	text.setFillColor(sf::Color::Red);
	text.setPosition(400, 50);

}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	sf::Vector2u pos = window->getSize();
	rect4.setPosition(pos.x - 200, pos.y- 100);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect);
	window->draw(circle);
	window->draw(rect1);
	window->draw(rect2);
	window->draw(rect3);
	window->draw(text);
	window->draw(rect4);
	endDraw();

}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));

}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}