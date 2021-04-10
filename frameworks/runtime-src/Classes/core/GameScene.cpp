
#include "GameScene.h"

bool GameScene::init()
{
	if (!Scene::init())
	{
		return false;
	}

	return true;
}


GameScene::~GameScene()
{
	CC_SAFE_RELEASE(_groot);
}
