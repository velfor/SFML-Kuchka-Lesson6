#pragma once
#include <SFML/Graphics.hpp>
class Hero {
private:
    sf::Image heroimage; //������� ������ Image (�����������)
    sf::Texture herotexture;//������� ������ Texture (��������)
    sf::Sprite herosprite;//������� ������ Sprite(������)
public:
    Hero();
    sf::Sprite& getSprite();
    void moveLeft(float);
    void moveRight(float);
    void moveUp(float);
    void moveDown(float);
};
