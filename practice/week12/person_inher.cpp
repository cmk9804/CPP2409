#include <iostream>
using namespace std;

class Person{
protected:
    string name;
    string address;
};

class Student : Person {
public:
    void SetAddress(string add) {
        address = add;
    }
    string GetAddress(){
        return address;
    }
    string GetName(){
        return name;
    }
    void SetName(string name){
        this->name = name;
    }
};

int main(){
    Student obj;
    obj.SetName("미수");
    obj.SetAddress("서울시 종로구 1번지");
    cout << obj.GetName() << endl;
    cout << obj.GetAddress() << endl;

    return 0;
}