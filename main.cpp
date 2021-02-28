#include <SFML/Graphics.hpp>
#include "hero.hpp"
using namespace sf;//�������� ������������ ���� sf, ����� ��������� �� ������ sf::
int main()
{
	RenderWindow window(VideoMode(640, 480), "Lesson 3. kychka-pc.ru"); //��������� ��� �������� ������ ����

	Hero hero1;

	while (window.isOpen())
	{
		Clock clock; //������� ���������� �������, �.�. �������� �� �������(� �� �������������/�������� ����������).
		float time = clock.getElapsedTime().asMicroseconds(); //���� ��������� ����� � �������������
		clock.restart(); //������������� �����
		time = time / 2; //�������� ����

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