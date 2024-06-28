#pragma once
#include "IScene.h"

//ゲームシーン
class Stage:public IScene {
public:
	//初期化処理
	void Initialize() override;
	//更新処理
	void Update(char* preKeys, char* keys) override;
	//描画処理
	void Draw() override;

};