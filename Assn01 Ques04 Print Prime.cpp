// Print All Prime Numbers

#include <iostream>
using namespace std;

int main()
{
    int low, high;

    cout << "Low = ";
    cin >> low;
    cout << "High = ";
    cin >> high;

    for (int i = low; i <= high; i++)
    {
        bool prime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
            }
        }

        if (prime == true)
        {
            cout << i << "  ";
        }
    }

    return 0;
}