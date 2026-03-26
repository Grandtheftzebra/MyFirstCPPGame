#include <raylib.h>
#include "gameMain.h"
#include <asserts.h>

#include <iostream>
#include <ostream>

struct GameData
{
    Texture DirtTexture;
} gameData;

bool InitGame()
{
    gameData.DirtTexture = LoadTexture(RESOURCES_PATH "dirt.png");

    return true;
}

constexpr float MaxDeltaTime = 1.f / 5.f;

bool UpdateGame()
{
    float deltaTime = GetFrameTime();
    if (deltaTime > MaxDeltaTime) { deltaTime = MaxDeltaTime; }

    DrawTexturePro(gameData.DirtTexture, {
                       0, 0, (float) gameData.DirtTexture.width,
                       (float) gameData.DirtTexture.height
                   }, {500, 500, 100, 100}, {0, 0}, 0, WHITE);

    return true;
}

void CloseGame()
{
    std::cout << "Closing game" << std::endl;
}
