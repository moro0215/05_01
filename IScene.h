#pragma once
//シーン名を定義
enum SCENE { TITLE, STAGE, CLEAR };

//シーン内で処理を行う基底クラス
class IScene {
protected:
	//シーン番号を管理する変数
	static int sceneNo;

public:
	//関数
	virtual void Initialize() = 0;
	virtual void Update(char* preKeys, char* keys) = 0;
	virtual void Draw() = 0;

	//仮想デストラクタ
	virtual ~IScene();

	//シーン番号のゲッター
	int GetSceneNo();
};