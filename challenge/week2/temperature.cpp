#include <iostream>
#include <string>
using namespace std;

int main()
{
    int fahrenheit;

    cout << "화씨온도: ";
    cin >> fahrenheit;
    cout << "섭씨온도: " << (5.0 / 9.0) * (fahrenheit - 32) << endl;
    return 0;
}