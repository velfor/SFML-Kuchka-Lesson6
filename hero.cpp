#include "hero.hpp"
Hero::Hero() {
	heroimage.loadFromFile("images/hero.png");//загружаем в него файл
	herotexture.loadFromImage(heroimage);//передаем в него объект Image (изображения)
	herosprite.setTexture(herotexture);//передаём в него объект Texture (текстуры)
	herosprite.setTextureRect(sf::IntRect(0, 192, 96, 96));//получили нужный нам прямоугольник с котом
	herosprite.setPosition(50, 25);//задаем начальные координаты появления спрайта
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