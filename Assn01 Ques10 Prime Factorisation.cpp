// Prime Factorisation

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int factor = 2;
    while (num > 0)
    {
        if (num % factor == 0)
        {
            cout << factor << " ";
            num /= factor;
        }
        else
            factor++;
    }

    return 0;
}