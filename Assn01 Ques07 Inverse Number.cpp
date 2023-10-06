// Inverse Of Number
// Code getting segmentation error
// Not working effeciently

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int num_length = num;

    int length = 0;
    while (num_length > 0)
    {
        length++;
        num_length /= 10;
    }

    int length2 = length;
    int arrint[length];

    int position = length-1;
    while (num > 0)
    {
        int start = num % 10;
        num /= 10;
        arrint[position] = start;
        position--;
    }

    int arrint2[length2];

    while (length2 > 0)
    {
        int face = arrint[length2];
        int place = length2;
        arrint2[face] = place;
        length2--;
    }

    for (int i = 0; i < length; i++)
    {
        cout << arrint2[i] << " ";
    }

    return 0;
}