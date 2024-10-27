#include "GameObject.h"

GameObject::GameObject(int x, int y, int speed) : x(x), y(y), speed(speed) {}

GameObject::~GameObject() {}

void GameObject::moveUp() { y += speed; }
void GameObject::moveDown() { y -= speed; }
void GameObject::moveLeft() { x -= speed; }
void GameObject::moveRight() { x += speed; }

int GameObject::getX() const { return x; }
int GameObject::getY() const { return y; }
