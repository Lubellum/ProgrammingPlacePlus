/*
    ppp_perform.h
    �p�t�H�[�}���X����

    author:  K.Y (Programming Place Plus)

    version  1.0.1   '2019/9/4
               �EWeb�T�C�g���� C99�K�i�֑Ή��������Ƃɍ��킹�āA�R�[�h���C���B
                 �R�����g�X�^�C���ƁA�ϐ��錾�ʒu��ς����B

             1.0.0   '2012/1/2
*/

#ifndef PPP_PERFORM_H_INCLUDED
#define PPP_PERFORM_H_INCLUDED

#include <time.h>


/*
    �p�t�H�[�}���X������J�n����B
    �����F
        times:  ����񐔁B

    �g�����F
        PPP_CHECK_PERFORM_BEGIN(1000);  <-- PPP_CHECK_PERFORM_END �܂ł͈̔͂� 1000��J��Ԃ�
        func();                         <-- ���肵��������
        PPP_CHECK_PERFORM_END("func");  <-- ���肵���������� 1000��J��Ԃ������茋�ʂ��o��

    ���l�F
        PPP_DISABLE_PERFORM ����`����Ă���Ƃ��ɂ́A�������Ȃ��B
*/
#ifdef PPP_DISABLE_PERFORM
#define PPP_CHECK_PERFORM_BEGIN(times)    // �������Ȃ�
#else
#define PPP_CHECK_PERFORM_BEGIN(times)             \
    {                                              \
        clock_t check_perform_begin = clock();     \
        for(int check_perform_i = 0; check_perform_i < times; ++check_perform_i){
#endif


/*
    �p�t�H�[�}���X������I������B
    �����F
        title:  ���ʂ̃��b�Z�[�W�̐擪�ɏo�͂��錩�o��������B

    ���l�F
        PPP_DISABLE_PERFORM ����`����Ă���Ƃ��ɂ́A�������Ȃ��B
*/
#ifdef PPP_DISABLE_PERFORM
#define PPP_CHECK_PERFORM_END(times)    // �������Ȃ�
#else
#define PPP_CHECK_PERFORM_END(title)         \
        }   /* for �̏I��� */           \
        clock_t check_perform_end = clock();         \
        printf( "%s: %f seconds\n", title, (double)(check_perform_end - check_perform_begin) / CLOCKS_PER_SEC ); \
    }   // �v���͈͂̏I���
#endif


#endif