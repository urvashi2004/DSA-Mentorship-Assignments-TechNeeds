// pattern 4

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        for (int k = 1; k <= i-1; k++)
        {
            cout << "  ";
        }
        for (int j = num-i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
