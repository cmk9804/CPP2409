#include <iostream>
using namespace std;

int main() {
    int floor;
    cout << "몇 층을 쌓겠습니까?" ;
    cin >> floor;
    for(int i = 0; i < floor; i++){
        for(int j = 0; j < floor - i - 1; j++){
            cout << " ";
        }
        for(int k = 0; k < i + 1; k++){
            cout << "*";
        }
        for(int k = 0; k < i; k++){
            cout << "*";
        }
        cout << endl;
    }
}