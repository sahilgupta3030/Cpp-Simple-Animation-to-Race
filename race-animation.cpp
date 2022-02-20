#include <iostream>
using namespace std;
int main()
{
    const int size = 60;
    cout << "Enter a letter to begin.. .. \n ";
    char x;
    cin >> x;
    int position = size / 2;

    // endless loop for message processing
    while (true)
    {
        cout << "|START|";
        for (int i = 0; i < size; i++)
        {
            if (i == position)
                cout << x;
            else
                cout << " ";
        }
        cout << "|FINISH|" << endl;
        // "rand()%3" this will generate random number from 0-2
        int move = (rand() % 3) - 1;
        position = position + move;

        // After Executing the upper loop it will execeute the below code..
        if (position < 1)
        {
            cout << "You could not finish the race!" << endl;
            break;
        }
        if (position > size - 1)
        {
            cout << "Yay! You finished the race.." << endl;
            break;
        }
        // To add Delay
        for (int sleep = 0; sleep < 10000000; ++sleep)
            ;
    }
    return 0;
}

