#ifndef GAME_OBJECT_H
#define GAME_OBJECT_H

class GameObject {
protected:
    int x, y;  // Position of the game object
    int speed; // Movement speed of the game object

public:
    GameObject(int x = 0, int y = 0, int speed = 1);
    virtual ~GameObject();

    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();

    
    int getX() const;
    int getY() const;
};

#endif
