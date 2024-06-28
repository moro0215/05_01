#pragma once
#include <memory>
#include "IScene.h"
#include "Stage.h"//各シーンの読み込み
#include "Title.h"
#include "Clear.h"

class GameManager {
private:
	//シーンを保持するメンバ変数
	std::unique_ptr<IScene>sceneArr_[3];
	
	//どのステージを呼び出すかを管理する変数
	int currentSceneNo_;//現在のシーン
	int prevSceneNo_;//前のシーン

public:
	//コンストラクタ
	GameManager();
	//デストラクタ
	~GameManager();

	//ゲームループを呼び出す
	int Run(char* preKeys, char* keys);
};