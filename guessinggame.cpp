#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int num = 1;
    int guess;
    int ans = rand()%21;

    cout << "Welcome to the guessing game! Guess a number btween 0 and 20 to begin:";
    cin >> guess;

    while (guess != ans)
    {
        if(guess<ans)
        {
            cout << "Nope, higher! Guess again:";
            cin >> guess;
            num++;
        }
        else
        {
            cout << "Nope, lower! Guess again:";
            cin >> guess;
            num++;
        }
    }
    if(ans==1)
    {
        cout << "Correct! The number I was thinking of was: " << ans << ". It took you " << num << " guess to get it!" << endl;
    }
    else
    {
        cout << "Correct! The number I was thinking of was: " << ans << ". It took you " << num << " guesses to get it!" << endl;
    }
}
