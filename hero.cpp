#include "hero.hpp"
Hero::Hero() {
	heroimage.loadFromFile("images/hero.png");//��������� � ���� ����
	herotexture.loadFromImage(heroimage);//�������� � ���� ������ Image (�����������)
	herosprite.setTexture(herotexture);//������� � ���� ������ Texture (��������)
	herosprite.setTextureRect(sf::IntRect(0, 192, 96, 96));//�������� ������ ��� ������������� � �����
	herosprite.setPosition(50, 25);//������ ��������� ���������� ��������� �������
}
sf::Sprite& Hero::getSprite() { return herosprite; }
void Hero::moveLeft(float time) {
	herosprite.move(-0.1*time, 0);
	herosprite.setTextureRect(sf::IntRect(0, 96, 96, 96));
}
void Hero::moveRight(float time) {
	herosprite.move(0.1 * time, 0);
	herosprite.setTextureRect(sf::IntRect(0, 192, 96, 96));
}
void Hero::moveUp(float time) {
	herosprite.move(0, -0.1 * time);
	herosprite.setTextureRect(sf::IntRect(0, 288, 96, 96));
}
void Hero::moveDown(float time) {
	herosprite.move(0, 0.1 * time);
	herosprite.setTextureRect(sf::IntRect(0, 0, 96, 96));
}