#include <iostream>

void Section07()
{
	// ���@�@���̊e�ϊ��́Astatic_cast�Aconst_cast�Areinterpret_cast�A�b����`���̃L���X�g�A�L���X�g�͕s�v�A�̂�����ōs���邩�����Ă��������B

	// long �� short
	// bool �� int
	// int* �� int
	// const char* �� char*
	// struct MyData* �� void*
	// struct MyData* �� const struct MyData*
	// void* �� struct MyData*
	// const float* �� int*
	// bool (*f)(int) �� bool (*f)(const char*)
}