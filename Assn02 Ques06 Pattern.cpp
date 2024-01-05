// pattern 6
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
        for (int token = 1; token <= (num * 2) - 1 ; token++)
        {
            if (counter == num || token <= counter || token >= ((num * 2) - counter))
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

    for (int counter = 1; counter <= num - 1; counter++)
    {
        for (int token = 1; token <= (num * 2) - 1 ; token++)
        {
            if (counter == num || token <= counter + 1 || token >= ((num * 2) - counter - 1))
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
