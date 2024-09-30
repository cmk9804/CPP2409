#include <iostream>
using namespace std;

int main() {
    int floor;
    cout << "몇 층을 쌓겠습니까?" ;
    cin >> floor;

    for(int i = floor; i > 0; i--){

        for(int j = i; j < floor; j++){
            cout << " ";
        }

        for(int k = 0; k < i; k++){
            cout << "*";
        }
        for(int k = 0; k < i - 1; k++){
            cout << "*";
        }
        cout << endl;
    }
}