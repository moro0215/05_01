#include <Novice.h>
#include "GameManager.h"

const char kWindowTitle[] = "GC2A_11_モロズミ_サトシ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	GameManager* gameManager_ = new GameManager;

	gameManager_->Run(preKeys, keys);

	

}
