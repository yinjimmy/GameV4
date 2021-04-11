#pragma once

#include "core/GameScene.h"

USING_NS_CC;

class RuntimeScene : public GameScene
{
public:
	CREATE_FUNC(RuntimeScene);

	RuntimeScene();
	~RuntimeScene();

	virtual bool init();

	virtual void onExit() override;
	virtual void onEnter() override;
};

