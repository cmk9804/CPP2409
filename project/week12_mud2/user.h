#include <iostream>
using namespace std;

class User{
protected:
    int hp;
    int itemCnt;
public:
    User();
    void DecreaseHP(int dec_hp);
    void IncreaseHP(int inc_hp);
    void IncreaseItemCnt();
    void DoAttack();
    int GetHP();

    
    friend ostream& operator<<(ostream& os, const User& u);
};

class Magician : public User{
public:
    void DoAttack();
};

class Warrior : public User{
public:
    void DoAttack();
};