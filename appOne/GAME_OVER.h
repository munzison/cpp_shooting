#pragma once
#include "SCENE.h"
class GAME_OVER :
    public SCENE
{
public:
    GAME_OVER(class GAME* game);
    ~GAME_OVER();
    void darw();
    void nextScene();
};

