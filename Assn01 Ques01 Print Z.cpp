// print Z 

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "*";
    }
    cout << endl;

    for (int k = 0; k < 3; k++)
    {
        for (int j = 3-k; j > 0; j--)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "*";
    }

    return 0;
}