#include "Title.h"
#include <Novice.h>

//初期化処理
void Title::Initialize()
{
}
//更新処理
void Title::Update(char* preKeys, char* keys)
{
	//シーンの切り替わり
	if (!preKeys[DIK_SPACE] && keys[DIK_SPACE]) {
		sceneNo = STAGE;
	}
}
//描画処理
void Title::Draw()
{
	Novice::ScreenPrintf(630, 360, "shooting");
}
