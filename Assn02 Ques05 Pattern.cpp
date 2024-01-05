// pattern 5
// i am able to create double the pattern but exact lines are giving errors as of now

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    for (int counter = num; counter >= 1; counter--)
    {
        for (int flag = counter; flag > 1; flag--)
        {
            cout << "  ";
        }

        for (int token = 1; token <= (num - counter) * 2 + 1; token++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    for (int counter = 1; counter <= num - 1; counter++)
    {
        for (int flag = counter; flag >= 1; flag--)
        {
            cout << "  ";
        }

        for (int token = (num - counter) * 2 - 1; token >= 1 ; token--)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}
