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
    cout << "done" << endl;
    cout << MagicSquareArray[0][0] << endl;
    cout << MagicSquareArray[1][0] << endl;
    cout << MagicSquareArray[2][0] << endl;
    checkMagicSquareArray(MagicSquareArray);
    return 0;
}

bool checkMagicSquareArray(int testArray[3][3]){
    bool answer;
    cout << "in fn" << endl;
    cout << testArray[0][0] << endl;
    cout << testArray[1][0] << endl;
    cout << testArray[2][0] << endl;




    answer = true;
    return answer;
}





















