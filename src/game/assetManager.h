#pragma once
#include <raylib.h>

struct AssetManager
{
    Texture2D DirtTexture = {};
    void LoadAll();
};