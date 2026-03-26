#include <raylib.h>
#include "gameMain.h"
#include <asserts.h>
#include <iostream>

#include "assetManager.h"

struct GameData
{
} gameData;

AssetManager assetManager;

bool InitGame()
{
    assetManager.LoadAll();

    return true;
}

constexpr float MaxDeltaTime = 1.f / 5.f;

bool UpdateGame()
{
    float deltaTime = GetFrameTime();
    if (deltaTime > MaxDeltaTime) { deltaTime = MaxDeltaTime; }

    DrawTexturePro(assetManager.DirtTexture, {
                       0, 0, (float) assetManager.DirtTexture.width,
                       (float) assetManager.DirtTexture.height
                   }, {500, 500, 100, 100}, {0, 0}, 0, WHITE);

    return true;
}

void CloseGame()
{
    std::cout << "Closing game" << std::endl;
}
