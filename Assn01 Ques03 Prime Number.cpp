// Check Prime Number

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int arrint[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arrint[i];
    }

    for (int k = 0; k < num; k++)
    {
        string prime = "prime";
        for (int j = 2; j < arrint[k]; j++)
        {
            if (arrint[k] % j == 0)
            {
                prime = "not prime";
            }
        }
        cout << prime << endl;
    }

    return 0;
}