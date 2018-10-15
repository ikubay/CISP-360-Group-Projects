#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;



int main(){
    char gameBoard[3][3] = {{'*', '*', '*'},
                        {'*', '*', '*'},
                        {'*', '*', '*'}};

    int i;
    int g;
    char arrayValue;
    int currentPlayer = 1;
    int rowNumber;
    int columnNumber;
    string result = "ongoing";

    do{
        for (i = 0; i < 3; i++)
        {
            for (g = 0; g < 3; g++){
                arrayValue = gameBoard[i][g];
                cout << arrayValue;
            }
            cout << endl;
        }

        if (currentPlayer == 1){

            cout << "Player " << currentPlayer << ": Enter row number for X (1-3)" << endl;
            cin >> rowNumber;
            cout << "Player " << currentPlayer << ": Enter column number for X (1-3)" << endl;
            cin >> columnNumber;
            gameBoard[rowNumber - 1][columnNumber - 1] = 'X';
            currentPlayer = 2;

        }else{


            cout << "Player " << currentPlayer << ": Enter row number for O (1-3)" << endl;
            cin >> rowNumber;
            cout << "Player " << currentPlayer << ": Enter column number for O (1-3)" << endl;
            cin >> columnNumber;
            gameBoard[rowNumber - 1][columnNumber - 1] = 'O';
            currentPlayer = 1;

        }



    }while (result == "ongoing");

    if (result == "tie"){
        cout << "Tied game." << endl;
    }
    if (result == "player1"){
        cout << "Player 1 wins." << endl;
    }
    if (result == "player2"){
        cout << "Player 2 wins." << endl;
    }

    return 0;
}
