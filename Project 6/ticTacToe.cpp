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
    bool validChoice;
    bool freeSpaceExists;
    string result = "ongoing";

    for (i = 0; i < 3; i++)
        {
            for (g = 0; g < 3; g++){
                arrayValue = gameBoard[i][g];
                cout << arrayValue;
            }
            cout << endl;
        }

    do{
        validChoice = false;
        if (currentPlayer == 1){
            do{
            cout << "Player " << currentPlayer << ": Enter row number for X (1-3)" << endl;
            cin >> rowNumber;
            cout << "Player " << currentPlayer << ": Enter column number for X (1-3)" << endl;
            cin >> columnNumber;

            //cout << "Chosen rownumber: " << rowNumber << endl;
            //cout << "Chosen columnnumber: " << columnNumber << endl;
            if(rowNumber < 4 && rowNumber > 0 && columnNumber < 4 && columnNumber > 0){
                if (gameBoard[rowNumber - 1][columnNumber - 1] == '*'){
                    gameBoard[rowNumber - 1][columnNumber - 1] = 'X';
                    validChoice = true;
                }
                else
                    cout << "Invalid choice. Cannot make move that already exists." << endl;
            }
            else
                cout << "Invalid choice. Selection is outside board range." << endl;
            } while (validChoice == false);
            currentPlayer = 2;
        }else{
            do{
            cout << "Player " << currentPlayer << ": Enter row number for O (1-3)" << endl;
            cin >> rowNumber;
            cout << "Player " << currentPlayer << ": Enter column number for O (1-3)" << endl;
            cin >> columnNumber;

            //cout << "Chosen rownumber: " << rowNumber << endl;
            //cout << "Chosen columnnumber: " << columnNumber << endl;
            if(rowNumber < 4 && rowNumber > 0 && columnNumber < 4 && columnNumber > 0){
                if (gameBoard[rowNumber - 1][columnNumber - 1] == '*'){
                    gameBoard[rowNumber - 1][columnNumber - 1] = 'O';
                    validChoice = true;
                    }
                else
                    cout << "Invalid choice. Cannot make move that already exists." << endl;
            }
            else
                cout << "Invalid choice. Selection is outside board range." << endl;
            }while (validChoice == false);
            currentPlayer = 1;
        }


    if (gameBoard[0][0] == 'X' && gameBoard[1][0] == 'X' && gameBoard[2][0] == 'X'
        ||gameBoard[0][1] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][1] == 'X'
        || gameBoard[0][2] == 'X' && gameBoard[1][2] == 'X' && gameBoard[2][2] == 'X'

        || gameBoard[0][0] == 'X' && gameBoard[0][1] == 'X' && gameBoard[0][2] == 'X'
        || gameBoard[1][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[1][2] == 'X'
        || gameBoard[2][0] == 'X' && gameBoard[2][1] == 'X' && gameBoard[2][2] == 'X'

        || gameBoard[0][2] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][0] == 'X'
        || gameBoard[0][0] == 'X' && gameBoard[1][1] == 'X' && gameBoard[2][2] == 'X'
        )
        result = "player1";

    if (gameBoard[0][0] == 'O' && gameBoard[1][0] == 'O' && gameBoard[2][0] == 'O'
        ||gameBoard[0][1] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][1] == 'O'
        || gameBoard[0][2] == 'O' && gameBoard[1][2] == 'O' && gameBoard[2][2] == 'O'

        || gameBoard[0][0] == 'O' && gameBoard[0][1] == 'O' && gameBoard[0][2] == 'O'
        || gameBoard[1][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[1][2] == 'O'
        || gameBoard[2][0] == 'O' && gameBoard[2][1] == 'O' && gameBoard[2][2] == 'O'

        || gameBoard[0][2] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][0] == 'O'
        || gameBoard[0][0] == 'O' && gameBoard[1][1] == 'O' && gameBoard[2][2] == 'O'
        )
        result = "player2";


    freeSpaceExists = false;
        for (i = 0; i < 3; i++)
        {
            for (g = 0; g < 3; g++){
                arrayValue = gameBoard[i][g];
                cout << arrayValue;
                if (arrayValue == '*')
                    freeSpaceExists = true;
            }
            cout << endl;
        }
    if (freeSpaceExists == false)
        result = "tie";


    }while (result == "ongoing");


    for (i = 0; i < 3; i++)
        {
            for (g = 0; g < 3; g++){
                arrayValue = gameBoard[i][g];
                cout << arrayValue;
            }
            cout << endl;
        }

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
