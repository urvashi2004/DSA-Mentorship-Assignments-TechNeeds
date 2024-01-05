// pattern 12

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int num1=0, num2=1, newnum = 0;
    
    for (int counter = 1; counter <= num ; counter++)
    {
        for (int token = 1; token <= counter; token++)
        {
            cout << newnum << " ";
            num1 = num2;
            num2 = newnum;
            newnum = num1 + num2;
        }
        cout << endl;
    }

    return 0;
}
