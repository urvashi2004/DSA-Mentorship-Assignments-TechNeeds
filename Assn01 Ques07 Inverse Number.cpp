// Inverse Of Number

#include <iostream>
using namespace std;

int main()
{
    int num;        // enter the number
    cin >> num;
    int num2 = num;       // new varible to change value of num

    int length = 0;         // for length of string
    while (num2 > 0)
    {
        length++;
        num2 /= 10;
    }

    int arrint[length];     // to store face and space value seperately

    int position = 0;
    int num3 = num;       // new varible to change value of num
    while (position < length && num3 > 0)       // to save values in an array in reverse order
    {
        int start = num3 % 10;
        num3 /= 10;
        arrint[position] = start;
        position++;
    }

    int length2 = length;       // new varible to change value of length
    int arrint2[length2];

    while (length2 > 0)
    {
        int face = arrint[length2 - 1];
        int place = length2;
        arrint2[face - 1] = place;
        length2--;
    }

    for (int i = length-1; i >= 0; i--)
    {
        cout << arrint2[i];
    }

    return 0;
}
