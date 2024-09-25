#include <iostream>
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));

    int answer = rand() % 100;
    int tries = 0;

    int guess;

    do{
        cout << "0 ~ 99 범위의 정수를 맞춰보세요" << endl;
        cin >> guess;
        tries++;

        if(guess > answer){
            cout << "제시한 정수가 높습니다." << endl;
        }
        else{
            cout << "제시한 정수가 낮습니다." << endl;
        }
    }while(guess != answer);

    cout << "축하합니다. 시도 횟수= " << tries << endl;

    return 0;
}