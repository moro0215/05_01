#include "Stage.h"
#include <Novice.h>


//初期化処理
void Stage::Initialize()
{
}
//更新処理
void Stage::Update(char* preKeys, char* keys)
{
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = CLEAR;
	}
}
//描画処理
void Stage::Draw()
{
	Novice::ScreenPrintf(630, 360, "Kill Enemy!!!!");
}
