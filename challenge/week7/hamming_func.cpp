#include <iostream>
#include <string>
using namespace std;

string toLowerStr(string str){
    string s = str;

    for(int i = 0; s[i] != '\0'; ++i){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = (char)(s[i] + 32);
        }
    }

    return s;
}

string toUpperStr(string str){
    string s = str;

    for(int i = 0; s[i] != '\0'; ++i){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = (char)(s[i] - 32);
        }
    }

    return s;
}

int calcHammingDist(string s1, string s2){
    int count = 0;
    string str1 = toLowerStr(s1);
    string str2 = toLowerStr(s2);

    if(str1.length() != str2.length()){
        cout << "오류: 길이가 다름" << endl;
    }
    else{
        for(int i = 0; i < str1.length(); i++){
            if(str1[i] != str2[i]){
                count += 1;
            }
        }
    }

    return count;
}

int main(){
    string s1 = "Hello World";
    string s2 = "ASDFG World";
    string s3 = "ASDFG world";

    int count = calcHammingDist(s1, s2);

    cout << toLowerStr(s1) << endl;
    cout << toUpperStr(s1) << endl;
    cout << "해밍 거리는: " << count << endl;
    cout << "해밍 거리는: " << calcHammingDist(s2, s3) << endl;


    return 0;
}

