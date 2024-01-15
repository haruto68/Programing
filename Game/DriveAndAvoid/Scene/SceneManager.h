#pragma once

#include"SceneBase.h"

#define TARGET_FREAM_RATE	(60)	//�Œ艻����t���[�����[�g�l
#define DELTA_SECOND	(1000000 / TARGET_FREAM_RATE)
									//1�t���[��������̎��ԁi�}�C�N���b�j

//�V�[���}�l�[�W���[�N���X
class SceneManager
{
private:
	SceneBase* current_scene;	//���݃V�[�����
	
public:
	SceneManager();
	~SceneManager();

	void Initialize();	//����������
	void Update();		//�X�V����
	void Finalize();	//�I��������

private:
	void Draw() const;								//�`�揈��
	void ChangeScene(eSceneType scene_type);		//�V�[���؂�ւ�����
	SceneBase* CreatScene(eSceneType scene_type);	//�V�[����������
};