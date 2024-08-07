#pragma once
#include <Novice.h>
#include"Vector2.h"
class Player
{
public:
	~Player();
	Player();

	void Init();
	void Update();
	void Draw();

	void MoveRight();
	void MoveLeft();


private:
	Vector2 pos_{ };
	float speed_=5.0f;

};

