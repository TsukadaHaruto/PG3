﻿#pragma once
#include"IScene.h"
//#include "dinput.h"
#include"Novice.h"
class StageScene :public IScene
{
	void Init()override;
	void Update(char* Keys, char *preKeys)override;
	void Draw()override;
};
