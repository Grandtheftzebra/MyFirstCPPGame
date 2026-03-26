// "" instead of <> search first in the same folder
#include "assetManager.h"

void AssetManager::LoadAll()
{
    DirtTexture = LoadTexture(RESOURCES_PATH "dirt.png");
}
