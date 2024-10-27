#ifndef GAME_API_H
#define GAME_API_H

#include "GameObject.h"
#include <vector>

class GameAPI {
    std::vector<GameObject*> gameObjects;

public:
    GameAPI();
    ~GameAPI();

    GameObject* createObject(int x, int y, int speed);
    
    
    void updateGameObjects();

   
    const std::vector<GameObject*>& getGameObjects() const;
};

#endif
