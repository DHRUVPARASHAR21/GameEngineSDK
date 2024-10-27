#include "GameAPI.h"

GameAPI::GameAPI() {}

GameAPI::~GameAPI() {
    for (auto obj : gameObjects) {
        delete obj;
    }
}

GameObject* GameAPI::createObject(int x, int y, int speed) {
    GameObject* obj = new GameObject(x, y, speed);
    gameObjects.push_back(obj);
    return obj;
}

void GameAPI::updateGameObjects() {
    for (auto obj : gameObjects) {
  
        obj->moveRight();  
    }
}

const std::vector<GameObject*>& GameAPI::getGameObjects() const {
    return gameObjects;
}
