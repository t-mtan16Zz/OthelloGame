#include "DxLib.h"
#include <stdio.h>
#include <stdlib.h>


// �v���O������ WinMain ����n�܂�܂�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE); // �E�B���h�E�T�C�Y��ύX�BFALSE�ɂ��邩�폜���邱�ƂőS��ʃ��[�h�ɁB
	if (DxLib_Init() == -1)	// �c�w���C�u��������������
		return -1; // �G���[���N�����璼���ɏI��

	DrawPixel(320, 240, GetColor(255, 255, 255)); // �_��ł�

	WaitKey(); // �L�[���͑҂�

	DxLib_End(); // �c�w���C�u�����g�p�̏I������
	return 0; // �\�t�g�̏I�� 
}