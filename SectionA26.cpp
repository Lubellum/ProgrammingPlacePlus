#include <iostream>
#include "SectionA26_1.h"
#include "SectionA26_2_1.h"
#include "SectionA26_2_2.h"
#include "SectionA26_3.h"

//void Battle(CPikachu& aPlayer1, CMewtwo& aPlayer2)
//{
//    aPlayer1.Jump();
//    aPlayer2.Jump();
//}

void Battle(IBattleCharacter& aPlayer1, IBattleCharacter& aPlayer2)
{
    aPlayer1.Jump();
    aPlayer2.Jump();
}

class CSimple
{
public:
    CSimple();
    //~CSimple();
    virtual ~CSimple();

private:
    //int num1;
    //int num2;
};

CSimple::CSimple()
{
}

CSimple::~CSimple()
{
}

void SectionA26()
{
    //CBattleCharacter battleCharater(1);
    //CBattleCharacter battleCharater;
    //CBattleCharacterEX* address = CBattleCharacterEX::GetInstance();
    //address->Jump();
    //battleCharater.Jump();
    //battleCharater.Jab();

    //CPikachu pikachu;
    //CPikachu* pikachu = new CPikachu;
    //CBattleCharacter* pikachu = new CPikachu;
    //pikachu->Jump(10);
    //pikachu->Jump();
    //pikachu->Jump("じゃんぷー");


    //delete pikachu;
    
    //pikachu.Jump();

    // できるけど使わないほうがええで！
    //pikachu.CPikachu::CPikachu();
    //pikachu.Appeal();


    //CPikachu d;
    //CBattleCharacter b = d;
    //b.Jump();

    //CPikachu* pd = new CPikachu;
    //CBattleCharacter* pb = pd;
    //pb->Jump();

    //CPikachu d;
    //CBattleCharacter* pb = &d;
    //pb->Jump();




    //// キャラクターにて選択
    //CPikachu* pikachu = new CPikachu;
    //CMewtwo* mewtwo = new CMewtwo;

    ////pikachu->Jump();
    ////mewtwo->Jump();

    //Battle(*pikachu, *mewtwo);

    //delete pikachu;
    //delete mewtwo;



    // プレイヤーにて選択
    IBattleCharacter* player1 = new CPikachu;
    IBattleCharacter* player2 = new CMewtwo;
    
    //CBattleCharacter* player3 = new CBattleCharacter;

    //player1->Jump();
    //player2->Jump();

    Battle(*player1, *player2);

    delete player1;
    delete player2;

    //std::cout << sizeof(CSimple) << std::endl;
}