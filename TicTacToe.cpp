#include<iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char currentPlayer = 'X';

//Function to display the board.
void displayBoard() {
    cout<<"Tic-Tac-Toe Game"<<endl;
    cout<<"----------------"<<endl;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" "<<board[i][j]<<" ";
            if(j < 2)
               {
                cout<<"|";
               }
        }
        cout<<endl;
        if(i< 2 )
        {
            cout<<"---|---|---"<<endl;
        }
    }
}

//Function to check for a win
bool checkWin() {
    for(int i=0;i<3;i++)
    {
        //Check rows and columns
        if((board[i][0] == board[i][1] && board[i][1] == board[i][2]) || (board[0][i] == board[1][i] && board[1][i] == board[2][i])) {
            return true;
        }
    }

    //Check diagonals
    if((board[0][0] == board[1][1] && board[1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
        return true;
    }
    return false;
}

//Function to check for a draw
bool checkDraw() {
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(board[i][i] != 'X' && board[i][j] != 'O')
            {
                return false;
            }
        }
    }
    return true;
}

//Function to switch the current player
void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

//Function to reset the board for a new game
void resetBoard() {
    char num = '1';
      for(int i=0;i<3;i++)
      {
        for(int j=0;j<3;j++)
        {
            board[i][j] = num++;
        }
      }
}

//Function to handle players move
bool makeMove(int position) {
    int row = (position - 1) / 3;
    int col = (position - 1) % 3;
    if(board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentPlayer;
        return true;
    }
    return false;
}

//game function
void playGame() {
    int position;
    bool gameOver = false;

    while(!gameOver) {
        displayBoard();
        cout<<"Player "<<currentPlayer<<", enter a position (1-9): ";
        cin>>position;

        if(position < 1 || position > 9 || !makeMove(position)) {
            cout<<"Invalid move! Try again."<<endl;
            continue;
        }

        if(checkWin()) {
            displayBoard();
            cout<<"Player "<<currentPlayer<<"wins!"<<endl;
            gameOver = true;
        } else if(checkDraw()) {
            displayBoard();
            cout<<"It's a draw!"<<endl;
            gameOver = true;
        } else {
            switchPlayer();
        }
    }
}

//Main function
int main() {
    char choice;
    do {
        resetBoard();
        currentPlayer = 'X';
        playGame();

        cout<<"Do you want to play again? (y/n)";
        cin>>choice;
    }while(choice == 'y' || choice == 'Y');

    cout<<"Thanks for playing Tic-Tac-Toe!" <<endl;
    return 0;
}