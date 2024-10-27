#include "GameObject.h"
#include "GameAPI.h"  // Add this line
#include <gtest/gtest.h>

TEST(GameObjectTest, TestMovement) {
    GameObject obj(0, 0, 1);
    obj.moveUp();
    EXPECT_EQ(0, obj.getX());
    EXPECT_EQ(1, obj.getY());

    obj.moveRight();
    EXPECT_EQ(1, obj.getX());
    EXPECT_EQ(1, obj.getY());
}

TEST(GameAPITest, TestCreateAndMove) {
    GameAPI api;  // This should now be recognized
    GameObject* obj = api.createObject(0, 0, 2);
    EXPECT_EQ(0, obj->getX());
    EXPECT_EQ(0, obj->getY());

    api.updateGameObjects();
    EXPECT_EQ(2, obj->getX());  
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
