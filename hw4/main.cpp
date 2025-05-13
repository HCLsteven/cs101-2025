#include <iostream>
using namespace std;

class TicTacToe {
private:
    char board[9];
    char current;
    // 八種可能的連線組合
    static const int winCombos[8][3];

public:
    TicTacToe() : current('X') {
        for (int i = 0; i < 9; ++i)
            board[i] = '1' + i;
    }

    void printIntro() {
        cout << "-- Tic Tac Toe -- CSIE@CGU\n";
        cout << "Player 1 (X) - Player 2 (O)\n";
    }

    void printBoard() {
        cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " \n";
        cout << "---+---+---\n";
        cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " \n";
        cout << "---+---+---\n";
        cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " \n";
    }

    bool makeMove(int pos) {
        if (pos < 1 || pos > 9) return false;
        char &cell = board[pos - 1];
        if (cell == 'X' || cell == 'O') return false;
        cell = current;
        return true;
    }

    bool checkWin() {
        for (int i = 0; i < 8; ++i) {
            int a = winCombos[i][0],
                b = winCombos[i][1],
                c = winCombos[i][2];
            if (board[a] == current &&
                board[b] == current &&
                board[c] == current)
                return true;
        }
        return false;
    }

    bool isDraw() {
        for (int i = 0; i < 9; ++i)
            if (board[i] >= '1' && board[i] <= '9')
                return false;
        return true;
    }

    void switchPlayer() {
        current = (current == 'X') ? 'O' : 'X';
    }

    char getCurrent() const {
        return current;
    }

    const char* getPlayerLabel() const {
        return (current == 'X') ? "Player 1 (X)" : "Player 2 (O)";
    }
};

// 在類別外定義靜態勝利組合
const int TicTacToe::winCombos[8][3] = {
    {0,1,2}, {3,4,5}, {6,7,8},
    {0,3,6}, {1,4,7}, {2,5,8},
    {0,4,8}, {2,4,6}
};

int main() {
    TicTacToe game;
    game.printIntro();
    game.printBoard();

    while (true) {
        int choice;
        cout << "==> " << game.getPlayerLabel() << ", enter a number:";
        cin >> choice;

        if (!game.makeMove(choice)) {
            cout << "==> Invalid value, please enter again\n";
            continue;
        }

        game.printBoard();

        if (game.checkWin()) {
            cout << "==> "
                 << (game.getCurrent() == 'X' ? "Player 1 wins!" : "Player 2 wins!")
                 << "\n";
            break;
        }

        if (game.isDraw()) {
            cout << "==> Game draw\n";
            break;
        }

        game.switchPlayer();
    }

    return 0;
}
