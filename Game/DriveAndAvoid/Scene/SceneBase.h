#pragma once

//シーン情報
enum eSceneType
{
	E_TITLE,
	E_MAIN,
	E_HELP,
	E_RANKING_DISP,
	E_RANKING_INPUT,
	E_RESULT,
	E_END
};

//基礎シーンクラス
class SceneBase
{
public:
	SceneBase() {}
	virtual ~SceneBase() {}

	virtual void Initialize() {}	//初期化処理
	virtual eSceneType Update()		//更新処理
	{
		return GetNowScene();
	}
	virtual void Draw() const {}	//描画処理
	virtual void Finalize() {}		//終了時処理

	virtual eSceneType GetNowScene() const = 0;	//現在のシーン情報を取得
};