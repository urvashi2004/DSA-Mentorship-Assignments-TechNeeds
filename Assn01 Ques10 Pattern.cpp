// pattern 10
// same as double lines issue

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int counter = 1; counter <= num; counter++)
    {
        for (int flag = num - counter + 1; flag > 1; flag--)
        {
            cout << "  ";
        }

        for (int token = 1; token <= (counter * 2) + 1; token++)
        {
            if (token == 1 || token == ((counter * 2) - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    for (int counter = num - 1; counter >= 1; counter--)
    {
        for (int flag = 1; flag <= num - counter; flag++)
        {
            cout << "  ";
        }

        for (int token = 1; token <= (counter * 2) + 1; token++)
        {
            if (token == 1 || token == ((counter * 2) - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}
