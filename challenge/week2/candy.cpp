#include <iostream>
#include <string>
using namespace std;

int main()
{
    int money;
    int cost_candy;
    cout << "현재 가지고 있는 돈: ";
    cin >> money;
    cout << "캔디의 가격: ";
    cin >> cost_candy;
    cout << "최대로 살 수 있는 캔디 = " << money / cost_candy << endl;
    cout << "캔디 구입 후 남은 돈 = " << money % cost_candy << endl;
    return 0;
}