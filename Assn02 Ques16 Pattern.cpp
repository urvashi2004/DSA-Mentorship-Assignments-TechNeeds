// pattern 16

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int counter = 1; counter <= num; counter++)
    {
        int n = 0;
        for (int token = 1; token <= num * 2; token++)
        {
            if (token < (counter + 1))
            {
                cout << ++n << " ";
            }
            else if (token > (num * 2 - counter - 1))
            {
                cout << n-- << " ";
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
