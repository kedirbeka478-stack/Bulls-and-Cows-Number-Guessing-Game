#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    vector<int> four;
    int bulls = 0;
    int cows = 0;
    int c = 0;
    int cSharp = 0;
    int guessNum;
    bool unique = true;
    int num;

    cout << "**************************** BULLS AND COWS: GUESSING GAME ****************************" << endl << endl;
    cout << "Guess four numbers.\n";
    cout << "If you guessed the number and the position right it's '1 bulls'\n";
    cout << "If you guessed the number right and the position wrong it's '1 cows'\n";
    cout << endl; 

    srand(time(NULL));

    for (int i = 0; i < 4; i++) 
    {
        num = rand() % 9 + 1;
        four.push_back(num);
    }

    while (unique) 
    {
        for (int i = 0; i < 4; i++)
        {
            c = 0;

            for (int j = 0; j < 4; j++)
            {
                if (four[i] == four[j]) c++;
            }

            if (c > 1) four[i] = rand() % 9 + 1;
        }

        cSharp = 0;

        for (int i = 0; i < 4; i++)
        {
            c = 0;

            for (int j = 0; j < 4; j++) 
            {
                if (four[i] == four[j]) c++;
            }
            if (c != 1) break;
            else cSharp++;
        }

        if (cSharp == 4) unique = false;
    }

    for (int n : four) cout << n << " ";
    

    while (bulls != 4) {
        bulls = 0;
        cows = 0;
        vector<int> guess;

        cout << endl;
        cout << "Guess and enter the four numbers.\n";

        for (int i = 0; i < 4; i++) {
            cin >> guessNum;

            while (guessNum > 9 || guessNum <= 0) {
                cout << "Please enter a number b/n [1 - 9] only\n";
                cin >> guessNum;
            }
            guess.push_back(guessNum);
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                if (guess[i] == four[j] && i == j) 
                {
                    bulls++;
                }
                if (guess[i] == four[j] && i != j) 
                {
                    cows++;
                }
            }
        }

        cout << endl;
        cout << bulls << " Bulls" << endl;
        cout << cows << " Cows" << endl;
    }

    cout << "Congrats! You nailed it.\n\n";
}
