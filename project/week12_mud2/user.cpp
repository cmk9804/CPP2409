#include "user.h"


User::User(){
    hp = 20;
    itemCnt = 0;
}
void User::DecreaseHP(int dec_hp){
    hp -= dec_hp;
}
void User::IncreaseHP(int inc_hp){
    hp += inc_hp;
}

int User::GetHP(){
    return hp;
}

void User::IncreaseItemCnt(){
    itemCnt++;
}

ostream& operator<<(ostream& os, const User& u){
        os << "현재 HP는 " << u.hp << " 이고, 먹은 아이템은 총 " << u.itemCnt << "개 입니다.";
        return os;
    }

void User::DoAttack(){
    cout << "공격합니다" << endl;
}

void Magician::DoAttack(){
    cout << "마법 사용" << endl;
}

void Warrior::DoAttack(){
    cout << "베기 사용" << endl;
}