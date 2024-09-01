/*
    ppp_perform.h
    パフォーマンス測定

    author:  K.Y (Programming Place Plus)

    version  1.0.1   '2019/9/4
               ・Webサイト側が C99規格へ対応したことに合わせて、コードを修正。
                 コメントスタイルと、変数宣言位置を変えた。

             1.0.0   '2012/1/2
*/

#ifndef PPP_PERFORM_H_INCLUDED
#define PPP_PERFORM_H_INCLUDED

#include <time.h>


/*
    パフォーマンス測定を開始する。
    引数：
        times:  測定回数。

    使い方：
        PPP_CHECK_PERFORM_BEGIN(1000);  <-- PPP_CHECK_PERFORM_END までの範囲を 1000回繰り返す
        func();                         <-- 測定したい処理
        PPP_CHECK_PERFORM_END("func");  <-- 測定したい処理を 1000回繰り返した測定結果を出力

    備考：
        PPP_DISABLE_PERFORM が定義されているときには、何もしない。
*/
#ifdef PPP_DISABLE_PERFORM
#define PPP_CHECK_PERFORM_BEGIN(times)    // 何もしない
#else
#define PPP_CHECK_PERFORM_BEGIN(times)             \
    {                                              \
        clock_t check_perform_begin = clock();     \
        for(int check_perform_i = 0; check_perform_i < times; ++check_perform_i){
#endif


/*
    パフォーマンス測定を終了する。
    引数：
        title:  結果のメッセージの先頭に出力する見出し文字列。

    備考：
        PPP_DISABLE_PERFORM が定義されているときには、何もしない。
*/
#ifdef PPP_DISABLE_PERFORM
#define PPP_CHECK_PERFORM_END(times)    // 何もしない
#else
#define PPP_CHECK_PERFORM_END(title)         \
        }   /* for の終わり */           \
        clock_t check_perform_end = clock();         \
        printf( "%s: %f seconds\n", title, (double)(check_perform_end - check_perform_begin) / CLOCKS_PER_SEC ); \
    }   // 計測範囲の終わり
#endif


#endif