#include <SFML/Graphics.hpp>
#include "hero.hpp"
using namespace sf;//включаем пространство имен sf, чтобы постоянно не писать sf::
int main()
{
	RenderWindow window(VideoMode(640, 480), "Lesson 3. kychka-pc.ru"); //увеличили для удобства размер окна

	Hero hero1;

	while (window.isOpen())
	{
		Clock clock; //создаем переменную времени, т.о. привязка ко времени(а не загруженности/мощности процессора).
		float time = clock.getElapsedTime().asMicroseconds(); //дать прошедшее время в микросекундах
		clock.restart(); //перезагружает время
		time = time / 2; //скорость игры

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		if (Keyboard::isKeyPressed(Keyboard::Left))		{ hero1.moveLeft(time); }
		if (Keyboard::isKeyPressed(Keyboard::Right))	{ hero1.moveRight(time); }
		if (Keyboard::isKeyPressed(Keyboard::Up))		{ hero1.moveUp(time); }
		if (Keyboard::isKeyPressed(Keyboard::Down))		{ hero1.moveDown(time); }
		
		window.clear();
		window.draw(hero1.getSprite());
		window.display();
	}

	return 0;
}