#include "Clear.h"
#include <Novice.h>

//初期化処理
void Clear::Initialize()
{
}
//更新処理
void Clear::Update(char* preKeys, char* keys)
{
	//シーンの切り替わり
	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo = TITLE;
	}
}
//描画処理
void Clear::Draw()
{
	Novice::ScreenPrintf(630, 360, "GameCrear!");
}

