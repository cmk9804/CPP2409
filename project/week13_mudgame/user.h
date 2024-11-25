#include <iostream>
using namespace std;

class User{
protected:
    int hp;
    int itemCnt;
public:
    User();
    virtual void DecreaseHP(int dec_hp) = 0;
    virtual void IncreaseHP(int inc_hp) = 0;
    virtual void IncreaseItemCnt() = 0;
    virtual void DoAttack() = 0;
    virtual int GetHP() = 0;
    
    friend ostream& operator<<(ostream& os, const User& u);
};

class Magician : public User{
public:
    void DecreaseHP(int dec_hp);
    void IncreaseHP(int inc_hp);
    void IncreaseItemCnt();
    void DoAttack();
    int GetHP();

};

class Warrior : public User{
public:
    void DecreaseHP(int dec_hp);
    void IncreaseHP(int inc_hp);
    void IncreaseItemCnt();
    void DoAttack();
    int GetHP();

};