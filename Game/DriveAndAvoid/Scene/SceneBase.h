#pragma once

//�V�[�����
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

//��b�V�[���N���X
class SceneBase
{
public:
	SceneBase() {}
	virtual ~SceneBase() {}

	virtual void Initialize() {}	//����������
	virtual eSceneType Update()		//�X�V����
	{
		return GetNowScene();
	}
	virtual void Draw() const {}	//�`�揈��
	virtual void Finalize() {}		//�I��������

	virtual eSceneType GetNowScene() const = 0;	//���݂̃V�[�������擾
};