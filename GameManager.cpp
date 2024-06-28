#include "GameManager.h"
#include <Novice.h>

//コンストラクタ
GameManager::GameManager()
{
	//各シーンの配列
	sceneArr_[TITLE] = std::make_unique<Title>();
	sceneArr_[STAGE] = std::make_unique<Stage>();
	sceneArr_[CLEAR] = std::make_unique<Clear>();

	//初期シーンの設定
	currentSceneNo_ = TITLE;
}

//デストラクタ
GameManager::~GameManager(){}

int GameManager::Run(char* preKeys, char* keys)
{
	while (Novice::ProcessMessage() == 0) {
		//フレームの開始
		Novice::BeginFrame();

		// キー入力を受け取る
		memcpy(preKeys, keys, 256);
		Novice::GetHitKeyStateAll(keys);

		//シーンのチェック
		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();

		//シーン変更チェック
		if (prevSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Initialize();
		}

		//更新処理
		sceneArr_[currentSceneNo_]->Update(preKeys, keys);

		//描画処理
		sceneArr_[currentSceneNo_]->Draw();

		//フレームの終了
		Novice::EndFrame();

		//ESCキーが押されたらループの終了
		if (preKeys[DIK_ESCAPE] == 0 && keys[DIK_ESCAPE] != 0) {
			break;
		}
	}
	return 0;
}
