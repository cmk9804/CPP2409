#include <iostream>
using namespace std;

class User{
private:
    int hp;
    int itemCnt;
public:
    User();
    void DecreaseHP(int dec_hp);
    void IncreaseHP(int inc_hp);
    void IncreaseItemCnt();
    int GetHP();

    
    friend ostream& operator<<(ostream& os, const User& u);
};