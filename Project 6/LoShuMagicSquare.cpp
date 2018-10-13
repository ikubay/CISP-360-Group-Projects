#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int createMagicSquareArray();
bool checkMagicSquareArray(int[3][3]);

int main()
{
    const int MAX_VALUE = 9;
    const int MIN_VALUE = 1;
    int arrayValue;
    int MagicSquareArray[3][3];
    int g;
    int i;
    unsigned seed = time(0);
    srand(seed);

    cout << "Generated square: " << endl;
    for (i = 0; i < 3; i++)
    {
        for (g = 0; g < 3; g++){
            arrayValue = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
            MagicSquareArray[i][g] = arrayValue;
            cout << arrayValue;
        }
        cout << endl;
    }

    /*Sample magic square array*/
    /*
    MagicSquareArray[0][0] = 4;
    MagicSquareArray[1][0] = 3;
    MagicSquareArray[2][0] = 8;
    MagicSquareArray[0][1] = 9;
    MagicSquareArray[1][1] = 5;
    MagicSquareArray[2][1] = 1;
    MagicSquareArray[0][2] = 2;
    MagicSquareArray[1][2] = 7;
    MagicSquareArray[2][2] = 6;
    */

    if (checkMagicSquareArray(MagicSquareArray)){
        cout << "The passed square is a Magic Square" << endl;
    }
    else{
        cout << "The passed square is not a Magic Square" << endl;
    };
    return 0;
}

bool checkMagicSquareArray(int testArray[3][3]){
    bool answer;
    answer = false;
    int expectedSum;
    //y, x

    expectedSum = testArray[0][0] + testArray[0][1] + testArray[0][2];

    if (((testArray[0][0] + testArray[1][0] + testArray[2][0]) != expectedSum) ||
        ((testArray[0][1] + testArray[1][1] + testArray[2][1]) != expectedSum) ||
        ((testArray[0][2] + testArray[1][2] + testArray[2][2]) != expectedSum)){
        cout << "Column 1 sum: " << testArray[0][0] + testArray[1][0] + testArray[2][0] << endl;
        cout << "Column 2 sum: " << testArray[0][1] + testArray[1][1] + testArray[2][1] << endl;
        cout << "Column 3 sum: " << testArray[0][2] + testArray[1][2] + testArray[2][2] << endl;
        cout << "The passed square's columns do not all add up to " << expectedSum << endl;
        return answer;
    }

    if (((testArray[0][0] + testArray[0][1] + testArray[0][2]) != expectedSum) ||
        ((testArray[1][0] + testArray[1][1] + testArray[1][2]) != expectedSum) ||
        ((testArray[2][0] + testArray[2][1] + testArray[2][2]) != expectedSum)){
        cout << "Row 1 sum: " << testArray[0][0] + testArray[0][1] + testArray[0][2] << endl;
        cout << "Row 2 sum: " << testArray[1][0] + testArray[1][1] + testArray[1][2] << endl;
        cout << "Row 3 sum: " << testArray[2][0] + testArray[2][1] + testArray[2][2] << endl;
        cout << "The passed square's rows do not all add up to " << expectedSum << endl;
        return answer;
    }

    if (((testArray[0][0] + testArray[1][1] + testArray[2][2]) != expectedSum) ||
        ((testArray[2][0] + testArray[1][1] + testArray[0][2]) != expectedSum)){
        cout << "Diagonal 1 sum: " << testArray[0][0] + testArray[1][1] + testArray[2][2] << endl;
        cout << "Diagonal 2 sum: " << testArray[2][0] + testArray[1][1] + testArray[0][2] << endl;
        cout << "The passed square's diagonals do not all add up to " << expectedSum << endl;
        return answer;
    }

    answer = true;
    return answer;
}





















