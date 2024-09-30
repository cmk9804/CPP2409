#include <iostream>
#include <string>
using namespace std;

int main(){
    const int maxPeople = 5;
    string names[maxPeople];
    int ages[maxPeople];
    int choice;
    int max, min;
    

    cout << maxPeople << "명의 회원 정보를 입력해주세요." << endl;

    for (int i = 0; i < maxPeople; i++){
        cout << "사람 " << i + 1 << "의 이름: ";
        cin >> names[i];
        cout << "사람 " << i + 1 << "의 나이: ";
        cin >> ages[i];
    }

    while(1){
        cout << "1. 가장 나이가 많은 사람 출력 " << endl;
        cout << "2. 가장 나이가 적은 사람 출력 " << endl;
        cout << "3. 종료 " << endl;

        int out_flag = 0;

        cin >> choice;

        switch(choice){
        case 1: 
            int i;
            for(i = 0; i < maxPeople; i++){
                if(ages[i] > max){
                    max = i;
                }
            }
            for(i = 0; i < maxPeople; i++){
                if(ages[i] == ages[max]){
                    if(i != max){
                        cout << "나이가 같습니다." << endl;

                        
                        cout << "가장 나이가 많은 사람: " << names[i] << "(" << ages[i] << "세)" << endl;
                        cout << "가장 나이가 많은 사람: " << names[max] << "(" << ages[max] << "세)" << endl;
                        

                        out_flag = 1;
                        /*
                        int tmp = rand() % 2;
                        switch(tmp){
                            case 0:
                            cout << "가장 나이가 많은 사람: " << names[i] << "(" << ages[i] << "세)" << endl;
                            out_flag = 1;
                            break;
                            case 1:
                            cout << "가장 나이가 많은 사람: " << names[max] << "(" << ages[max] << "세)" << endl;
                            out_flag = 1;
                            break;
                        }
                        */
                    }
                }
            }
            if(out_flag == 0){
                cout << "가장 나이가 많은 사람: " << names[max] << "(" << ages[max] << "세)" << endl;
            }
            break;
        case 2: 
            for(i = 0; i < maxPeople; i++){
                if(ages[i] < min){
                    min = i;
                }
            }
            for(i = 0; i < maxPeople; i++){
                if(ages[i] == ages[min]){
                    if(i != min){
                        cout << "나이가 같습니다." << endl;

                        cout << "가장 나이가 적은 사람: " << names[i] << "(" << ages[i] << "세)" << endl;
                        cout << "가장 나이가 적은 사람: " << names[min] << "(" << ages[min] << "세)" << endl;
                        out_flag = 1;
                        /*int tmp = rand() % 2;
                        switch(tmp){
                            case 0:
                            cout << "가장 나이가 적은 사람: " << names[i] << "(" << ages[i] << "세)" << endl;
                            out_flag = 1;
                            break;
                            case 1:
                            cout << "가장 나이가 적은 사람: " << names[min] << "(" << ages[min] << "세)" << endl;
                            out_flag = 1;
                            break;
                        }
                        */
                    }
                }
            }
            if(out_flag == 0){
                cout << "가장 나이가 적은 사람: " << names[min] << "(" << ages[min] << "세)" << endl;
            }
            break;
        case 3:
            cout << "종료" << endl;
            return 0;
            break;
        default: 
            cout << "잘못된 입력입니다" << endl;
            return 0;
            break;
        }
    }
}