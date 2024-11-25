#include "user.h"


User::User(){
    hp = 20;
    itemCnt = 0;
}

ostream& operator<<(ostream& os, const User& u){
        os << "현재 HP는 " << u.hp << " 이고, 먹은 아이템은 총 " << u.itemCnt << "개 입니다.";
        return os;
    }

void User::DoAttack(){
    cout << "공격합니다" << endl;
}


void Magician::DecreaseHP(int dec_hp){
    hp -= dec_hp;
}
void Magician::IncreaseHP(int inc_hp){
    hp += inc_hp;
}

int Magician::GetHP(){
    return hp;
}

void Magician::IncreaseItemCnt(){
    itemCnt++;
}

void Magician::DoAttack(){
    cout << "마법 사용" << endl;
}


void Warrior::DecreaseHP(int dec_hp){
    hp -= dec_hp;
}
void Warrior::IncreaseHP(int inc_hp){
    hp += inc_hp;
}

int Warrior::GetHP(){
    return hp;
}

void Warrior::IncreaseItemCnt(){
    itemCnt++;
}

void Warrior::DoAttack(){
    cout << "베기 사용" << endl;
}