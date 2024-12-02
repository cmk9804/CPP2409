#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream os("temp.txt", ios::out);

    for(int i = 1; i <= 4; i++){
        if(os.is_open()){
            os << i << " " << 23.0 + i << endl;
        }
        else{
            cerr << "파일을 열 수 없습니다." << endl;
            return 1;
        }
    }
    os.close();

    ifstream is { "temp.txt", };
    if(!is){
        cerr << "파일 오픈에 실패하였습니다." << endl;
        exit(1);
    }

    int hour;
    double temperature;

    while(is >> hour >> temperature){
        cout << hour << "시: 온도 " << temperature << endl;
    }
    is.close();

    
    return 0;
}