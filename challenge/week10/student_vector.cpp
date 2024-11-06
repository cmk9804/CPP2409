#include <vector>
#include <iostream>
using namespace std;

int main(void) {
    int input_score = 0;
    int counter = 0;
    int sum = 0;
    int avg;
    vector<int> score;
    
    

    while(input_score != -1){
        cout << "성적을 입력하시오(종료는 -1) : ";
        cin >> input_score;
        score.push_back(input_score);
        counter++;
    }
    score.pop_back();
    counter--;

    for(auto& e : score){
        sum += e;
    }
    
    avg = sum / counter;
    
    cout << "성적 평균 = " << avg << endl;

    return 0;
}