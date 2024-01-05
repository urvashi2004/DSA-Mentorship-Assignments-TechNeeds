// pattern 3

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int k = num-i; k >= 1; k--)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
