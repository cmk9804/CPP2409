#include <iostream>
using namespace std;

int main(){
    int a, b, c, largest;

    cout << "3개의 정수를 입력하시오: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)       //정수가 같으면 조건문의 결과가 달라질 수 있음
        largest = a;            //연산자 >를 >=로 수정하면 조건문의 결과가 달라지지 않음
    else if (b >= a && b >= c)  //a와 b가 같은수이고 가장 클 때는 largest에 a와 b의 값 중 아무것이나 대입해도 상관없음
        largest = b;
    else
        largest = c;  

    cout << "가장 큰 정수는" << largest << endl;

    return 0;
}