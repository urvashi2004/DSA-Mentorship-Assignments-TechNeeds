// pattern 11

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int count = 1;

    for (int counter = 1; counter <= num ; counter++)
    {
        for (int token = 1; token <= counter; token++)
        {
            cout << count++ << " ";
        }
        cout << endl;
    }

    return 0;
}
