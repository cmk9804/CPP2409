#include <iostream>
using namespace std;

int main() {
    const int numCell = 3;
    char board[numCell][numCell]{};
    int x, y;
    

    for (x = 0; x < numCell; x++){
        for(y = 0; y < numCell; y++){
            board[x][y] = ' ';
        }
    }

    int k = 0;
    char currentUser = 'X';
    while (true){
        switch(k % 2){
            case 0:
                cout << "첫번째 유저(X)의 차례입니다 -> ";
                currentUser = 'X';
                break;
            case 1:
                cout << "두번째 유저(O)의 차례입니다 -> ";
                currentUser = 'O';
                break;
        }

        cout << "(x y) 좌표를 입력하세요: "; // 입력되는  x, y좌표 사이에 쉼표가 있다면 제대로 동작하지 않음
        cin >> y >> x;          // 표시될 x, y좌표에 맞춰서 입력 순서 변경

        if(x >= numCell || y >= numCell
            || x < 0 || y < 0) {    // 유효성 검사 조건 보강 
            cout << y << ", " << x << ": ";
            cout << "x와 y둘 중 하나가 칸을 벗어납니다." << endl;
            continue;
        }

        if(board[x][y] != ' '){
            cout << y << ", " << x << ": 이미 돌이 차있습니다." << endl;
            continue;
        }

        board[x][y] = currentUser;

        for(int i = 0; i < numCell; i++){
            cout << "---|---|---" << endl;
            for(int j = 0; j < numCell; j++){
                cout << board[i][j];
                if( j == numCell - 1) {
                    break;
                }
                cout << "   |";
            }
            cout << endl;
        }

        cout << "---|---|---" << endl;
        k++;

        // 6. 빙고 시 승자 출력 후 종료
        //가로
        for(int i = 0; i < numCell; i++){
            int l = 0;
            for(int j = 0; j < numCell; j++){
                if(board[i][j] == board[i][0] 
                && board[i][0] != ' ')
                    l++;
            }
            if(l == 3){
                cout << board[i][0] <<"의 승리입니다. 게임을 종료합니다" << endl;
                return 0;
            }
        }
        //세로
        for(int i = 0; i < numCell; i++){
            int l = 0;
            for(int j = 0; j < numCell; j++){
                if(board[j][i] == board[0][i]
                && board[0][i] != ' ')
                    l++;
            }
            if(l == 3){
                cout << board[0][i] <<"의 승리입니다. 게임을 종료합니다" << endl;
                return 0;
            }
        }
        //대각선
        if(board[0][0] == board[1][1]
            && board[0][0] == board[2][2]
            && board[0][0] != ' '){
                cout << board[0][0] <<"의 승리입니다. 게임을 종료합니다" << endl;
                break;
            }
        if(board[2][0] == board[1][1]
            && board[2][0] == board[0][2]
            && board[2][0] != ' '){
                cout << board[2][0] <<"의 승리입니다. 게임을 종료합니다" << endl;
                break;
            }

        // 7. 모든 칸이 찼으면 종료
        if(k == numCell * numCell){
            cout << "모든 칸이 다 찼습니다. 게임을 종료합니다" << endl;
            break;
        }
            
        
    }
    return 0;
}